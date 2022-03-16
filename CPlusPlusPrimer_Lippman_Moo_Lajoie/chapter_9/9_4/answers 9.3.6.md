Exercises Section 9.4
Exercise 9.35: Explain the difference between a `vector`’s `capacity` and its `size`.

_`capacity` shows how much memory `vector` preallocates - i.e. how many possible elements it can hold without allocating more memory. `size` shows the number of the actual elements in the `vector`_

Exercise 9.36: Can a container have a `capacity` less than its `size`?

_No, `capacity` is always at least as large as `size`._

Exercise 9.37: Why don’t `list` or `array` have a `capacity` member?

_`array` don't have `capacity` because it is fixed-size container, which can't change its size._
_`list` in its turn is not a contiguous container - adding or removing elements doesn't require that entire container to be reallocated._

Exercise 9.39: Explain what the following program fragment does:
```c++
vector<string> svec; // creates an empty vector of strings
svec.reserve(1024); // reserves space for 1024 elements
string word; // creates string object
while (cin >> word) // loop for standard input
    svec.push_back(word); // place word into svec until input isn't terminated
svec.resize(svec.size()+svec.size()/2); // adds to the vector 50% more element of its current size, value-initialized
```

Exercise 9.40: If the program in the previous exercise reads 256 words,
what is its likely `capacity` after it is `resize`d? What if it reads 512? 1,000?
1,048?

_In case of 256 and 512 words `capacity` won't change._
_In case of 1000 words `capacity` won't change. After resize it will be around 1500 (1536 on my system)._
_In case of 1048 words the `capacity` increases up to 1048 (1536 on my system). After `resize` it becomes 2304._