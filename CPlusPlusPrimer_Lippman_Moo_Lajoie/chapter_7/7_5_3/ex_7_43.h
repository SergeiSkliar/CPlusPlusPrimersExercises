#pragma once


class NoDefault {
public:
	NoDefault(int i) : num(i) {}
private:
	int num;
};

class C {
public:
	C(NoDefault nd) : c_num(nd) {}
	C() : C(0) {}
private:
	NoDefault c_num;
};

