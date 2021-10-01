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



