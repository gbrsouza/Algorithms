
variable α : Type 
variables R S : α → Prop 

example (h1 : (∀x : α ,(R(x) → S(x)))) : (∀y: α ,R(y)) → (∀z : α ,S(z)) :=
assume h2: (∀y: α ,R(y)),
    show (∀z : α ,S(z)), from(
        assume x : α,
        show S(x), from (
            have p1 : (R(x) → S(x)), from h1 x,
            have p2 : (R(x)), from h2 x,
            p1 p2
        )  
    )
