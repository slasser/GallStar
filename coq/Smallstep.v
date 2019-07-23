Require Import FMaps Omega PeanoNat String. 
Require Import Defs.
Require Import Lex.
Import ListNotations.

Record parser_state    := Pst { avail   : NtSet.t
                              ; loc_stk : location_stack
                              ; tokens  : list token
                              ; val_stk : semval_stack
                              }.

Record parser_frame := parserFrame { syms    : list symbol
                                   ; sem_val : forest
                                   }.

Definition parser_stack := (parser_frame * list parser_frame)%type.

Record parser_state := parserState { avail  : NtSet.t
                                   ; stack  : parser_stack 
                                   ; tokens : list token
                                   }.

Inductive step_result := StepAccept : forest -> list token -> step_result
                       | StepReject : string -> step_result
                       | StepK      : parser_state  -> step_result
                       | StepError  : string -> step_result.

Inductive parse_result := Accept : forest -> list token -> parse_result
                        | Reject : string -> parse_result
                        | Error  : string -> parse_result.

Definition step (tbl : parse_table) (st : parser_state) : step_result :=
  match st with
  | parserState av (fr, frs) ts =>
    match fr with
    | parserFrame gamma sv =>
      match gamma with
      | [] => 
        match frs with
        | [] => StepAccept sv ts
        | parserFrame gamma_caller sv_caller :: frs' =>
          match gamma_caller with
          | [] => StepError "impossible"
          | T _ :: _ => StepError "impossible"
          | NT x :: gamma_caller' => 
            let caller' := parserFrame gamma_caller' (sv_caller ++ [Node x sv])
            in  StepK (parserState (NtSet.add x av) (caller', frs') ts)
          end
        end
      | T a :: gamma' =>
        match ts with
        | [] => StepReject "input exhausted"
        | (a', l) :: ts' =>
          if t_eq_dec a' a then 
            let fr' := parserFrame gamma' (sv ++ [Leaf l])
            in  StepK (parserState (allNts tbl) (fr', frs) ts')
          else
            StepReject "token mismatch"
        end
      | NT x :: gamma' => 
        if NtSet.mem x av then
          match ParseTable.find (x, peek ts) tbl with
          | Some gamma_callee =>
            let callee := parserFrame gamma_callee []
            in  StepK (parserState (NtSet.remove x av) (callee, fr :: frs) ts)
          | None => StepReject "no parse table entry"
          end
        else
          StepError "left recursion detected"
      end
    end
  end.

Definition headFrameSize (fr : parser_frame) : nat :=
  List.length fr.(syms).

Definition headFrameScore (fr : parser_frame) (b : nat) (e : nat) : nat :=
  headFrameSize fr * (b ^ e).

Definition tailFrameSize (fr : parser_frame) : nat :=
  match fr.(syms) with
  | [] => 0
  | _ :: syms' => List.length syms'
  end.

Definition tailFrameScore (fr : parser_frame) (b : nat) (e : nat) : nat :=
  tailFrameSize fr * (b ^ e).

Fixpoint tailFramesScore (frs : list parser_frame) (b : nat) (e : nat) : nat :=
  match frs with
  | [] => 0
  | fr :: frs' => tailFrameScore fr b e + tailFramesScore frs' b (1 + e)
  end.

Definition stackScore (stk : parser_stack) (b : nat) (e : nat) : nat :=
  let (hf, tfs) := stk
  in  headFrameScore hf b e + tailFramesScore tfs b (1 + e).

Definition stackHeight (stk : parser_stack) : nat :=
  let (_, frs) := stk in List.length frs.

Definition meas (st : parser_state) (tbl : parse_table) : nat * nat * nat :=
  let m := maxEntryLength tbl        in
  let e := NtSet.cardinal st.(avail) in
  (List.length st.(tokens), stackScore st.(stack) (1+m) e, stackHeight st.(stack)).

Lemma meas_unfold : 
  forall st tbl, meas st tbl = (List.length st.(tokens), 
                                stackScore st.(stack) (1 + maxEntryLength tbl) (NtSet.cardinal st.(avail)),
                                stackHeight st.(stack)).
Proof. 
  auto.
Qed.

Definition nat_triple_lex : relation (nat * nat * nat) :=
  triple_lex nat nat nat lt lt lt.

Lemma headFrameScore_nil :
  forall fr b e,
    fr.(syms) = [] -> headFrameScore fr b e = 0.
Proof.
  intros fr b e Hfr.
  unfold headFrameScore. unfold headFrameSize.
rewrite Hfr; auto.
Qed.

Lemma tailFrameScore_cons :
  forall fr sym gamma b e,
    fr.(syms) = sym :: gamma -> tailFrameScore fr b e = List.length gamma * (b ^ e).
Proof.
  intros fr sym gamma b e Hfr.
  unfold tailFrameScore. unfold tailFrameSize.
  rewrite Hfr; auto.
Qed.

Lemma stackScore_head_frame_nil :
  forall fr frs b e, 
    fr.(syms) = [] 
    -> stackScore (fr, frs) b e = tailFramesScore frs b (1 + e).
Proof.
  intros fr frs b e Hfr.  
  unfold stackScore. unfold headFrameScore. unfold headFrameSize.
  rewrite Hfr; simpl; auto.
Qed.

Lemma stackScore_pre_return :
  forall fr fr' sym gamma frs b e, 
    fr.(syms) = nil
    -> fr'.(syms) = sym :: gamma
    -> stackScore (fr, fr' :: frs) b e = 
       (List.length gamma * b ^ (1 + e)) + tailFramesScore frs b (2 + e).
Proof.
  intros fr fr' sym gamma frs b e Hfr Hfr'.
  rewrite stackScore_head_frame_nil; auto.
  simpl.
  erewrite tailFrameScore_cons; eauto.
Qed.

Lemma post_return_state_lt_pre_return_state :
  forall st st' ts callee caller caller' frs x gamma av tbl,
    st = parserState av (callee, caller :: frs) ts
    -> st' = parserState (NtSet.add x av) (caller', frs) ts
    -> callee.(syms) = []
    -> caller.(syms) = NT x :: gamma
    -> caller'.(syms) = gamma
    -> nat_triple_lex (meas st' tbl) (meas st tbl).
Proof.
  intros st st' ts callee caller caller' frs x gamma av tbl Hst Hst' Hnil Hcons Htl; subst.
  unfold meas; simpl.
  rewrite headFrameScore_nil with (fr := callee); simpl; auto.
  erewrite tailFrameScore_cons; eauto.
  unfold headFrameScore. unfold headFrameSize.
  destruct (NtSet.mem x av) eqn:Hm.
  - (* x is already in av, so the cardinality stays the same *)
    rewrite add_cardinal_1; auto.
    pose proof nonzero_exponents_lt_stackScore_le as Hle. 
    specialize (Hle (List.length caller'.(syms))
                  (S (maxEntryLength tbl)) 
                  (NtSet.cardinal av)
                  (S (NtSet.cardinal av))
                  (S (NtSet.cardinal av))
                  (S (S (NtSet.cardinal av)))
                  frs).
    apply le_lt_or_eq in Hle.
    + destruct Hle as [Hlt | Heq]; subst.
      * apply triple_snd_lt; auto.
      * rewrite Heq.
        apply triple_thd_lt; auto.
    + split; auto.
      eapply mem_true_cardinality_gt_0; eauto.
    + split; auto.
      omega.
  - (* x isn't in av, so the cardinality increase by 1 *)
    rewrite add_cardinal_2; auto.
    apply triple_thd_lt; auto.
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
  forall b e, 0 < b -> 0 < b ^ e.
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
  intros e2; induction e2 as [| e2]; intros e1 v b Hvb Hee; simpl in *; try omega.
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
    apply IHe2; omega. 
Qed.

Lemma list_element_le_listMax :
  forall xs x,
    In x xs -> x <= listMax xs.
Proof.
  intros xs; induction xs as [| x' xs IH]; intros x Hin; simpl; inv Hin.
  - apply Nat.le_max_l.
  - apply IH in H. 
    apply Nat.max_le_iff; auto.
Qed.

Lemma gamma_in_table_length_in_entryLengths :
  forall k gamma tbl,
    In (k, gamma) (ParseTable.elements tbl)
    -> In (List.length gamma) (entryLengths tbl).
Proof.
  intros k gamma tbl Hin.
  unfold entryLengths.
  induction (ParseTable.elements tbl) as [| (k', gamma') prs IH]; inv Hin; simpl in *.
  - inv H; auto.
  - apply IH in H; auto.
Qed.

Module Export PF := WFacts ParseTable.

Lemma pt_findA_In :
  forall (k : ParseTable.key) (gamma : list symbol) (l : list (ParseTable.key * list symbol)),
    findA (PF.eqb k) l = Some gamma
    -> In (k, gamma) l.
Proof.
  intros.
  induction l.
  - inv H.
  - simpl in *.
    destruct a as (k', gamma').
    destruct (PF.eqb k k') eqn:Heq.
    + inv H.
      unfold PF.eqb in *.
      destruct (PF.eq_dec k k').
      * subst; auto.
      * inv Heq.
    + right; auto.
Qed.

Lemma find_Some_gamma_in_table :
  forall k (gamma : list symbol) tbl,
    ParseTable.find k tbl = Some gamma -> In (k, gamma) (ParseTable.elements tbl).
  intros k gamma tbl Hf.
  rewrite elements_o in Hf.
  apply pt_findA_In in Hf; auto.
Qed.

Lemma tbl_lookup_result_le_max :
  forall k tbl gamma,
    ParseTable.find k tbl = Some gamma
    -> List.length gamma <= maxEntryLength tbl.
Proof.
  intros k tbl gamma Hf.
  unfold maxEntryLength.
  apply list_element_le_listMax.
  apply gamma_in_table_length_in_entryLengths with (k := k).
  apply find_Some_gamma_in_table; auto.
Qed.  

Lemma tbl_lookup_result_lt_max_plus_1 :
  forall k tbl gamma,
    ParseTable.find k tbl = Some gamma
    -> List.length gamma < 1 + maxEntryLength tbl.
Proof.
  intros k tbl gamma Hf.
  apply (tbl_lookup_result_le_max k tbl gamma) in Hf; omega.
Qed.

Lemma post_push_state_lt_pre_push_st :
  forall st st' ts callee caller frs x gamma_caller gamma_callee av tbl,
    st = parserState av (caller, frs) ts
    -> st' = parserState (NtSet.remove x av) (callee, caller :: frs) ts
    -> caller.(syms) = NT x :: gamma_caller
    -> callee.(syms)  = gamma_callee
    -> ParseTable.find (x, peek ts) tbl = Some gamma_callee
    -> NtSet.mem x av = true
    -> nat_triple_lex (meas st' tbl) (meas st tbl).
Proof.
  intros st st' ts callee caller frs x gamma_caller gamma_callee av tbl Hst Hst' Hcaller Hcallee Hfind Hmem; subst.
  apply triple_snd_lt; simpl.
  rewrite remove_cardinal_1; auto.
  unfold headFrameScore. unfold headFrameSize.
  unfold tailFrameScore. unfold tailFrameSize. rewrite Hcaller.
  simpl.
rewrite plus_assoc. 
apply plus_lt_compat_r.
apply plus_lt_compat_r.
assert (remove_cardinal_minus_1 : forall x s,
           NtSet.mem x s = true
           -> NtSet.cardinal (NtSet.remove x s) = 
              NtSet.cardinal s - 1).
{ intros x' s Hm.
  replace (NtSet.cardinal s) with (S (NtSet.cardinal (NtSet.remove x' s))).
  - omega.
  - apply remove_cardinal_1; auto. }
rewrite remove_cardinal_minus_1; auto.
apply less_significant_value_lt_more_significant_digit.
  - eapply tbl_lookup_result_lt_max_plus_1; eauto.
  - erewrite <- remove_cardinal_1; eauto. 
    omega.
Qed.

Lemma step_meas_lt :
  forall tbl st st',
    step tbl st = StepK st'
    -> nat_triple_lex (meas st' tbl) (meas st tbl).
Proof.
  intros tbl st st' Hs.
  unfold step in Hs.
  destruct st as [av [fr frs] ts].
  destruct fr as [gamma sv].
  destruct gamma as [| [y | x] gamma'].
  - (* return from the current frame *)
    destruct frs as [| caller frs']; try congruence.
    destruct caller as [gamma_caller sv_caller]. 
    destruct gamma_caller as [| [y | x] gamma_caller']; try congruence.
    inv Hs.
    eapply post_return_state_lt_pre_return_state; simpl; eauto.
    simpl; auto.
  - (* terminal case *) 
    destruct ts as [| (y', l) ts']; try congruence.
    destruct (t_eq_dec y' y); try congruence.
    inv Hs.
    apply triple_fst_lt; simpl; auto.
  - (* nonterminal case -- push a new frame onto the stack *)
    destruct (NtSet.mem x av) eqn:Hm; try congruence.
    destruct (ParseTable.find (x, peek ts) tbl) as [gamma |] eqn:Hf; try congruence.
    inv Hs.
    eapply post_push_state_lt_pre_push_st; eauto.
    simpl; eauto.
Qed.

Require Import Program.Wf.

Lemma nat_triple_lex_wf : well_founded nat_triple_lex.
  apply triple_lex_wf; apply lt_wf.
Qed.

Program Fixpoint run (tbl : parse_table) 
                     (st : parser_state) 
                     { measure (meas st tbl) (nat_triple_lex) } : parse_result :=
  match step tbl st with
  | StepAccept sv ts => Accept sv ts
  | StepReject s     => Reject s
  | StepError s      => Error s
  | StepK st'        => run tbl st'
  end. 
Next Obligation.
  apply step_meas_lt; auto.
Defined.
Next Obligation.
apply measure_wf.
apply nat_triple_lex_wf.
Defined.