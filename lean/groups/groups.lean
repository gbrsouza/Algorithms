namespace groups

variable α : Type

-- define the neutral  elements
variables e  : α 

-- define the relation
variable dot : α → α → α 

-- axioms
-- associativity
axiom ass : ∀ a b c : α, dot (dot a b ) c = dot a (dot b c)  

-- identity
axiom iden : ∃e : α, ∀a : α, (dot e a = a ∧ dot a e = a)

-- inverse
axiom inv : ∀a : α, ∃b : α, ( dot a b = e ∧ dot b a = e)

end groups