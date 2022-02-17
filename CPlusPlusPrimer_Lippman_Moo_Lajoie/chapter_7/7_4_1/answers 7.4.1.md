Exercises Section 7.4.1
Exercise 7.34: What would happen if we put the `typedef` of `pos` in the `Screen` class on page 285 as the last line in the class?

Then the identifier `pos` is undefined.

Exercise 7.35: Explain the following code, indicating which definition of
Type or initVal is used for each use of those names. Say how you would
fix any errors.

```c++
typedef string Type;
Type initVal(); // global scope Type
class Exercise {
public:
	typedef double Type; // error - type name redefenition
	Type setVal(Type); // class scope Type
	Type initVal(); // class scope Type
private:
	int val;
};
Type Exercise::setVal(Type parm) { // returned Type from global scope, parameter Type - class scope
	val = parm + initVal(); // initVal class scope
	return val; // error - int can't be converted to string
}
```

Error correction in .cpp file.