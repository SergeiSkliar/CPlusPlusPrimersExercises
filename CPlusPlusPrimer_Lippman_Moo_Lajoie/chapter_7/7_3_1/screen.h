#pragma once
#include<string>

class Screen {
	using position = std::string::size_type;
private:
	position cursor;
	position height = 0, width = 0;
	std::string contents;

public:
	Screen() = default;
	Screen(int h, int w, char c) : height(h), width(w), contents(h * w, c) {}
	Screen(int h, int w, position blanks) : height(h), width(w), contents(blanks, ' ') {}
};