// lippman_exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Exercise 3.17: Read a sequence of words from cin and store the values a
// vector.After you’ve read all the words, process the vectorand change
// each word to uppercase.Print the transformed elements, eight words to a line

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//    vector<string> vec;
//    string str;
//    int cnt = 0;
//    for (decltype(vec.size()) i = 0; i != 8; ++i) {
//        while (cin >> str) {
//            vec.push_back(str);
//        }
//    }
//    for (decltype(vec.size()) i = 0; i < vec.size(); ++i) {
//        cout << vec[i] << endl;
//    }
//    for (string& s : vec) {
//        for (char& c : s) {
//            c = toupper(c);
//        }
//    }
//    for (decltype(vec.size()) i = 0; i < vec.size(); ++i) {
//        cout << vec[i] << " ";
//        ++cnt;
//        if (cnt % 8 == 0) {
//            cout << endl;
//        }
//        //cout << endl;
//    }
//    return 0;
//}

// Exercise 3.20: Read a set of integers into a vector.Print the sum of each
// pair of adjacent elements.Change your program so that it prints the sum of
// the first and last elements, followed by the sum of the secondand second - tolast, and so on.

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    vector<int> vec;
//    int num;
//    while (cin >> num) {
//        vec.push_back(num);
//    }
//
//    for (decltype(vec.size()) i = 0; i < vec.size(); ++i) {
//        cout << vec[i] << " ";
//    }
//    cout << endl;
//
//    // Print the sum of each pair of adjacent elements.
//    for (int i = 1; i < vec.size(); ++i) {
//        cout << vec[i] + vec[i - 1] << " ";
//    }
//    cout << endl;
//
//    // print the sum of the first and last elements, followed by the sum of the second and second-tolast, and so on.
//    int length = vec.size();
//    for (int i = 0; i < length / 2; ++i) {
//        cout << vec[i] + vec[length - 1 - i] << " ";
//    }
//
//
//    return 0;
//}

//Exercise 3.22: Revise the loop that printed the first paragraph in text to
//instead change the elements in text that correspond to the first paragraph
//to all uppercase.After you’ve updated text, print its contents.

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    vector<string> text;
//    string line;
//    while (getline(std::cin, line))
//        text.push_back(line);
//    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
//        //cout << *it << endl;
//        for (auto& c : *it)
//            c = toupper(c);
//
//    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
//        cout << *it << endl;
//
//    return 0;
//}

//Exercise 3.23: Write a program to create a vector with ten int elements.
//Using an iterator, assign each element a value that is twice its current value.
//Test your program by printing the vector.

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    vector<int> vec(10);
//    for (int i = 0; i != 10; ++i)
//        cin >> vec[i];
//
//    for (auto it = vec.begin(); it != vec.end(); ++it) {
//        *it *= 2;
//    }
//
//    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
//        cout << *it << " ";
//    }
//
//    return 0;
//}

//Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators.

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    vector<int> vec;
//    int num;
//    while (cin >> num) {
//        vec.push_back(num);
//    }
//
//    for (auto it = vec.begin(); it != vec.end(); ++it) {
//        cout << *it << " ";
//    }
//    cout << endl;
//    auto beg = vec.cbegin(), end = vec.cend();
//    auto mid = vec.cbegin() + (end - beg) / 2;
//    // Print the sum of each pair of adjacent elements.
//    // for (int i = 1; i < vec.size(); ++i) 
//    for (auto it = beg + 1; it != vec.end(); ++it)
//    {
//        cout << *it + *(it - 1) << " ";
//    }
//    cout << endl;
//
//    // print the sum of the first and last elements, followed by the sum of the second and second-tolast, and so on.
//    //for (int i = 0; i < length / 2; ++i) 
//    for (auto it = beg; it != mid; ++it) {
//        cout << *it + *(end - 1 - (it - beg)) << " ";
//    }
//
//
//    return 0;
//}

//Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104)
//using iterators instead of subscripts.

// Exercise 3.30: Identify the indexing errors in the following code :

