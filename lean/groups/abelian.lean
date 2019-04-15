import init.logic 

constant U : Type
constant e : U 
constant dot : U → U → U 

local infix `+` := dot 

axiom ass : ∀ a b c : U, (a + b) + c = a + (b + c) -- associativity  
axiom iden : ∃e : U, ∀a : U, ((e + a) = a) ∧ ((a + e) = a) -- identity
axiom inv : ∀a : U, ∃b : U, ((a + b) = e) ∧ ((b + a) = e)  -- inverse
axiom com : ∀ a b : U, (a + b) = (b + a)  -- commutativity

variables x y z : U

example : x + (y + z) = x + (z + y) := 
calc
    x + (y + z) = x + (z + y) : eq.subst (com y z) rfl

example : ∃y:U, ∀w:U, ((∀x:U, (x+w=x)) ↔ w=y) :=
    have h : (∀w:U, ((∀x:U, (x+w=x)) ↔ w=e)), from (
        assume w : U,
        show ((∀x:U, (x+w=x)) ↔ w=e), from (
            iff.intro 
            (assume m : ∀x, (x+w=x), 
                show w=e, from sorry)
            (assume n : w=e, 
                show ∀x:U, (x+w=x), from sorry )
        )
    ),exists.intro e h