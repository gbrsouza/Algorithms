-- Escreva em LEAN a demonstração do seguinte teorema: 
-- (∀x, R(x) → S(x)) → ((∃y, R(y)) → (∃z, S(z)))

variables (α : Type) (R S : α  → Prop)

example : (∀x, R(x) → S(x)) → ((∃y, R(y)) → (∃z, S(z))) :=
assume h1 : (∀x, R(x) → S(x)), 
    show (∃y, R(y)) → (∃z, S(z)), from (
    assume h2 : ∃y, R(y),
        show (∃z, S(z)), from exists.elim h2(
            assume r: α, 
            assume h3: R(r), 
            exists.intro (r) ( h1(r)(h3) ) 
        )
    )