//#include <iostream>
//#include <cstddef>
//using namespace std;
//
//int main()
//{
//	constexpr size_t array_size = 10;
//	int ia[array_size];
//	for (size_t ix = 0; ix <= array_size; ++ix)
//		ia[ix] = ix;
//
//	for (auto i : ia) cout << i << " ";
//	return 0;
//}

//Exercise 3.32: Copy the array you defined in the previous exercise into
//another array.Rewrite your program to use vectors.

//#include <iostream>
//#include <vector>
//#include <cstddef>
//using namespace std;
//
//int main()
//{
//    /*int array_size = 10;
//    vector<int> ia(array_size);
//    for (int ix = 0; ix != array_size; ++ix)
//        ia[ix] = ix;
//
//    for (auto i : ia) cout << i << " ";
//    vector<int> ia2(array_size);
//    //ia2 = ia;
//
//    ia2 = ia;
//    for (auto i : ia2) cout << i << " ";*/
//
//    constexpr size_t array_size = 10;
//    int ia[array_size];
//    for (size_t ix = 0; ix <= array_size; ++ix)
//        ia[ix] = ix;
//
//    int ia2[array_size];
//    for (size_t ix = 0; ix <= array_size; ++ix)
//        ia2[ix] = ia[ix];
//
//    for (auto i : ia) cout << i << " ";
//    for (auto i : ia2) cout << i << " ";
//
//
//    return 0;
//}

//Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.
//#include <iostream>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//    int arr[5];
//    int* ptr1 = begin(arr), * ptr2 = end(arr);
//    while (ptr1 != ptr2) {
//        *ptr1 = 0;
//        ++ptr1;
//    }
//
//    for (auto i : arr) cout << i << " ";
//
//    return 0;
//}

//Exercise 3.36: Write a program to compare two arrays for equality. Write similar program to compare two vectors.

//#include <iostream>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//    int arr1[] = { 1,2,3 }, arr2[] = { 1,2,3,4 };
//    bool eq = 0;
//    int* arr1_begin = begin(arr1), * arr1_end = end(arr1), * arr2_begin = begin(arr2), * arr2_end = end(arr2);
//    int l1 = arr1_end - arr1_begin, l2 = arr2_end - arr2_begin;
//
//    if (l1 != l2) { cout << "not equal"; return 0; }
//
//    while (arr1_begin != arr1_end && arr2_begin != arr2_end) {
//        if (*arr1_begin != *arr2_begin) eq = 0;
//        else eq = 1;
//        ++arr1_begin;
//        ++arr2_begin;
//    }
//
//    if (eq == 1) cout << "equal"; else cout << "not equal";
//
//    return 0;
//}

//Exercise 3.39: Write a program to compare two strings. Now write a program to compare the values of two C - style character strings.
//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//    string str1 = "one", str2 = "two";
//    if (str1 < str2) cout << "str1 < str2";
//    else if (str1 > str2) cout << "str1 > str2";
//    else cout << "equal" << endl;
//
//    const char arr1[] = "two", arr2[] = "one";
//    if (strcmp(arr1, arr2) < 0) cout << "arr1 < arr2";
//    else if (strcmp(arr1, arr2) > 0) cout << "arr1 > arr2";
//    else cout << "equal";
//
//    return 0;
//}

//Exercise 3.40: Write a program to define two character arrays initialized
//from string literals.Now define a third character array to hold the
//concatenation of the two arrays.Use strcpy and strcat to copy the two
//arrays into the third.

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//    char arr1[] = "two", arr2[] = "one", arr3[9];
//    strcpy(arr3, strcat(arr1, arr2));
//    cout << arr3;
//
//    return 0;
//}

//Exercise 3.42: Write a program to copy a vector of ints into an array of ints
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> vec(10, 5);
//	for (int i = 0; i != vec.size(); ++i) cout << vec[i];
//	cout << endl;
//	int length = vec.size();
//	int arr[length];
//	for (int i = 0; i < length; ++i)
//	{
//		arr[i] = vec[i];
//	}
//	for (int i = 0; i != length; ++i) cout << arr[i];
//
//	return 0;
//}

