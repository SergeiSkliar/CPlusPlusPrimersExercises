#pragma once
// example.h
#include <vector> // include vector
class Example {
public:
    static constexpr double rate = 6.5; // can't initialize static inside class body
    static const int vecSize = 20;
    static std::vector<double> vec; // vector is not a literal type
};