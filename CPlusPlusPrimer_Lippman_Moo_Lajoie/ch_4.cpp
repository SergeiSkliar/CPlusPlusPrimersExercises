//Exercise 4.10: Write the condition for a while loop that would read ints
//from the standard inputand stop when the value read is equal to 42.

//int num = 0;
//while (std::cin >> num && num != 42) {}

//Exercise 4.11: Write an expression that tests four values, a, b, c, and d,
//and ensures that a is greater than b, which is greater than c, which is
//greater than d.
//
//int a, b, c, d;
//if (a > b&& b > c&& c > d) {}

//Exercise 4.21: Write a program to use a conditional operator to find the
//elements in a vector<int> that have odd value and double the value of
//each such element.
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    vector<int> vec;
//    for (int i = 0; i != 10; ++i) {
//        vec.push_back(i);
//    }
//
//    for (auto i : vec) cout << vec[i] << " ";
//    cout << endl;
//    int l = vec.size();
//
//    //for (int i = 0; i != l; ++i){
//    //    vec[i] = ((vec[i] % 2 != 0) ? vec[i] + vec[i] : vec[i]);
//    //}
//    for (auto& i : vec) {
//        cout << ((i % 2) ? i *= 2 : i) << " ";
//    }
//    return 0;
//}


//Exercise 4.22: Extend the program that assigned high pass, pass, and fail
//grades to also assign low pass for grades between 60 and 75 inclusive.Write
//two versions : One version that uses only conditional operators; the other
//should use one or more if statements.Which version do you think is easier
//to understandand why ?


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    int grade = 0;
//    while (cin >> grade) {
//        cout << ((grade > 90) ? "high pass" : (grade > 60 && grade < 75) ? "low pass" : (grade > 75) ? "pass" : "fail");
//    }
// version 2
//    while (cin >> grade) {
//        if (grade > 90) cout << "high pass";
//        else if (grade > 60 && grade <= 75) cout << "low pass";
//        else if (grade > 75) cout << "pass";
//        else cout << "fail";
//    }
//    return 0;
//}

//Exercise 4.28: Write a program to print the size of each of the built - in
//types.

//#include <iostream>
//
//int main() {
//	//void
//	std::cout << "void and pointer" << std::endl;
//	std::cout << "void:\t\t" << sizeof(void *) << std::endl;
//	std::cout << "nullptr_t:\t" << sizeof(nullptr_t) << std::endl << std::endl;
//
//
//	//bool
//	std::cout << "Bool type" << std::endl;
//	std::cout << "bool:\t\t" << sizeof(bool) << std::endl << std::endl;
//
//
//	//integer types
//	std::cout << "Integer types" << std::endl;
//	std::cout << "int:\t\t" << sizeof(int) << std::endl;
//	std::cout << "short:\t\t" << sizeof(short) << std::endl;
//	std::cout << "long:\t\t" << sizeof(long) << std::endl;
//	std::cout << "long long:\t" << sizeof(long long) << std::endl << std::endl;;
//
//	//floating point types
//	std::cout << "Floating point types" << std::endl;
//	std::cout << "float:\t\t" << sizeof(float) << std::endl;
//	std::cout << "double:\t\t" << sizeof(double) << std::endl;
//	std::cout << "long double:\t" << sizeof(long double) << std::endl << std::endl;;
//
//	//character types
//	std::cout << "Character types" << std::endl;
//	std::cout << "char:\t\t" << sizeof(char) << std::endl;
//	std::cout << "wchar_t:\t" << sizeof(wchar_t) << std::endl;
//	std::cout << "signed char:\t" << sizeof(signed char) << std::endl;
//	std::cout << "unsigned char:\t" << sizeof(unsigned char) << std::endl;
//	//std::cout << sizeof(char8_t); // c++20 standard
//	std::cout << "char16_t:\t" << sizeof(char16_t) << std::endl;
//	std::cout << "char32_t:\t" << sizeof(char32_t) << std::endl << std::endl;
//
//	// fixed width integers
//	std::cout << "Fixed width integer types" << std::endl;
//	std::cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes" << std::endl;
//	std::cout << "uint8_t:\t" << sizeof(uint8_t) << " bytes" << std::endl;
//	std::cout << "int16_t:\t" << sizeof(int16_t) << " bytes" << std::endl;
//	std::cout << "uint16_t:\t" << sizeof(uint16_t) << " bytes" << std::endl;
//	std::cout << "int32_t:\t" << sizeof(int32_t) << " bytes" << std::endl;
//	std::cout << "uint32_t:\t" << sizeof(uint32_t) << " bytes" << std::endl;
//	std::cout << "int64_t:\t" << sizeof(int64_t) << " bytes" << std::endl;
//	std::cout << "uint64_t:\t" << sizeof(uint64_t) << " bytes" << std::endl << std::endl;;
//}

//Exercise 4.29: Predict the output of the following code and explain your
//reasoning.Now run the program.Is the output what you expected ? If not,
//figure out why.

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int x[10]; int* p = x;
//    cout << sizeof(x) << endl; // 40
//    cout << sizeof(*x) << endl; // 4
//    cout << sizeof(x)/sizeof(*x) << endl; // 10
//
//    cout << sizeof(p) << endl; // 4
//    cout << sizeof(*p) << endl; // 4
//    cout << sizeof(p)/sizeof(*p) << endl; // 1
//
//    return 0;
//}


