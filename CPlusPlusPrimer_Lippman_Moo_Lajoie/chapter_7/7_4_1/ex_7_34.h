#pragma once

#include <string>

int height; // defines a name subsequently used inside Screen
class Screen {
public:
	void dummy_fcn(pos height) {
		cursor = width * height; // which height? the parameter
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	typedef std::string::size_type pos;
};