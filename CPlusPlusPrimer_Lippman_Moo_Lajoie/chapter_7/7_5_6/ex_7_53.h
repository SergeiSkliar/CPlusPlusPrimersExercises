#pragma once

class Debug {
public:
	constexpr Debug(int c = 0) : err_code(c) {}
	constexpr Debug(int c) : err_code(c) {}
	constexpr bool any() { return ((err_code==0) ? false : true); }

	void set_code(int c) { err_code = c; }
private:
	int err_code;
};