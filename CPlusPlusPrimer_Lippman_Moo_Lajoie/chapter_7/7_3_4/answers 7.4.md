Exercises Section 7.4
Exercise 7.33: What would happen if we gave `Screen` a `size` member
defined as follows? Fix any problems you identify.

```c++
pos Screen::size() const
{
    return height * width;
}
```

If this member defined inside class definition - it should be ok (atleast VS2019 does not identifies it as an error).
But if it is defined outside the class - then return type should have qualification - `Screen::pos`.

```c++
class Screen {
private:
	typedef int pos;
	pos height, width;
public:
	pos Screen::size() const
	{
		return height * width;
	}
};
```