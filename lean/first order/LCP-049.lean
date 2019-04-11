variables a : Prop

example : a → ¬ ¬ a :=
    assume h1 : a,
    show (¬ ¬ a), from (
        assume h2 : ¬ a,
        absurd h1 h2
    )
