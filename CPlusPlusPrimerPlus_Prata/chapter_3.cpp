#include <iostream>
#include <climits>

int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << sizeof(int) << endl;
	cout << sizeof n_int << endl;
	cout << sizeof n_short << endl;
	cout << sizeof n_long << endl;
	cout << sizeof n_llong << endl;

	cout << endl;
	cout << "Max Values:" << endl;
	cout << n_int << endl;
	cout << n_short << endl;
	cout << n_long << endl;
	cout << n_llong << endl;

	cout << INT_MIN << endl;
	cout << CHAR_BIT << endl;


}

#include <iostream>
#define ZERO 0 // makes ZERO symbol for 0 value
#include <climits> // defines INT_MAX as largest int value
int main()
{
	using namespace std;
	short sam = SHRT_MAX; // initialize a variable to max value
	unsigned short sue = sam;// okay if variable sam already defined
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		<< "Add $1 to each account." << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	return 0;
}

#include <iostream>
int main()
{
	using namespace std;
	int chest = 42; // decimal integer literal
	int waist = 0x42; // hexadecimal integer literal
	int inseam = 042; // octal integer literal
	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;
	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex; // manipulator for changing number base
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct; // manipulator for changing number base
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}

#include <iostream>
int main()
{
	using namespace std;
	char ch; // declare a char variable
	cout << "Enter a character: " << endl;
	cin >> ch;
	cout << "Hola! ";
	cout << "Thank you for the " << ch << " character." << endl;
	return 0;
}

#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M'; // assign ASCII code for M to ch
	int i = ch; // store same code in an int
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Add one to the character code:" << endl;
	ch = ch + 1; // change character code in ch
	i = ch; // save new character code in i
	cout << "The ASCII code for " << ch << " is " << i << endl;
	// using the cout.put() member function to display a char
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);
	// using cout.put() to display a char constant
	cout.put('!');
	cout << endl << "Done" << endl;
	return 0;
}

#include <iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";
	return 0;
}

#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	float tub = 10.0 / 3.0; // good to about 6 places
	double mint = 10.0 / 3.0; // good to about 15 places
	const float million = 1.0e6;
	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;
	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	cout << 10 * million * mint << endl;

	return 0;
}

#include <iostream>

int main()
{
	using namespace std;
	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << a << endl;
	cout << b-a << endl;
	double Double = 3.14;
}
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3; // int converted to float
	int guess(3.9832); // double converted to int
	int debt = 7.2E12; // result not defined in C++
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}

#include <typeinfo>
#include <iostream>

int main()
{
	using namespace std;
	int thorn = 20;
	cout << typeid((long long)thorn).name();
	//cout << long(thorn);
	auto crat = U'/U00002155';
	cout << typeid(crat).name() << endl;
	return 0;
}

/* 1. Write a short program that asks for your height in integer inches and then converts
your height to feet and inches. Have the program use the underscore character to
indicate where to type the response.Also use a const symbolic constant to represent the conversion factor.
I used metric system. */

/*#include <iostream>

int main() {
	int sm = 0;
	int sm_in_meters = 100;

	std::cout << "Enter your height in sm: ___\b\b\b";
	std::cin >> sm;

	std::cout << "your height is: " << sm / sm_in_meters << " m and " << sm % sm_in_meters << " sm.";


}*/

/*Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.*/

/*#include <iostream>

int main() {
	int feet = 0;
	double inch = 0;
	int weight = 0;

	std::cout << "Enter your height in feet: _\b";
	std::cin >> feet;
	std::cout << std::endl;
	std::cout << "inches: ___\b\b\b";
	std::cin >> inch;
	std::cout << std::endl;
	std::cout << "Your weight in pounds: ___\b\b\b";
	std::cin >> weight;

	double height = double(feet * 12 + inch);
	//std::cout << height;
	double height_metric = height * 0.0254;
	double weight_metric = weight / 2.2;
	double bmi = weight_metric / (height_metric * height_metric);
	std::cout << std::endl;
	std::cout << bmi;

}*/

