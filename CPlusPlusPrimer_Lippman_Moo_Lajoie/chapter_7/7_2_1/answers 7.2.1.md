Exercise 7.20: When are friends useful? Discuss the pros and cons of using
friends.

*For example, we may want to create new object of Sales_data by adding the values of the other two Sales_data object. But such a function `new_obj = add(ob1, obj2)` can't be a member due to language restrictions and code like `new_obj = obj1.add(obj2)` won't compile (objects are const). In this case we are using keyword `friend` to give access to the private section of a class to non-member functions. Obvious drawback - this approach violates encapsulation.*