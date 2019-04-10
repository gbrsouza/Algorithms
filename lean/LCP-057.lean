open classical
variables a b : Prop

example  (h1:a → b) (h2:¬a → b) : b :=
or.elim (em a)
    (assume m : a, 
        show (b), from h1 m)  
    (assume n : ¬a, 
        show (b), from h2 n)