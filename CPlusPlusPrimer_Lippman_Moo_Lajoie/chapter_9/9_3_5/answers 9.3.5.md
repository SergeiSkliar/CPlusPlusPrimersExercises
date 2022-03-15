Exercises Section 9.3.5
Exercise 9.29: Given that `vec` holds 25 elements, what does
`vec.resize(100)` do? What if we next wrote `vec.resize(10)`?

_`vec.resize(100)` adds 75 new elements of value 0 to the back of the `vec`._
_`vec.resize(10)` erases 90 elements from the back of the `vec`._

Exercise 9.30: What, if any, restrictions does using the version of `resize`
that takes a single argument place on the element type?

_One restriction: if the elements of the container are of `class` type, they must have a default constructor._