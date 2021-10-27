//Exercise 5.16: The while loop is particularly good at executing while some
//condition holds; for example, when we need to read values until end - of - file.
//The for loop is generally thought of as a step loop : An index steps through
//a range of values in a collection.Write an idiomatic use of each loop and
//then rewrite each using the other loop construct.If you could use only one
//loop, which would you choose ? Why ?

// common for loop
for (int i = 0; i != size; ++i) {
	/*body*/
}

// common while loop
char c;
while (std::cin >> c) {
	/*body*/
}

// "while"-style for loop
for (char c; std::cin >> c; ) {
	/*body*/
}

// "for"-style while loop
int i = 0;
while (i != size) {
	/*body*/
	++i;
}