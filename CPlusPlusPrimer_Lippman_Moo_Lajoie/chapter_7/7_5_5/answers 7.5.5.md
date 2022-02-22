Exercises Section 7.5.5
Exercise 7.52: Using our first version of Sales_data from § 2.6.1 (p. 72),
explain the following initialization. Identify and fix any problems.

`Sales_data item = {"978-0590353403", 25, 15.99};`

_It won't compile because we have `units_sold` and `revenue` members initialized inside the `Sales_data` class. The simple solution is to remove initializers:_
```c++
struct Sales_data{
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};
```
