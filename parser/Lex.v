Require Import Arith Relation_Definitions.
Require Import CoStar.Tactics.

Section PairLT.
    
    Variables (A B : Type) (ltA : relation A) (ltB : relation B).
    
    Inductive pair_lex : A * B -> A * B -> Prop :=
    | pair_fst_lt : 
        forall x x' y y', 
          ltA x x' -> pair_lex (x, y) (x', y')
    | pair_snd_lt : 
        forall x y y', 
          ltB y y' -> pair_lex (x, y) (x, y').
    
    Hint Constructors pair_lex : core.
    
    Lemma pair_lex_trans :
      transitive _ ltA -> transitive _ ltB -> transitive _ pair_lex.
    Proof.
      intros tA tB [x1 y1] [x2 y2] [x3 y3] H12 H23.
      inv H12; inv H23; eauto.
    Defined.
    
    Lemma pair_lex_wf :
      well_founded ltA -> well_founded ltB -> well_founded pair_lex.
    Proof.
      intros wfA wfB [x y].
      revert y.
      induction (wfA x) as [x _ IHx].
      intros y.
      induction (wfB y) as [y _ IHy].
      constructor.
      intros [x' y'] H.
      inv H; eauto.
    Defined.
    
End PairLT.

Definition lex_nat_pair := pair_lex nat nat lt lt.

Lemma lex_nat_pair_wf : well_founded lex_nat_pair.
Proof.
  apply pair_lex_wf; apply lt_wf.
Defined.

Section TripleLT.
    
    Variables (A B C : Type) 
              (ltA : relation A) (ltB : relation B) (ltC : relation C).
    
    Inductive triple_lex : A * B * C -> A * B * C -> Prop :=
    | triple_fst_lt : 
        forall x x' y y' z z', 
          ltA x x' -> triple_lex (x, y, z) (x', y', z')
    | triple_snd_lt : 
        forall x y y' z z', 
          ltB y y' -> triple_lex (x, y, z) (x, y', z')
    | triple_thd_lt : 
        forall x y z z', 
          ltC z z' -> triple_lex (x, y, z) (x, y, z').
    
    Hint Constructors triple_lex : core.
    
    Lemma triple_lex_trans :
      transitive _ ltA 
      -> transitive _ ltB 
      -> transitive _ ltC 
      -> transitive _ triple_lex.
    Proof.
      intros tA tB tC [[x1 y1] z1] [[x2 y2] z2] [[x3 y3] z3] H12 H23.
      inv H12; inv H23; eauto.
    Defined.
    
    Lemma triple_lex_wf :
      well_founded ltA 
      -> well_founded ltB 
      -> well_founded ltC 
      -> well_founded triple_lex.
    Proof.
      intros wfA wfB wfC [[x y] z].
      revert y z.
      induction (wfA x) as [x _ IHx].
      intros y.
      induction (wfB y) as [y _ IHy].
      intros z.
      induction (wfC z) as [z _ IHz].
      constructor.
      intros [[x' y'] z'] H.
      inv H; eauto.
    Defined.
    
End TripleLT.

Definition lex_nat_triple := triple_lex nat nat nat lt lt lt.

Lemma lex_nat_triple_wf : well_founded lex_nat_triple.
Proof.
  apply triple_lex_wf; apply lt_wf.
Defined.
