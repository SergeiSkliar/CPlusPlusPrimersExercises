#include"move.h"
#include<iostream>

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	std::cout << "X " << x << " Y " << y << std::endl;
}

Move Move::add(const Move& m) const
{
	return Move(x + m.x, y + m.y);
}

Move Move::reset(double a, double b)
{
	return Move(x = a, y = b);
}
