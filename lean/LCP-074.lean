variables A B : Prop

example : ¬(A ∨ B) → ¬A ∧ ¬B :=
    assume h1 : ¬(A ∨ B),
    have ha : ¬A, from classical.by_contradiction(
        assume h2 : ¬¬A,
        have h3 : A, from (
            classical.by_contradiction(
                assume h4 : ¬A,
                show false, from h2 h4
            )),
        have h4 : A ∨ B, from or.intro_left B h3,
        show false, from h1 h4
    ),
    have hb : ¬B, from classical.by_contradiction(
        assume h2 : ¬¬B,
        have h3 : B, from (
            classical.by_contradiction(
                assume h4 : ¬B,
                show false, from h2 h4
            )),
        have h4 : A ∨ B, from or.intro_right A h3,
        show false, from h1 h4
    ),
    and.intro ha hb