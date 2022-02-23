Exercises Section 7.5.6
Exercise 7.54: Should the members of `Debug` that begin with `set_` be
declared as `constexpr`? If not, why not?

_No. The `constexpr` function can have only one executable statement - `return` statement. In case of `void` function it does not make any sense - it does not `return` anything and this member functions are intended to alter the data members._

Exercise 7.55: Is the `Data` class from § 7.5.5 (p. 298) a literal class? If
not, why not? If so, explain why it is literal.
```c++
struct Data {
    int ival;
    string s;
};
```

_No, `string` is not a literal type and `Data` does not have any `constexpr` constructors._