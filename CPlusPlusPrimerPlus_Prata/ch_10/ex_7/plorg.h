#pragma once

class Plorg {
private:
	char name[19];
	int contentment_index;
	void set_index(int n) { contentment_index = n; }
public:
	Plorg();
	Plorg(const char* name_);
	void report() const;
	void change_index(int);
};