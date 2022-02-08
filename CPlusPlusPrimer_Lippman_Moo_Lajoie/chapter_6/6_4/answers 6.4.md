Exercises Section 6.4
Exercise 6.39: Explain the effect of the second declaration in each one of
the following sets of declarations. Indicate which, if any, are illegal.
a) 
```c++
int calc(int, int);
int calc(const int, const int);
```
Second declaration redeclares the function.
b) 
```c++
int get();
double get();
```
Compile error. Compiler can't overload functions distinguished only by return type.
c) 
```
int *reset(int *);
double *reset(double *);
```
Legal.