#pragma once
#include<iostream>
#include<string>


struct Sales_data {
	//ex 7 11
	friend std::istream& read(std::istream&, Sales_data&);
	Sales_data() : bookNo(""), units_sold(0), revenue(0) {}
	Sales_data(const std::string& s) : bookNo(s) {}
	Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n*p){}
	Sales_data(std::istream& is)
	{
		// ex 7 12
		read(is, *this);
	}

	// new members: operations on Sales_data objects
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	// data members are unchanged from § 2.6.1 (p. 72)
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
// nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

