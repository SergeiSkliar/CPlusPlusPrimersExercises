Exercises Section 10.2.1

Exercise 10.4: Assuming v is a vector<double>, what, if anything, is
wrong with calling accumulate(v.cbegin(), v.cend(), 0)?

_Element values of the `v` will be implicitly converted to `int`, thus the decimal part will be truncated._