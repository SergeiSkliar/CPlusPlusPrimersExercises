#pragma once
// string2.h -- fixed and augmented string class definition

#include <iostream>
using std::ostream;
using std::istream;
class String
{
private:
	char* str; // pointer to string
	int len; // length of string
	static int num_strings; // number of objects
	static const int CINLIM = 80; // cin input limit
public:
	// constructors and other methods
	String(const char* s); // constructor
	String(); // default constructor
	String(const String&); // copy constructor
	~String(); // destructor
	int length() const { return len; }
	void stringlow();
	void stringup();
	int has(char);
	// overloaded operator methods
	String& operator=(const String&);
	String& operator=(const char*);
	char& operator[](int i);
	const char& operator[](int i) const;
	// overloaded operator friends
	friend bool operator<(const String& st, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);
	friend String operator+(const String& s1, const String& s2);
	friend String operator+(const char* ch_, const String& s);
	friend String operator+(const String& s, const char* ch_);
	// static function
	static int HowMany();
};
