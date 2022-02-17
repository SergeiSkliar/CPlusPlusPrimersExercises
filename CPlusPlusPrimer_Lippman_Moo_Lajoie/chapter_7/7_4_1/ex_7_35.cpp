#pragma once
#include <string>
using std::string;

//Exercise 7.35: Explain the following code, indicating which definition of
//Type or initVal is used for each use of those names.Say how you would
//fix any errors.

typedef string Type_str; // error fix: change type name
Type_str initVal(); 
class Exercise {
public:
	typedef double Type_double; // possible but unnecessary fix: instead of Type use a more unique Type_double
	Type_double setVal(Type_double);
	Type_double initVal();
private:
	//int val;
	Type_double val; // type of val was changed to fix the truncation inside setVal() member
};

// error fix: add Exercise:: qualifier
Exercise::Type_double Exercise::setVal(Type_double parm) {
	val = parm + initVal(); 
	return val; // int val is truncated - possible fix: change type of val inside the class
}