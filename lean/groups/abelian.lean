import init.logic 
import init.classical

constant U : Type
constant e : U 
constant dot : U → U → U 

local infix `+` := dot 

axiom ass : ∀ a b c : U, (a + b) + c = a + (b + c) -- associativity  
axiom iden : ∀a : U, ((e + a) = a) ∧ ((a + e) = a) -- identity
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
                have h1 : e + w = e, from m e,
                have h2 : w = e + w, from eq.symm( and.left (iden w) ),
                show w=e, from eq.subst h1 h2)
            (assume n : w=e, 
                have h3 : e + w = e, from eq.subst n and.left(iden w),
                assume x,
                show ∀x, (x+w=x), from h3 x)
        )
    ),exists.intro e h