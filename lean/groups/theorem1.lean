-- x ⬝ (y ⬝ z) = x ⬝ (z ⬝ y)
import .abelian
open abelian

variables (U : Type) (x y z : U)
variable dot : U → U → U 
local infix `⬝` := dot 

example : (x ⬝ (y ⬝ z)) = (x ⬝ (z ⬝ y)) :=
sorry