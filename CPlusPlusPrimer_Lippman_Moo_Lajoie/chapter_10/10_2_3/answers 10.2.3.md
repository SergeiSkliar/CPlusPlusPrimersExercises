Exercises Section 10.2.2

Exercise 10.10: Why do you think the algorithms don’t change the size of containers?

_Algorithms don't use container operations - they don't have direct access to them. Also changing the size of the container with algorithm would invalidate the iterators - iterators will need to be constantly updated. Ofcourse we can use `back_inserter` to add elements to the container, but it is more of extension of features than default behavior._