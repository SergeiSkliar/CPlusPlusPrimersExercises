Exercises Section 10.2.1

Exercise 10.4: Assuming `v` is a `vector<double>`, what, if anything, is
wrong with calling `accumulate(v.cbegin(), v.cend(), 0)`?

_Element values of the `v` will be implicitly converted to `int`, thus the decimal part will be truncated._

Exercise 10.5: In the call to `equal` on rosters, what would happen if both
rosters held C-style strings, rather than library `string`s?

_The result will be 0, i.e. not equal with both containers containing the same C-strings. My guess - this happens because the `==` operator compares the values of pointers (addresses), not the pointed-to values._