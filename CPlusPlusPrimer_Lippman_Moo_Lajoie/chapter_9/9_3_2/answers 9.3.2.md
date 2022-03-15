Exercises Section 9.3.2
Exercise 9.23: In the first program in this section on page 346, what would
the values of `val`, `val2`, `val3`, and `val4` be if `c.size()` is 1?

```c++
if (!c.empty()) {
    auto val = *c.begin(), val2 = c.front();
    auto last = c.end();
    auto val3 = *(--last); 
    auto val4 = c.back();
}
```

All values would be equal to the first (and only) element int the container.