//Exercise 3.43: Write three different versions of a program to print the
//elements of ia.One version should use a range for to manage the
//iteration, the other two should use an ordinary for loop in one case using
//subscriptsand in the other using pointers.In all three programs write all the
//types directly.That is, do not use a type alias, auto, or decltype to
//simplify the code.

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    constexpr size_t rowCnt = 3, colCnt = 4;
//    size_t cnt = 0;
//    int ia[rowCnt][colCnt]; // 12 uninitialized elements
//    // for each row
//    for (size_t i = 0; i != rowCnt; ++i) {
//        // for each column within the row
//        for (size_t j = 0; j != colCnt; ++j) {
//            // assign the element's positional index as its value
//            ia[i][j] = cnt;
//            ++cnt;
//            cout << ia[i][j] << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "Version 1: Range for:" << endl;
//    for (int(&row)[4] : ia) {
//        for (int& col : row) {
//            cout << col << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "Version 2: ordinary for using subscripts:" << endl;
//    for (int i = 0; i != rowCnt; ++i) {
//        for (int j = 0; j != colCnt; ++j) {
//            cout << ia[i][j] << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "Version 3: ordinary for using pointers:" << endl;
//    for (int(*row)[4] = ia; row != ia + 3; ++row) {
//        for (int* col = *row; col != *row + 4; ++col) {
//            cout << *col << " ";
//        }
//    }
//    cout << endl;
//    return 0;
//}

//Exercise 3.44: Rewrite the programs from the previous exercises using a type alias for the type of the loop control variables.

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    constexpr size_t rowCnt = 3, colCnt = 4;
//    size_t cnt = 0;
//    int ia[rowCnt][colCnt]; // 12 uninitialized elements
//    // for each row
//    for (size_t i = 0; i != rowCnt; ++i) {
//        // for each column within the row
//        for (size_t j = 0; j != colCnt; ++j) {
//            // assign the element's positional index as its value
//            ia[i][j] = cnt;
//            ++cnt;
//            cout << ia[i][j] << " ";
//        }
//    }
//    cout << endl;
//    using int_array = int[4];
//
//    cout << "Version 1: Range for:" << endl;
//    for (int_array(&row) : ia) {
//        for (int& col : row) {
//            cout << col << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "Version 2: ordinary for using subscripts:" << endl;
//    for (int i = 0; i != rowCnt; ++i) {
//        for (int j = 0; j != colCnt; ++j) {
//            cout << ia[i][j] << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "Version 3: ordinary for using pointers:" << endl;
//    for (int_array* row = ia; row != ia + 3; ++row) {
//        for (int* col = *row; col != *row + 4; ++col) {
//            cout << *col << " ";
//        }
//    }
//    cout << endl;
//    return 0;
//}


//Exercise 3.45: Rewrite the programs again, this time using auto.
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    constexpr size_t rowCnt = 3, colCnt = 4;
//    size_t cnt = 0;
//    int ia[rowCnt][colCnt]; // 12 uninitialized elements
//    // for each row
//    for (size_t i = 0; i != rowCnt; ++i) {
//        // for each column within the row
//        for (size_t j = 0; j != colCnt; ++j) {
//            // assign the element's positional index as its value
//            ia[i][j] = cnt;
//            ++cnt;
//            cout << ia[i][j] << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "Version 1: Range for:" << endl;
//    for (auto& row : ia) {
//        for (auto& col : row) {
//            cout << col << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "Version 2: ordinary for using subscripts:" << endl;
//    for (int i = 0; i != rowCnt; ++i) {
//        for (int j = 0; j != colCnt; ++j) {
//            cout << ia[i][j] << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "Version 3: ordinary for using pointers:" << endl;
//    for (auto* row = ia; row != ia + 3; ++row) {
//        for (auto* col = *row; col != *row + 4; ++col) {
//            cout << *col << " ";
//        }
//    }
//    cout << endl;
//    return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
