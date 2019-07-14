
variables (α : Type)
variables R S : α → Prop

example (h1 : (∃ x, R x) ∨ (∃ y, S y)) : ∃ z, R z ∨ S z :=
or.elim h1
(assume h2 : ∃ x, R x,
exists.elim h2
(assume (b : α) (h : R b),
have h3 : R b ∨ S b, from or.inl h,
show ∃ z, R z ∨ S z, from
exists.intro b h3))
(assume h2 : ∃ y, S y,
exists.elim h2
(assume (b : α) (h : S b),
have h3 : R b ∨ S b, from or.inr h,
show ∃ z, R z ∨ S z, from
exists.intro b h3))
