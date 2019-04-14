namespace euclidianGeo

variable pnt : Type
variable betS : pnt → pnt → pnt → Prop
variable cong : pnt → pnt → pnt → pnt → Prop

variables a b p q r s c d t: pnt
variables a' b' c' d': pnt
variables φ ψ : pnt → Prop 

axiom A1 : ∀a b : pnt, cong a b b a
axiom A2 : cong a b p q ∧ cong a b r s → cong p q r s
axiom A3 : cong a b c c → a = b
axiom A4 : ∃ x : pnt, betS q a x ∧ cong a x b c
axiom A5 : ((a ≠ b) ∧ (betS a b c) ∧ (betS a' b' c') ∧ (cong a b a' b')
    ∧ (cong b c b' c') ∧ (cong a d a' d') ∧ (cong b d b' d'))
    → cong c d c' d'
axiom A6 : betS a b a → a = b
axiom A7 : (betS a p c) ∧ (betS b q c) →
    ∃x : pnt, (betS p x b) ∧ (betS q x a)
axiom A8 : ∃ a b c : pnt, ¬ ((betS a b c) ∨ (betS b c a) ∨ (betS c a b))
axiom A9 : ((p ≠ q) ∧ (cong a p a q) ∧ (cong b p b q) ∧ 
    (cong c p c q)) → ((betS a b c) ∨ (betS b c a) ∨ (betS c a b))
axiom A10 : ((betS a d t) ∧ (betS b d c) ∧ (a ≠ d)) → 
    ∃x y : pnt, (betS a b x) ∧ (betS a c y) ∧ (betS y t x)
axiom A11 : (∀x y: pnt, ((φ(x) ∧ ψ(y)) → betS a x y )) → 
    (∃ b : pnt, ∀ x y : pnt, ((φ(x) ∧ ψ(y)) → betS x b y  ))

end euclidianGeo