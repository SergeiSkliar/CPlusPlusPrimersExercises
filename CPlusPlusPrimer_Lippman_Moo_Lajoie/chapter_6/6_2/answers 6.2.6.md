Exercise 6.28: In the second version of error_msg that has an ErrCode
parameter, what is the type of elem in the for loop?
answer: `const string&`.

Exercise 6.29: When you use an initializer_list in a range for
would you ever use a reference as the loop control variable? If so, why? If
not, why not?
answer: yes, using links helps avoid copying values from `initializer_list`.