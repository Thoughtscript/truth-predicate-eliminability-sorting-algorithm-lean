/-
Formalized checks for Bacon, "Can the Classical Logician Avoid the Revenge
Paradoxes?", proof of Theorem 1.1, and the restricted KFG T-scheme.

The diagonal equivalence is an explicit hypothesis: this file checks the
deduction from that fixed point, not the arithmetical Diagonal Lemma itself.
-/

namespace TruthPredicateProof

theorem bacon_line_6
    {H T γ : Prop}
    (diagonal : γ ↔ (H → ¬ T))
    (line5 : H → (H → ¬ T)) :
    H → γ := by
  intro h
  exact diagonal.mpr (line5 h)

theorem bacon_revenge_conclusion
    {H T γ : Prop}
    (diagonal : γ ↔ (H → ¬ T))
    (srt : H → (T ↔ γ)) :
    ¬ H ∧ γ := by
  have line4 : H → ¬ T := by
    intro h ht
    have hγ : γ := (srt h).mp ht
    exact (diagonal.mp hγ) h ht
  have line5 : H → (H → ¬ T) := by
    intro h _
    exact line4 h
  have line6 : H → γ := bacon_line_6 diagonal line5
  have line7 : H → T := by
    intro h
    exact (srt h).mpr (line6 h)
  have line8 : ¬ H := by
    intro h
    exact (line4 h) (line7 h)
  have line9 : γ := diagonal.mpr (by
    intro h
    exact False.elim (line8 h))
  exact ⟨line8, line9⟩

def RestrictedKFG (C T γ : Prop) : Prop :=
  C → (T ↔ γ)

def Tautology {Valuation : Type} (formula : Valuation → Prop) : Prop :=
  ∀ valuation, formula valuation

theorem tautological_weakening
    {Valuation : Type}
    (p c : Valuation → Prop) :
    Tautology (fun valuation => p valuation → (c valuation → p valuation)) := by
  intro valuation hp _
  exact hp

theorem tautology_restricted_by_condition
    {Valuation : Type}
    (p c : Valuation → Prop)
    (p_is_tautology : Tautology p) :
    Tautology (fun valuation => c valuation → p valuation) := by
  intro valuation _
  exact p_is_tautology valuation

/-
The counterexample below uses C = False and leaves H independent of C, showing
that the restricted schema alone does not imply H → γ. The final two results
are conditional: if the same diagonal fixed point is additionally granted for
C, then the restricted schema instead forces ¬C.
-/
theorem kfg_release
    {C T γ : Prop}
    (kfg : RestrictedKFG C T γ) :
    C → (T → γ) := by
  intro hC hT
  exact (kfg hC).mp hT

theorem restricted_kfg_alone_does_not_entail_health_to_sentence :
    ¬ ((False → (True ↔ False)) → (True → False)) := by
  intro entailment
  have restricted_t_scheme : False → (True ↔ False) := by
    intro impossible
    exact False.elim impossible
  exact (entailment restricted_t_scheme) True.intro

theorem kfg_diagonal_excludes_membership
    {C T γ : Prop}
    (diagonal : γ ↔ (C → ¬ T))
    (kfg : RestrictedKFG C T γ) :
    ¬ C := by
  intro hC
  have notT : ¬ T := by
    intro hT
    have hγ : γ := (kfg hC).mp hT
    exact (diagonal.mp hγ) hC hT
  have hγ : γ := diagonal.mpr (fun _ => notT)
  exact notT ((kfg hC).mpr hγ)

theorem kfg_diagonal_entails_membership_implies_sentence
    {C T γ : Prop}
    (diagonal : γ ↔ (C → ¬ T))
    (kfg : RestrictedKFG C T γ) :
    C → γ := by
  intro hC
  exact False.elim (kfg_diagonal_excludes_membership diagonal kfg hC)

theorem diagonal_blocks_global_t_scheme
    {Sentence : Type}
    (sentenceValue truthValue : Sentence → Bool)
    (liar : Sentence)
    (diagonal : sentenceValue liar = !(truthValue liar)) :
    ¬ (∀ s, truthValue s = sentenceValue s) := by
  intro globalT
  have h := globalT liar
  rw [diagonal] at h
  cases truthValue liar <;> simp at h

inductive ToySentence
  | clean
  | liar
  deriving DecidableEq, Repr

def toyInKfgClass : ToySentence → Prop
  | .clean => True
  | .liar => False

def toySentenceValue : ToySentence → Bool
  | .clean => true
  | .liar => true

def toyTruthValue : ToySentence → Bool
  | .clean => true
  | .liar => false

theorem toy_kfg_restricted_t_scheme (s : ToySentence) :
    toyInKfgClass s → toyTruthValue s = toySentenceValue s := by
  cases s <;> simp [toyInKfgClass, toyTruthValue, toySentenceValue]

def toyFiniteTheoryConsistent (sentences : List ToySentence) : Prop :=
  ∀ s ∈ sentences,
    (toyInKfgClass s → toyTruthValue s = toySentenceValue s) ∧
    (¬ (toySentenceValue s = true ∧ toySentenceValue s = false)) ∧
    ¬ (toyTruthValue s = true ∧ toyTruthValue s = false)

theorem toy_finite_theory_consistent_by_induction :
    ∀ sentences : List ToySentence, toyFiniteTheoryConsistent sentences := by
  intro sentences
  induction sentences with
  | nil =>
      simp [toyFiniteTheoryConsistent]
  | cons s sentences ih =>
      intro t ht
      simp only [List.mem_cons] at ht
      rcases ht with rfl | ht
      · cases t <;>
          simp [toyInKfgClass, toySentenceValue, toyTruthValue]
      · exact ih t ht

theorem toy_liar_is_diagonal :
    toySentenceValue .liar = !(toyTruthValue .liar) := rfl

theorem toy_liar_and_its_truth_ascription_are_consistent :
    toySentenceValue .liar = true ∧ toyTruthValue .liar = false := by
  exact ⟨rfl, rfl⟩

theorem toy_liar_exhibits_truth_value_divergence :
    toySentenceValue .liar ≠ toyTruthValue .liar := by
  decide

theorem toy_model_rejects_global_t_scheme :
    ¬ (∀ s, toyTruthValue s = toySentenceValue s) := by
  apply diagonal_blocks_global_t_scheme
    toySentenceValue toyTruthValue .liar toy_liar_is_diagonal

end TruthPredicateProof
