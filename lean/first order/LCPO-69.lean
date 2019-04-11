variables (α : Type)
variables Q R P : α → Prop

example (h1 : (∀x:α ,(Q(x)→R(x)))) 
        (h2 : (∃x:α ,(P(x) ∧ ¬R(x)))) :
        (∃x:α, (P(x)∧¬Q(x))) :=
exists.elim h2(
    assume (x : α) (h3: P(x) ∧ ¬Q(x)),
    have p1 : P(x), from and.left h3,
    have p2 : ¬Q(x), from and.right h3,
    have p3 : ∃x:α, (P(x)∧¬Q(x)), from 
)