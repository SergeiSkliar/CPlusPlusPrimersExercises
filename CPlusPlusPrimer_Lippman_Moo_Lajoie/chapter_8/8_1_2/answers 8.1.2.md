Exercise 8.3: What causes the following while to terminate?
```c++
while (cin >> i) /* ... */
```
_Depends on several `iostate` values._
_There are three possibilities:_
_* `badbit` is set - indicates the system-level failure_
_* `failbit` is set - indicates the recoverable error, such as reading a character when numeric data is expected_
_* `eofbit` and `failbit` is set - indicates end-of-file._