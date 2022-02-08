Exercises Section 6.5.2
Exercise 6.43: Which one of the following declarations and definitions would
you put in a header? In a source file? Explain why.
(a)
```c++
inline bool eq(const BigInt&, const BigInt&) {...}
```
In header. `eq` is an `inline` function, which is normally placed in header files.
(b) 
```c++
void putValues(int *arr, int size);
```
In header. Declarations are usually placed in header files while definitions in source files.

Exercise 6.44: Rewrite the `isShorter` function from § 6.2.2 (p. 211) to be
`inline`.
```c++
inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}
```
Exercise 6.46: Would it be possible to define `isShorter` as a `constexpr`?
If so, do so. If not, explain why not.
No, the `string` method `size()` is not `constexpr` hence `isShorter` can't be a `constexpr`.