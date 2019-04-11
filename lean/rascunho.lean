section

variables (α : Type)
variables R S : α → Prop
variable h1 : (∃ x, R(x)) ∨ (∃ y, S(y))
variable z : α

example : ∃ z,(R(z) ∨ S(z)) :=
assume z : α,
exists.intro z (
    or.elim h1
        (assume h2: ∃ x, R(x), show R z ∨ S z, from 
            or.inl (
                exists.elim h2 (
                    assume (x : α) (h3: R x),
                    show R x, from h3
                )
            )      
        )
        (assume h2: ∃ y, S(y), show R z ∨ S z, from 
            or.inr (
                exists.elim h2 (
                    assume (x : α) (h3: S x), 
                    show S x, from h3)
            )     
        )
)
end