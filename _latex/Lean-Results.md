# Lean Results: Restricted Truth and the Diagonal Argument

This note records the formal checks in [`../_lean/TruthPredicateProof.lean`](../_lean/TruthPredicateProof.lean), based on Andrew Bacon's *Can the Classical Logician Avoid the Revenge Paradoxes?* ([paper PDF](../_papers/BACCTC.pdf), proof of Theorem 1.1, pp. 8–9) and the KFG restricted T-scheme described in the [repository](https://github.com/Thoughtscript/truth-predicate-eliminability-sorting-algorithm).

The mathematics below uses standard inline and display LaTeX, so it can be read as Markdown with math support. Lean source is in [`../_lean/`](../_lean/).

## 1. Bacon's line 6

Let \(H\) stand for \(H(\gamma)\), \(T\) for \(Tr(\gamma)\), and let Bacon's diagonal sentence satisfy

$$
\gamma \leftrightarrow (H \to \neg T).
$$

Line 5 is

$$
H \to (H \to \neg T).
$$

To establish line 6, assume \(H\). By (5), \(H \to \neg T\); by the right-to-left direction of (1), \(\gamma\). Discharging the assumption gives

$$
H \to \gamma.
$$

This is intuitionistically valid; it does not depend on classical logic. Lean formalizes exactly this inference in `bacon_line_6`.

The surrounding derivation also checks the conclusion of Bacon's argument from (1) and the restricted T-scheme \(H \to (T \leftrightarrow \gamma)\):

$$
\neg H \land \gamma.
$$

The derivation of line 6 is sound **if** its premises are available. Whether the diagonal sentence (1) exists in a proposed theory, and whether that theory accepts Bacon's \(H\) as its restriction predicate, are separate questions.

## 2. What the restricted KFG schema entails

Write KFG's restriction as \(C(\gamma)\). Its schema is

$$
C(\gamma) \to (T(\langle\gamma\rangle) \leftrightarrow \gamma).
$$

From KFG alone, one gets the conditional release

$$
C(\gamma) \land T(\langle\gamma\rangle) \to \gamma.
$$

One cannot simply replace \(C\) by Bacon's \(H\) without an additional identification or premise. A Lean countermodel demonstrates that the restricted schema alone does not entail this unrestricted implication.

There is a stronger conditional result. If one also grants the same diagonal equivalence with \(C\) in place of \(H\),

$$
\gamma \leftrightarrow (C(\gamma) \to \neg T(\langle\gamma\rangle)),
$$

then (KFG) and (D) imply \(\neg C(\gamma)\). Assuming \(C(\gamma)\), the diagonal equivalence yields

$$
\gamma \leftrightarrow \neg T.
$$

KFG yields \(\gamma \leftrightarrow T\), hence \(T\) and \(\neg T\), a contradiction. Consequently \(C(\gamma)\to\gamma\) holds vacuously. Lean checks that membership is excluded and that the conditional follows.

Thus, if KFG is to block Bacon's argument, the key issue is whether the diagonal fixed point and the predicate correspondence are available—not the validity of line 6 itself.

## 3. The argument from tautology

The repository's argument can be represented propositionally by taking \(P\) to mean “the T-scheme is analytic/tautological” and \(C\) to mean “the sentence is in the KFG restriction class.” The formula

$$
P \to (C \to P)
$$

is a tautology: whenever \(P\) holds, \(C\to P\) holds, regardless of \(C\). Equivalently, if \(P\) itself is a tautology over valuations, then its restricted conditional \(C\to P\) is also a tautology. Lean verifies both `tautological_weakening` and `tautology_restricted_by_condition`.

This proves only the weakening principle. It does **not** prove that the unrestricted T-scheme is analytic, that its restriction is sound, or that KFG entails it. The premise that \(P\) is analytic must be supplied independently; if that premise is disputed, the weakening argument does not settle the dispute.

## 4. Tarski-style undefinability: the formal result and its scope

The diagonal argument underlying Tarski's undefinability result can be stated abstractly. Suppose a language has a sentence \(\lambda\) whose value is the negation of its own truth ascription:

