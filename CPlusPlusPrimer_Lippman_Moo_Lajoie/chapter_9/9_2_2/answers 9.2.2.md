Exercises Section 9.2.2
Exercise 9.7: What type should be used as the index into a `vector` of
`int`s?
```c++
std::vector<int>::size_type;
```

Exercise 9.8: What type should be used to read elements in a `list` of
`string`s? To write them?
```c++
std::list<std::string>::const_iterator; // reading
std::list<std::string>::iterator; // writing (also reading)
```

