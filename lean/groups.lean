namespace groups


-- define the neutral element
variables (α : Type) (e : α )

-- define the relation
variable dot : α → α → α 

axiom ass : ∀ a b c : α, dot (dot a b ) c = dot a (dot b c)  
axiom iden : ∃e : α, ∀a : α, (dot e a = a ∧ dot a e = a)
axiom inv : ∀a : α, ∃b : α, ( dot a b = e ∧ dot b a = e)

end groups