Exercise 6.13: Assuming T is the name of a type, explain the difference between a function declared as void f(T) and void f(T&).
- in void f(T) the value if T is copied. It becomes local object and expires after the function finished. The result of any operation is lost
- in void(T&) the work is done on the original object.

Exercise 6.14: Give an example of when a parameter should be a reference type. Give an example of when a parameter should not be a reference.
 - two reasons: changing value and efficiency. swaping two variables
 - converting int type to a string should not change the value of int

 Exercise 6.15: Explain the rationale for the type of each of find_char’s parameters In particular, why is s a reference to const but occurs is a plain reference? Why are these parameters references, but the char parameter c is not? What would happen if we made s a plain reference? What if we made occurs a reference to const?
 
 - s is const because s should not be changed. if it not const the function could (accidentally or intentionally) change or corrupt the data. occurs on another hand should be changed.
 - self review: why c is not reference?