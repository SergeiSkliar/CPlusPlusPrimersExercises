Exercises Section 7.5.1
Exercise 7.36: The following initializer is in error. Identify and fix the
problem.
```c++
struct X {
    X (int i, int j): base(i), rem(base % j) { }
    int rem, base; // data members should be declared before they can be used
};
```

```c++
struct X {
    int rem, base; // data members should be declared before they can be used
    X (int i, int j): base(i), rem(i % j) { } // better to use the constructor's parameter for
    // member initialization rather than another data member
};
```

Exercise 7.37: Using the version of Sales_data from this section,
determine which constructor is used to initialize each of the following
variables and list the values of the data members in each object:
```c++
Sales_data first_item(cin); // Sales_data(std::istream &is)
int main() {
    Sales_data next; // Sales_data(std::string s = "")
    Sales_data last("9-999-99999-9"); Sales_data(std::string s = "")
}
```

Exercise 7.38: We might want to supply cin as a default argument to the
constructor that takes an istream&. Write the constructor declaration that
uses cin as a default argument.
```c++
Sales_data(std::istream& is = std::cin) { read(is, *this); }
```

Exercise 7.39: Would it be legal for both the constructor that takes a
string and the one that takes an istream& to have default arguments? If
not, why not?

_No, then we will have two overloaded constructors which is ambiguous for compiler._

Exercise 7.40: Choose one of the following abstractions (or an abstraction
of your own choosing). Determine what data are needed in the class. Provide
an appropriate set of constructors. Explain your decisions.
(a) Book
(b) Date
(c) Employee
(d) Vehicle
(e) Object
(f) Tree

_file ex_7_40.cpp_