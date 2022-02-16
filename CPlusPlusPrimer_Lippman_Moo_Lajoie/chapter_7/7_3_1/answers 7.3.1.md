Exercise 7.25: Can Screen safely rely on the default versions of copy and
assignment? If so, why? If not, why not?

Yes. `Screen` implementation in exercises relies on standard library class `std::string` which takes care of possible issues with dynamic memory management.