$$
\operatorname{Val}(\lambda) = \neg \operatorname{Tr}(\lambda).
$$

No predicate can then satisfy the unrestricted T-scheme for every sentence,

$$
\forall s,\quad \operatorname{Tr}(s) = \operatorname{Val}(s).
$$

At \(s=\lambda\), the global scheme says that the two values are equal, while the diagonal condition says they are opposites. Lean's `diagonal_blocks_global_t_scheme` proves this for Boolean-valued semantics. It formalizes the diagonal obstruction, not the arithmetical construction of \(\lambda\).

### A bivalent restricted-schema model

The Lean file also gives a small, explicit model with two sentences: `clean` and `liar`. Both receive ordinary Boolean sentence values and truth-predicate values. The `clean` sentence is in the KFG class \(C\), and its truth value matches its sentence value. The liar is outside \(C\); it satisfies the diagonal condition and receives a different truth-predicate value:

$$
\begin{array}{c|c|c|c}
s & C(s) & \operatorname{Val}(s) & \operatorname{Tr}(s)\\
\hline
\texttt{clean} & \text{true} & \text{true} & \text{true}\\
\texttt{liar} & \text{false} & \text{true} & \text{false}
\end{array}
$$

This model satisfies the restricted KFG schema on \(C\), while refuting the unrestricted T-scheme. The two assertions about the liar are classically consistent in this interpretation: the sentence is true and its truth ascription is false. No sentence is assigned both Boolean values.

### Consistency by mathematical induction

The Lean theorem `toy_finite_theory_consistent_by_induction` proves the model is consistent for **every finite list** of these toy sentences. For each sentence in such a list, the invariant states:

$$
\begin{aligned}
C(s) &\to \bigl(\operatorname{Tr}(s)=\operatorname{Val}(s)\bigr),\\
&\neg\bigl(\operatorname{Val}(s)=\mathrm{true}\land
             \operatorname{Val}(s)=\mathrm{false}\bigr),\\
&\neg\bigl(\operatorname{Tr}(s)=\mathrm{true}\land
             \operatorname{Tr}(s)=\mathrm{false}\bigr).
\end{aligned}
$$

Proof by induction on the list:

1. **Base case:** The empty list has no sentences violating the invariant, so the claim holds vacuously.
2. **Inductive step:** Suppose the invariant holds for a list \(L\), and add one sentence \(s\). If \(s=\texttt{clean}\), it is in \(C\) and its two Boolean values agree; neither value is both true and false. If \(s=\texttt{liar}\), it is outside \(C\), so the restricted T-scheme imposes no equality requirement on it; its sentence value and truth-ascription value are each individually Boolean and neither is both true and false. The induction hypothesis covers every member of \(L\), and the case analysis covers the added sentence. Therefore the invariant holds for \(s::L\).

This is a semantic consistency proof for the explicit finite toy model. It shows that the restricted schema and these assignments coexist without a sentence receiving both Boolean values. It is **not** a proof of syntactic consistency for the full KFG theory, whose complete formal axioms and inference rules are not encoded in this development.

### Qualification

This formalization demonstrates a **diagonal consequence** of Tarski's theorem and a bivalent model of a **restricted** T-scheme. The full mathematical Tarski undefinability theorem is normally stated for sufficiently expressive arithmetical languages and definability within those languages; establishing it requires coding syntax, representability, and a diagonal lemma. Those ingredients are not developed in this toy Lean model. In particular, the model does not prove that the repository's proposed KFG is a sound or complete arithmetical theory, nor that its truth predicate is undefinable under every standard formalization.

The precise supported claim is: **KFG-style restriction is compatible with bivalent interpretations in which a diagonal sentence lies outside the restriction class and the global T-scheme fails.** This is the intended undefinability-style phenomenon, not a Lean proof of every hypothesis or conclusion of Tarski's full arithmetical theorem.

## 5. Reproducing the Lean checks

From this directory, run:

```sh
cd _lean
lake build
```

The project pins Lean 4.35.0 in [`../_lean/lean-toolchain`](../_lean/lean-toolchain).
