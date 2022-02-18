#pragma once
#include<iostream>
#include<string>


class Sales_data {
	//ex 7 11
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);
	friend std::ostream& print(std::ostream&, const Sales_data&);

private:
	// data members 
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	/* double avg_price() const { return units_sold ? revenue / units_sold : 0; } // implicitly inline */
	double avg_price() const;

public:
	//constructors
	Sales_data(std::string s, unsigned cnt, double rev) :
		bookNo(s), units_sold(cnt), revenue(rev* cnt) { std::cout << "three argument constructor" << std::endl; }
	Sales_data() : Sales_data("", 0, 0) { std::cout << "default constructor" << std::endl; }
	Sales_data(const std::string& s) : Sales_data(s, 0, 0) { std::cout << "one argument constructor" << std::endl; }

	Sales_data(std::istream& is) : Sales_data() {
		std::cout << "istream constructor" << std::endl;
		std::cout << "Enter data: ";
		read(is, *this); 
	}


	// member functions
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);

};
// nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

