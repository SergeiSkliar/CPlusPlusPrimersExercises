Exercise 7.44: Is the following declaration legal? If not, why not?
`vector<NoDefault> vec(10);`

_No, class `NoDefault` does not have default constructor._

Exercise 7.45: What if we defined the vector in the previous execercise to
hold objects of type C?

`vector<C> vec(10);`
_This will be legal._

Exercise 7.46: Which, if any, of the following statements are untrue? Why?
(a) A class must provide at least one constructor.
_No, compiler will implicitly generate default constructor and copy constructor._
(b) A default constructor is a constructor with an empty parameter list.
_That's true._
(c) If there are no meaningful default values for a class, the class should not
provide a default constructor.
_No. Every class should have by standard the default constructor even if there are no values._
(d) If a class does not define a default constructor, the compiler generates
one that initializes each data member to the default value of its associated
type.
_There are two possibilities:_
_if a class defines __any__ constructor then this defined constructor will be used as default._
_if a class doesn't have constructors, then yes, the compiler generates a default constructor._