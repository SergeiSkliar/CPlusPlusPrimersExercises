Exercises Section 10.5.3
Exercise 10.41: Based only on the algorithm and argument names, describe
the operation that the each of the following library algorithms performs:

```c++
replace(beg, end, old_val, new_val); // replaces all elements with old_val in a sequence with the new_val
replace_if(beg, end, pred, new_val); // replaces all elements for which pred returns true with new_val
replace_copy(beg, end, dest, old_val, new_val); // Copies the elements from the range [beg, end) to another range beginning with dest replacing all elements with old_val with new_val
replace_copy_if(beg, end, dest, pred, new_val); // Copies the elements from the range [beg, end) to another range beginning with dest replacing all elements for which pred returns true with new_val
```

