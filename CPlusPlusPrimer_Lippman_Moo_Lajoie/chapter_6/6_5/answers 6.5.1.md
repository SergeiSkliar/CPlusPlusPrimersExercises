Exercises Section 6.5.1
Exercise 6.40: Which, if either, of the following declarations are errors?
Why?
(a) 
```c++
int ff(int a, int b = 0, int c = 0);
```
Legal.
(b) 
```c++
char *init(int ht = 24, int wd, char bckgrnd);
```
Illegal. Default arguments resloved by position. Either move `ht` parameter to right-most position
`char *init(int wd, char bckgrnd, int ht = 24);`
or provide default values for other parameters.

Exercise 6.41: Which, if any, of the following calls are illegal? Why? Which,
if any, are legal but unlikely to match the programmer’s intent? Why?
```c++
char *init(int ht, int wd = 80, char bckgrnd = ' ');
```
(a) `init();`
Illegal. Too few arguments - the parameter `ht` is non-default.
(b) `init(24,10);`
Legal. `ht = 24, wd = 10`.
(c) `init(14, '*');`
Legal. `char` argument `*` is converted to `int`.
