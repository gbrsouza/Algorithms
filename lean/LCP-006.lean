variables a c b : Prop

example : (a → (b → c)) →  (b → (a → c)) := 
    assume h1 : a → (b → c),
    show (b → (a → c)), from (
        assume h2 : b,
        show a → c, from (
            assume h3 : a,
            have p1 : b → c, from h1 h3,
            p1 h2
        )
    )
