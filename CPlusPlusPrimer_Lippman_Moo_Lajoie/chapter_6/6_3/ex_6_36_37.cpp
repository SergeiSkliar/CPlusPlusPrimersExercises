#include<iostream>
#include<string>

std::string str;

std::string (&func())[10];

auto func2()->std::string(&)[10];

decltype(str)& func3();


typedef std::string str_f[10];
str_f &func4();

int main() {

}