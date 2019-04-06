namespace groups


-- define the neutral element
variables (α : Type) (e : Type)

-- define the relation
variable dot : α → α → α 

-- closure (a ⬝ b) is a wff
axiom closure  {a b : α } : dot a b 
axiom ass : ∀ a b c : α, dot (dot a b ) c = dot a (dot b c)  


end groups