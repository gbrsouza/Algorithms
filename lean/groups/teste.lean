import init.logic 

constant U : Type 

constant e : U 
constant op : U → U → U 
constant sim : U → U 

variables x y z : U 

local infix `+` := op
axiom assoss : ∀ a b c, ((a + b) + c) = (a + (b + c))
axiom commut : ∀ a b, (a + b) = (b + a)
axiom ident : ∀ a, (a + e) = a
axiom simet : ∀ a, (a + sim a) = e

example : x + (y + z) = x + (z + y) := 
calc
    x + (y + z) = x + (z + y) : eq.subst (commut y z) rfl