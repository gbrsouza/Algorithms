namespace groups

variable α : Type

-- define the neutral and generic elements
variables e c : α 

-- define the relation
variable dot : α → α → α 

-- axioms
-- closure
axiom cls : ∀ a b, dot a b = c

-- associativity
axiom ass : ∀ a b c : α, dot (dot a b ) c = dot a (dot b c)  

-- identity
axiom iden : ∃e : α, ∀a : α, (dot e a = a ∧ dot a e = a)

-- inverse
axiom inv : ∀a : α, ∃b : α, ( dot a b = e ∧ dot b a = e)

end groups