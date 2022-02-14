Exercise 7.16: What, if any, are the constraints on where and how often an
access specifier may appear inside a class definition? What kinds of members
should be defined after a public specifier? What kinds should be private?
_There is no constraints on where and how often an access specifiers may appear._
_members after `public` specifier: usually these are the members that make up the interface of the class. `private`: data members and member functions that are part of implementation._

Exercise 7.17: What, if any, are the differences between using class or
struct?
_Virtually there is one difference: default access specifier. For `struct` it is `public`, for `class` it is `private`._


Exercise 7.18: What is encapsulation? Why is it useful?
_Hiding (protecting) the implementation details._

Exercise 7.19: Indicate which members of your Person class you would
declare as public and which you would declare as private. Explain your
choice.
_At the current stage of Person class, the `name` and `address` goes to the `private` access. Everything else (including constructors) goes to the `public`._
