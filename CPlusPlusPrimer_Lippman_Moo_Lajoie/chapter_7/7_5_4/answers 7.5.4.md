Exercises Section 7.5.4
Exercise 7.47: Explain whether the Sales_data constructor that takes a
string should be explicit. What are the benefits of making the
constructor explicit? What are the drawbacks?

_It depends on how the class will use the data (on our assumptions). `explicit` helps to restrict undesirable effects of implicit conversions. In the current state of `Sales_data` it makes a little difference - it won't help to check whether the data is correct or not (like "9-999-99999-9") - neither `string` nor C-style string provide facilities for common sense checking - it's the class designer's job._

Exercise 7.48: Assuming the `Sales_data` constructors are not `explicit`,
what operations happen during the following definitions
```c++
string null_isbn("9-999-99999-9");
Sales_data item1(null_isbn);
Sales_data item2("9-999-99999-9");
```
What happens if the `Sales_data` constructors are explicit?

_`string null_isbn("9-999-99999-9");` - creating instance of `string` class from string literal.
`Sales_data item1(null_isbn);` - creating `Sales_data` object from `string` object, constructor explicitly converting `null_isbn` object to `bookNo` data member of `Sales_data`.
`Sales_data item2("9-999-99999-9");` - creating `Sales_data` object from string literal, implicit conversion from string literal to `bookNo` data member of `Sales_data`._
_If constructors are `explicit` the same operations performed - since direct initialization syntax is used._

Exercise 7.49: For each of the three following declarations of combine,
explain what happens if we call `i.combine(s)`, where `i` is a `Sales_data`
and `s` is a `string`:
(a) `Sales_data &combine(Sales_data);`
(b) `Sales_data &combine(Sales_data&);`
(c) `Sales_data &combine(const Sales_data&) const;`

_a) `Sales_data &combine(Sales_data);` - class constructor implicitly creates a `Sales_data` object from `string`. Then it creates a copy of that object which is passed to the `combine` as a parameter. After `combine` executes its operations it returns a reference to `i` object (lously speaking - after `i` object is updated) and all temporary objects are deleted.
(b) Sales_data &combine(Sales_data&); - almost the same as in the previous example, but it passes a reference to a new temporary object without creating a copy of it.
(c) `Sales_data &combine(const Sales_data&) const;` - compile error. `combine` function is SUPPOSED to change the `Sales_data` object which upon it is called. But specifying the member declaration as a `const` it forbids any changes on the `i` object. Ofcourse this is true for our implementation of `Sales_data` class from previous exercises. If hypothetical code of `combine` is not supposed to change the object then: it creates temporary `const` object which is passed by reference to `combine`, which in turn returns reference to an object which upon it was called (without changing it)._

Exercise 7.50: Determine whether any of your Person class constructors
should be explicit.

_The `istream&` constructor should be `explicit`. Since `explicit` constructor can be only constructors with one parameter it is viable candidate if we want more control of how `Person` objects are created. Strictly speaking right now there is no necessity for it, but it could happen in further development._

Exercise 7.51: Why do you think `vector` defines its single-argument
constructor as `explicit`, but `string` does not?

_Because of how objects of both classes are created. For `string` it is quite reasonable to transform string literals (`char*`) to `string` object. As well as transforming `int` or `float` types to `string` object.
While the `vector` is another case - the number value `x` used to initialize `vector` object with size `x` - the size of a vector is different from elements in a vector. In practice implicit conversions could create confusing situations:_
```c++
int num = 5;
std::vector<double> vec1(num); // ok, creates vector with 5 elements
std::vector<double> vec2 = num; // my assumption: creates vector of 1 element where vec1[0] == 5
//if not explicit. With explicit - this line of code is a compile error.
```
