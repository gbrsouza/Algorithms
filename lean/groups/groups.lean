namespace groups

variable α : Type

-- define the neutral  elements
variables e  : α 

-- define the relation
variable dot : α → α → α 

local infix `*` := dot

-- axioms
-- associativity
axiom ass : ∀ a b c : α, (a * b) * c = a * (b * c)  

-- identity
axiom iden : ∃e : α, ∀a : α, e * a = a ∧ a * e = a

-- inverse
axiom inv : ∀a : α, ∃b : α, a * b = e ∧ b * a = e

end groups