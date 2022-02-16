#pragma once

class Y;

class X {
	Y* y_mem = nullptr;
};

class Y {
	X x_obj;
};