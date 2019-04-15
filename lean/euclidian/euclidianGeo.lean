namespace euclidianGeo

variable pnt : Type
variable betS : pnt → pnt → pnt → Prop
variable cong : pnt → pnt → pnt → pnt → Prop

variables φ ψ : pnt → Prop 

axiom A1 : ∀a b : pnt, cong a b b a
axiom A2 : ∀a b p q r s : pnt, (cong a b p q) ∧ (cong a b r s) → cong p q r s
axiom A3 : ∀a b c : pnt, cong a b c c → a = b
axiom A4 : ∀q a b c : pnt, ∃ x : pnt, betS q a x ∧ cong a x b c
axiom A5 : ∀a b c d a' b' c' d' : pnt, ((a ≠ b) ∧ (betS a b c) ∧
    (betS a' b' c') ∧ (cong a b a' b') ∧ (cong b c b' c') 
    ∧ (cong a d a' d') ∧ (cong b d b' d')) → cong c d c' d'
axiom A6 : ∀a b : pnt, betS a b a → a = b
axiom A7 : ∀a b c p q : pnt, (betS a p c) ∧ (betS b q c) →
    ∃x : pnt, (betS p x b) ∧ (betS q x a)
axiom A8 : ∃ a b c : pnt, ¬ ((betS a b c) ∨ (betS b c a) ∨ (betS c a b))
axiom A9 : ∀p q a b c: pnt, ((p ≠ q) ∧ (cong a p a q) ∧ (cong b p b q) ∧ 
    (cong c p c q)) → ((betS a b c) ∨ (betS b c a) ∨ (betS c a b))
axiom A10 : ∀ a b c d t: pnt, ((betS a d t) ∧ (betS b d c) ∧ (a ≠ d)) → 
    ∃x y : pnt, (betS a b x) ∧ (betS a c y) ∧ (betS y t x)
axiom A11 : (∀x y a: pnt, ((φ(x) ∧ ψ(y)) → betS a x y )) → 
    (∃ b : pnt, ∀ x y : pnt, ((φ(x) ∧ ψ(y)) → betS x b y  ))

end euclidianGeo