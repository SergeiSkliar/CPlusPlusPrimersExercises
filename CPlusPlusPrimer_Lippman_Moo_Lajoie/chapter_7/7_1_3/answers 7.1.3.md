Exercise 7.8: Why does `read` define its `Sales_data` parameter as a plain
reference and `print` define its parameter as a reference to `const`?

Because the `read` function is intended to change its `Sales_data` parameter. While `print` does not.

Exercise 7.10: What does the condition in the following `if` statement do?
`if (read(read(cin, data1), data2)) `

It successively "read" (using `cin` object) into `data1` and then into `data2`. After that program terminates. This `if` statement is very similar to the `if() {while}` construction:
```c++
if (read(std::cin, data1)) {
    while (read(std::cin, data2))
    }
```
except that `while` loop works until user terminates it.