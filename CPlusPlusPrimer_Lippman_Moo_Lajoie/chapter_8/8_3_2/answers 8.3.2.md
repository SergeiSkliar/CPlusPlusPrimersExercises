Exercise 8.14: Why did we declare `entry` and `nums` as `const auto &`?

_`auto` transfer the work of type deduction to the compiler. Using `&` reference we avoid unnecessary copying of data from the vector. And using `const` qualifier we avoid accidental changing of the original data._
