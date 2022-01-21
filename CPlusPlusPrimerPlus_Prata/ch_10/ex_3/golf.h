#pragma once

const int Len = 40;

class golf {
private:
	char fullname[Len];
	int handicap;
public:
	// interactive version:
	// function solicits name and handicap from user
	// and sets the members of g to the values entered
	// returns 1 if name is entered, 0 if name is empty string
	golf();
	golf(const char* name, int hc);

	~golf();


	// function resets handicap to new value
	void new_handicap(int hc);
	// function displays contents of golf structure
	void showgolf();
};