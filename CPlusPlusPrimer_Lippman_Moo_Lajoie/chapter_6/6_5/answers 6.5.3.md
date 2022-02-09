Exercises Section 6.5.3
Exercise 6.48: Explain what this loop does and whether it is a good use of
`assert`:
```c++
string s;
while (cin >> s && s != sought) { } // empty body
assert(cin);
```

No, `assert` macro is meaningless here.