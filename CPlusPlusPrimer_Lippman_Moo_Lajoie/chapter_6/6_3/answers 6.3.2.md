Exercise 6.30: Compile the version of str_subrange as presented on
page 223 to see what your compiler does with the indicated errors.

```
main.cpp:24:1: error: return-statement with no value, in function returning ‘bool’ [-fpermissive]
   24 | return; // error #1: no return value; compiler should detect this
      | ^~~~~~
```

Exercise 6.31: When is it valid to return a reference? A reference to
const?
>When returned type is an lvalue and object is not local.
If returned object should not be a lvalue - a reference to const returned.

Exercise 6.32: Indicate whether the following function is legal. If so, explain
what it does; if not, correct any errors and then explain it.
```c++
int &get(int *arry, int index) { return arry[index]; }
int main() {
    int ia[10];
    for (int i = 0; i != 10; ++i)
        get(ia, i) = i;
```

>This function is legal. It returns a reference to a position in the array. In the `for` loop it used to assign consecutive integer values to the elements of the `ia` array.

Exercise 6.34: What would happen if the stopping condition in factorial
were
`if (val != 0)`

>The program will crash (with stack overflow exception) if passed value of `val` is less than 0.
In other words there is no protection against passing negative numbers to the factorial function.

Exercise 6.35: In the call to fact, why did we pass `val - 1` rather than
`val--`?

>`val--` causes a stack overflow.

