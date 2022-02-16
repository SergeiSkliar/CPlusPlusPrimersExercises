#pragma once
#include<string>
#include<iostream>

class Screen {
	using position = std::string::size_type;
private:
	position cursor = 0;
	position height = 0, width = 0;
	std::string contents;
	void do_display(std::ostream& os) const {
		os << contents;
	}

public:
	Screen() = default;
	Screen(int h, int w, char c) : height(h), width(w), contents(h * w, c) {}
	Screen(int h, int w) : height(h), width(w), contents(h * w, ' ') {}

	// member functions
	Screen& move(position r, position c);
	Screen& set(char);
	Screen& set(position, position, char);
	Screen& display(std::ostream& os) {
		do_display(os);
		return *this;
	}
	const Screen& display(std::ostream& os) const {
		do_display(os);
		return *this;

		// ex 7 29
		//Screen move(position r, position c);
		//Screen set(char);
		//Screen set(position, position, char);
		//Screen display(std::ostream & os) {
		//	do_display(os);
		//	return *this;
		//}
		//const Screen display(std::ostream & os) const {
		//	do_display(os);
		//	return *this;
	}
};

inline Screen& Screen::move(position rw, position curs)
{
	position  row = rw * width;
	cursor = row + curs;
	return *this;
}

//inline Screen Screen::move(position rw, position curs)
//{
//	position  row = rw * width;
//	cursor = row + curs;
//	return *this;
//}