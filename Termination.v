Require Import Arith List Omega.
Require Import GallStar.Defs.
Require Import GallStar.Tactics.
Require Import GallStar.Utils.
Import ListNotations.

Module TerminationFn (Import D : Defs.T).

  (* Definitions related to well-founded measures *)

  Definition headFrameSize (fr : suffix_frame) : nat :=
    match fr with
    | SF _ suf => length suf
    end.

  Definition headFrameScore (fr : suffix_frame) (b : nat) (e : nat) : nat :=
    headFrameSize fr * (b ^ e).

  Definition tailFrameSize (fr : suffix_frame) : nat :=
    match fr with
    | SF _ []          => 0
    | SF _ (_ :: suf') => length suf'
    end.

  Definition tailFrameScore (fr : suffix_frame) (b : nat) (e : nat) : nat :=
    tailFrameSize fr * (b ^ e).

  Fixpoint tailFramesScore (frs : list suffix_frame) (b : nat) (e : nat) : nat :=
    match frs with
    | []         => 0
    | fr :: frs' => tailFrameScore fr b e + tailFramesScore frs' b (1 + e)
    end.

  Definition stackScore (stk : suffix_stack) (b : nat) (e : nat) : nat :=
    let (fr, frs) := stk in
    headFrameScore fr b e + tailFramesScore frs b (1 + e).

  Definition stackHeight {A} (stk : A * list A) : nat :=
    let (_, frs) := stk in length frs.

  (* Termination-related lemmas *)
  
  Lemma nonzero_exponents_lt_powers_le :
    forall b e1 e2,
      0 < e1 < e2
      -> b ^ e1 <= b ^ e2.
  Proof.
    intros b e1 e2 [Hlt Hlt']. 
    destruct b as [| b']. 
    - destruct e1; destruct e2; auto.
      omega.
    - destruct b' as [| b''].
      + repeat rewrite Nat.pow_1_l; auto.
      + pose proof Nat.pow_lt_mono_r as H. 
        specialize (H (S (S b'')) e1 e2). 
        assert (fact : forall n m, n < m -> n <= m) by (intros; omega).
        apply fact.
        apply Nat.pow_lt_mono_r; auto.
        omega.
  Qed.
  
  Lemma nonzero_exponents_lt_tailFrameScore_le :
    forall fr b e1 e2,
      0 < e1 < e2
      -> tailFrameScore fr b e1 <= tailFrameScore fr b e2.
  Proof.
    intros fr b e1 e2 Hlt.
    unfold tailFrameScore. 
    apply Nat.mul_le_mono_l.
    apply nonzero_exponents_lt_powers_le; auto.
  Qed.

  Lemma nonzero_exponents_lt_tailFramesScore_le :
    forall frs b e1 e2,
      0 < e1 < e2
      -> tailFramesScore frs b e1 <= tailFramesScore frs b e2.
  Proof.
    intros frs.
    induction frs as [| fr frs' IH]; intros b e1 e2 Hlt; simpl; auto.
    apply plus_le_compat.
    - apply nonzero_exponents_lt_tailFrameScore_le; auto.
    - apply IH; omega.
  Qed.

  Lemma nonzero_exponents_lt_stackScore_le :
    forall v b e1 e2 e3 e4 frs,
      0 < e1 < e2
      -> 0 < e3 < e4
      -> v * (b ^ e1) + tailFramesScore frs b e3 <= 
         v * (b ^ e2) + tailFramesScore frs b e4.
  Proof.
    intros v b e1 e2 e3 e4 frs [H0e1 He1e2] [H0e3 He3e4].
    apply plus_le_compat.
    - apply Nat.mul_le_mono_l. 
      apply nonzero_exponents_lt_powers_le; auto.
    - apply nonzero_exponents_lt_tailFramesScore_le; auto.
  Qed.

  Lemma mem_true_cardinality_neq_0 :
    forall x s,
      NtSet.mem x s = true -> NtSet.cardinal s <> 0.
  Proof.
    intros x s Hm; unfold not; intros Heq.
    rewrite NtSet.mem_spec in Hm.
    apply cardinal_inv_1 in Heq.
    unfold NtSet.Empty in Heq. 
    eapply Heq; eauto.
  Qed.
  
  Lemma mem_true_cardinality_gt_0 :
    forall x s,
      NtSet.mem x s = true -> 0 < NtSet.cardinal s.
  Proof.
    intros x s Hm.
    apply mem_true_cardinality_neq_0 in Hm; omega.
  Qed.

  Lemma stackScore_le_after_return :
    forall callee caller caller' o o' x x' suf' av locs b,
      callee = SF o []
      -> caller  = SF o' (NT x' :: suf')
      -> caller' = SF o' suf'
      -> stackScore (caller', locs) b (NtSet.cardinal (NtSet.add x av))
         <= stackScore (callee, caller :: locs) b (NtSet.cardinal av).
  Proof.
    intros ce cr cr' o o' x x' suf' av locs b hce hcr hcr'; subst.
    unfold stackScore; simpl.
    unfold headFrameScore; unfold headFrameSize.
    unfold tailFrameScore; unfold tailFrameSize.
    destruct (NtSet.mem x av) eqn:hm.
    - rewrite add_cardinal_1; auto.
      eapply nonzero_exponents_lt_stackScore_le.
      + split; auto.
        eapply mem_true_cardinality_gt_0; eauto.
      + split; omega.
    - rewrite add_cardinal_2; auto.
  Qed.

  (* this version might be easier to apply *)
  Lemma stackScore_le_after_return' :
    forall suf_cr o o' x b av frs,
      stackScore (SF o' suf_cr, frs) 
                 b 
                 (NtSet.cardinal (NtSet.add x av))
      <= 
      stackScore (SF o [], SF o' (NT x :: suf_cr) :: frs) 
                 b 
                 (NtSet.cardinal av).
  Proof.
    intros; eapply stackScore_le_after_return; sis; eauto.
  Qed.

  Lemma remove_cardinal_minus_1 :
    forall (x : nonterminal) (s : NtSet.t),
      NtSet.mem x s = true
      -> NtSet.cardinal (NtSet.remove x s) = NtSet.cardinal s - 1.
  Proof.
    intros x s Hm.
    rewrite <- remove_cardinal_1 with (s := s) (x := x); auto.
    omega.
  Qed.

  Lemma lt_lt_mul_nonzero_r :
    forall y x z,
      x < y -> 0 < z -> x < y * z.
  Proof.
    intros y x z Hxy Hz.
    destruct z as [| z]; try omega.
    rewrite Nat.mul_succ_r. 
    apply Nat.lt_lt_add_l; auto.
  Qed.

  Lemma base_gt_zero_power_gt_zero :
    forall b e,
      0 < b
      -> 0 < b ^ e.
  Proof.
    intros b e Hlt; induction e as [| e IH]; simpl in *; auto.
    destruct b as [| b]; try omega.
    apply lt_lt_mul_nonzero_r; auto.
  Qed.

  Lemma less_significant_value_lt_more_significant_digit :
    forall e2 e1 v b,
      v < b
      -> e1 < e2
      -> v * (b ^ e1) < b ^ e2.
  Proof.
    intros e2; induction e2 as [| e2 IH]; intros e1 v b Hvb Hee; sis; try omega.
    destruct b as [| b]; try omega.
    destruct e1 as [| e1].
    - rewrite Nat.mul_1_r.
      apply lt_lt_mul_nonzero_r; auto.
      apply base_gt_zero_power_gt_zero; omega.    
    - rewrite Nat.pow_succ_r; try omega. 
      rewrite <- Nat.mul_comm.
      rewrite <- Nat.mul_assoc.
      apply mult_lt_compat_l; try omega.
      rewrite Nat.mul_comm.
      apply IH; omega. 
  Qed.

  Lemma stackScore_lt_after_push :
    forall g callee caller o o' x suf' av rhs locs,
      callee = SF o rhs
      -> caller = SF o' (NT x :: suf')
      -> NtSet.In x av
      -> In (x, rhs) g
      -> stackScore (callee, caller :: locs)
                    (1 + maxRhsLength g)
                    (NtSet.cardinal (NtSet.remove x av))
         <
         stackScore (caller, locs)
                    (1 + maxRhsLength g)
                    (NtSet.cardinal av).
  Proof.
    intros g callee caller o o' x suf' av rhs locs
           Hcallee Hcaller Hin Hin'; subst; simpl.
    apply NtSet.mem_spec in Hin.
    rewrite remove_cardinal_1; auto.
    unfold headFrameScore; unfold headFrameSize.
    unfold tailFrameScore; unfold tailFrameSize; simpl.
    rewrite plus_assoc; repeat apply plus_lt_compat_r.
    rewrite remove_cardinal_minus_1; auto.
    apply less_significant_value_lt_more_significant_digit.
    - eapply grammar_rhs_length_lt_max_plus_1; eauto.
    - erewrite <- remove_cardinal_1; eauto; omega.
  Qed.

  Lemma stackScore_lt_after_push' :
    forall g suf_cr rhs o o' x av locs,
      NtSet.In x av
      -> In (x, rhs) g
      -> stackScore (SF o rhs, SF o' (NT x :: suf_cr) :: locs)
                    (1 + maxRhsLength g)
                    (NtSet.cardinal (NtSet.remove x av))
         <
         stackScore (SF o' (NT x :: suf_cr), locs)
                    (1 + maxRhsLength g)
                    (NtSet.cardinal av).
  Proof.
    intros; eapply stackScore_lt_after_push; sis; eauto.
  Qed.

End TerminationFn.