/*Write a program that asks the user to enter a latitude in degrees, minutes, and seconds and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic constants.You should use a separate variable for each input value.A sample
run should look like this:
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees*/

/*#include <iostream>

using namespace std;

int main()
{
	int degrees = 0;
	double minutes = 0;
	int seconds = 0;

	std::cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	std::cout << "First, enter the degrees: __\b\b";
	std::cin >> degrees;
	std::cout << "Next, enter the minutes of arc: __\b\b";
	std::cin >> minutes;
	std::cout << "Finally, enter the seconds of arc: __\b\b";
	std::cin >> seconds;

	double degrees_converted = double(degrees + minutes / 60.0 + seconds / 3600.0);

	std::cout << degrees << " degrees, " << minutes << " minutes, "
		<< seconds << " seconds = " << degrees_converted << " degrees";

	return 0;
}*/

/*Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then displays the equivalent time in days, hours, minutes, and seconds. Use symbolic constants to represent
the number of hours in the day, the number of minutes in an hour, and the number
of seconds in a minute.The output should look like this:
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds*/


/*#include <iostream>

using namespace std;

int main()
{
	long long seconds = 0;
	int days, hours, minutes, sec;

	std::cout << "Enter the number of seconds: ";
	std::cin >> seconds;

	days = seconds / (24 * 3600);

	long long temp = seconds % (24 * 3600);
	hours = temp / 3600;

	temp %= 3600;
	minutes = temp / 60;

	temp %= 60;
	sec = temp;

	std::cout << seconds << " seconds =  " << days << " days, "
		<< hours << " hours, " << minutes << " minutes, " << sec << " seconds.";

	return 0;
}*/

/*Write a program that requests the user to enter the current world population and
the current population of the U.S. (or of some other nation of your choice). Store
the information in variables of type long long. Have the program display the percent that the U.S. (or other nation’s) population
is of the world’s population.
The output should look something like this:
Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.
You can use the Internet to get more recent figures.*/

/*#include <iostream>

int main()
{
	long long worldPopulation, USpopulation;
	cout.setf(ios_base::fixed, ios_base::floatfield);

	std::cout << "Enter the world's population: ";
	std::cin >> worldPopulation;
	std::cout << std::endl;
	std::cout << "Enter the population of the US: ";
	std::cin >> USpopulation;
	std::cout << std::endl;

	double percent = double(USpopulation / double(worldPopulation / 100));
	//long double percent = long double(USpopulation / worldPopulation * 100);
	//std::cout << one_percent;

	//double percent = USpopulation / one_percent;

	std::cout << "The population of the US is " << percent << "% of the world population.";

	return 0;
}*/

/*Write a program that asks how many miles you have driven and how many gallons
of gasoline you have used and then reports the miles per gallon your car has gotten.
Or, if you prefer, the program can request distance in kilometers and petrol in liters
and then report the result European style, in liters per 100 kilometers.*/

/*#include <iostream>

int main()
{
	double miles, gallons;

	std::cout << "Enter total miles: ";
	std::cin >> miles;
	std::cout << std::endl;

	std::cout << "Enter total gallons: ";
	std::cin >> gallons;
	std::cout << std::endl;

	std::cout << "gallons per miles = " << miles / gallons << " mpg" << std::endl;

	return 0;
}*/

/*Write a program that asks you to enter an automobile gasoline consumption figure
in the European style (liters per 100 kilometers) and converts to the U.S. style of
miles per gallon. Note that in addition to using different units of measurement, the
U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance). 
Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19 mpg is about 12.4 l/100 km, 
and 27 mpg is about 8.7 l/100 km.*/

/*#include <iostream>

int main()
{
	double liters_per_100_kilometers;

	std::cout << "Enter liters per 100 kilometers: ";
	std::cin >> liters_per_100_kilometers;
	std::cout << std::endl;

	double kilometers_per_liter = 100 / liters_per_100_kilometers;
	double mpg = (100 / liters_per_100_kilometers ) * 3.875 / 1.609;

	std::cout << mpg;

	return 0;
}*/