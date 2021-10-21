Exercise 5.1: What is a null statement? When might you use a null
statement?  
Answer: it is an empty statement (single semicolon `;`). null statement can be used in a loop which work can be done inside its condition:
`while (std::cin >> ch && ch != found)``
	``;`

Exercise 5.2: What is a block? When might you might use a block?
Answer: it a sequence of statements inside pair of braces `{}`. Another name - compound statement. May be empty. maybe used in the body of a loop.

`while (/*condition*/) {``
``	/*loop body*/}`

Exercise 5.4: Explain each of the following examples, and correct any
problems you detect.
(a) `while (string::iterator iter != s.end()) { /* . . . */ }`
Answer: iterator variable `iter` should be initialized first.
`string::iterator iter = s.begin();``
``while (iter != s.end()) {/*...*/}`

(b) `while (bool status = find(word)) { /*. . . */ }
if (!status) { /* . . . */ }`  
Answer: variable `status` visible only inside `while` loop.
`bool status;``
``while (status = find(word)) { /*...*/ }``
``if (!status) {/*...*/}`

Exercise 5.7: Correct the errors in each of the following code fragments:
(a) `if (ival1 != ival2)`
`ival1 = ival2`
`else ival1 = ival2 = 0;`

Correct: `if (ival1 != ival2)`
`ival1 = ival2;`
`else ival1 = ival2 = 0;`

(b) ``if (ival < minval)`
`minval = ival;`
occurs = 1;`  

Correct: ``if (ival < minval) {minval = ival;`
`++occurs;}`

(c) `if (int ival = get_value())`
`cout << "ival = " << ival << endl;`
`if (!ival)`
`cout << "ival = 0\n";`

Correct: `int ival;``if (ival = get_value())`
`cout << "ival = " << ival << endl;`
`if (!ival)`
`cout << "ival = 0\n";`

(d) ``if (ival = 0)`
`ival = get_value();` 

Correct: `if (ival == 0)`
``ival = get_value();``

Exercise 5.8: What is a “dangling else”? How are else clauses resolved in C++?
Problem of matching `if` and `else` statements. In C++ this problem resolved by matching `else` statement to the closest `if`.

