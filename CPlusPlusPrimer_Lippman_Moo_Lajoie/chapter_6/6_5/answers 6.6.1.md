Exercises Section 6.6.1
Exercise 6.52: Given the following declarations,
```c++
void manip(int, int);
double dobj;
```
what is the rank (§ 6.6.1, p. 245) of each conversion in the following calls?
(a) `manip('a', 'z');` - rank 3.
(b) `manip(55.4, dobj);` - rank 4.

Exercise 6.53: Explain the effect of the second declaration in each one of
the following sets of declarations. Indicate which, if any, are illegal.
(a) 
```c++
int calc(int&, int&);
int calc(const int&, const int&);
```
`calc` function is overloaded. First version takes two plain references to `int`, second - to `const` references.
(b) 
```c++
int calc(char*, char*);
int calc(const char*, const char*);
```
Legal, `calc` function is overloaded.
(c) 
```c++
int calc(char*, char*);
int calc(char* const, char* const);
```
Illegal. While declarations has no effect, when we try to write function definition compiler throw an error that function `calc` already has a body.