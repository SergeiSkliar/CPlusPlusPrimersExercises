Exercises Section 6.2.3
Exercise 6.16: The following function, although legal, is less useful than it
might be. Identify and correct the limitation on this function:
```bool is_empty(string& s) { return s.empty(); }```
Answer: Argument should be `const strint& s`. That way it can accept both const and non-const parameters.

Exercise 6.19: Given the following declarations, determine which calls are
legal and which are illegal. For those that are illegal, explain why.
`double calc(double);`
`int count(const string &, char);`
`int sum(vector<int>::iterator, vector<int>::iterator, int);`
`vector<int> vec(10);`
a) `calc(23.4, 55.1);` - illegal, one parameter needed
b) `count("abcda", 'a');` - legal
c) `calc(66);` - legal
d) `sum(vec.begin(), vec.end(), 3.8);` - legal, but erroneus

Exercise 6.20: When should reference parameters be references to const?
What happens if we make a parameter a plain reference when it could be a
reference to const?
answer: if the reference parameter will not be changed then it should be a const.
if reference parameter is non-const then we cannot pass const objects, literals, objects that require conversion to plain reference type.
