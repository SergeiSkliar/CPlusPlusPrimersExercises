Exercise 7.28: What would happen in the previous exercise if the return
type of `move`, `set`, and `display` was `Screen` rather than `Screen&`?

Guess: Either the code won't compile or original object `myScreen` won't be changed.
After ex 7 29: Code compiled and indeed `myScreen` object has not been changed (the line `myScreen.display(std::cout);`). Though the line `myScreen.move(4, 0).set('#').display(std::cout);` correctly displayed the `#` character.
Conclusion: the chain of function calls each time created a new object that was in scope only during the execution of the statement. After that temporary objects were destroyed without afecting the `myScreen`.