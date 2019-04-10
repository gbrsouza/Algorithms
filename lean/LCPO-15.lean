
variable α : Type 
variables R S : α → Prop 

example : ∀x, (R(x)→ S(x)) →  (∀y, R(y) → ∀z, S(z)) :=
assume h1 : ∀x, (R(x)→ S(x)),
    show ∀y, R(y) → ∀z, S(z), from (
        assume h2 : ∀y, R(y),
        show ∀z, S(z), from (
            assume x : α,
            have p1 : R(x), from h2 (x),
            have p2 : R(x) → S(x), from h1 (x),
            have p3 : S(x), from p2 p1
        )
    )
