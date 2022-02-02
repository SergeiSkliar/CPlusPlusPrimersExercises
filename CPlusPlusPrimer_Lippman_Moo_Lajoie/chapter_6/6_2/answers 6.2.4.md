Exercise 6.24: Explain the behavior of the following function. If there are
problems in the code, explain what they are and how you might fix them.
`void print(const int ia[10])`
`{`
`for (size_t i = 0; i != 10; ++i)`
`cout << ia[i] << endl;`
`}`

answer: This function can be applied only to `int` array with exactly 10 elements. The simple solution is to pass an array size as the second argument.
`void print(const int arr[], size_t size)`