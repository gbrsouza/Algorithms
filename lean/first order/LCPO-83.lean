variable (α : Type)
variable P : α → Prop
variable Q : α →  α  → Prop

example (h1:(∃x:α, (P x ∧ (∃y:α, Q x y)))) :
        (∃x:α, (∃y:α, (P x ∧ Q x y))) :=
exists.elim h1(
    assume (x : α ) (h2 : P x ∧ (∃ y:α , Q x y)),
    have h3 : P x, from and.left h2,
    have h4 : ∃ y:α , Q x y, from and.right h2,
    have hy : ∃ y:α , (P x ∧ Q x y), from  exists.elim h4 (
        assume (y : α ) (h5 : Q x y), 
        have h6 : P x ∧ Q x y, from and.intro h3 h5, 
        show ∃ y:α , (P x ∧ Q x y), from exists.intro y h6
    ),
    show ∃ x:α , (∃ y:α , (P x ∧ Q x y)), from exists.intro x hy
) 