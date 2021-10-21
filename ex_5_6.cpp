//	Exercise 5.6: Rewrite your grading program to use the conditional operator
//	(§ 4.7, p. 151) in place of the if–else statement.
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//int main() {
//	std::vector<std::string> scores = { "F", "D", "C", "B", "A", "A++" };
//	std::string lettergrade;
//	int grade;
//	while (std::cin >> grade) {
//		if (grade < 60) {
//			lettergrade = scores[0];
//		}
//		else {
//			lettergrade = scores[(grade - 50) / 10];
//			if (grade != 100) {
//				lettergrade += (grade % 10 > 7 ? "+" : (grade % 10 < 3 ? "-" : ""));
//			}
//		}
//		std::cout << lettergrade << std::endl;
//	}
//}