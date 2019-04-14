namespace abelian 

variable U : Type
variables e : U 
variable dot : U → U → U 

local infix `⬝` := dot 

axiom ass : ∀ a b c : U, (a ⬝ b) ⬝ c = a ⬝ (b ⬝ c) -- associativity  
axiom iden : ∃e : U, ∀a : U, ((e ⬝ a) = a) ∧ ((a ⬝ e) = a) -- identity
axiom inv : ∀a : U, ∃b : U, ((a ⬝ b) = e) ∧ ((b ⬝ a) = e)  -- inverse
axiom com : ∀ a b : U, (a ⬝ b) = (b ⬝ a)  -- commutativity

end abelian