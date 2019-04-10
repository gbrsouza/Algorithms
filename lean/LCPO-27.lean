
variables (α : Type)
variables x y z : Type
variables R S : α → α 

example : (h1: (∃x, R(x) ∨ ∃y, S(y))) (h2: ∃x, (p(x) ∧ ¬ R(x))) : ∃x, (P(x) ∧ ¬ Q(x)) :=
