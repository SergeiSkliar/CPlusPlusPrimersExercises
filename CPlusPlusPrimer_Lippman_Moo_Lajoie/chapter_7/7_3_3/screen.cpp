#include"screen.h"


Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen& Screen::set(position rw, position col, char c)
{
	contents[rw * width + col] = c;
	return *this;
}

