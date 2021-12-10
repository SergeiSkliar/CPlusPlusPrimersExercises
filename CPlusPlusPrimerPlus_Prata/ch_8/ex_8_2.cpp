#include<iostream>
#include<cstring>

struct CandyBar {
	std::string name = "Millennium Munch";
	double weight = 2.85;
	int calories = 350;
};

void setCandyBar(CandyBar &, const char *, double, int);
void printCandyBar(const CandyBar &);

int main() {
	CandyBar can{};
	printCandyBar(can);
	setCandyBar(can, "Bounty", 2.5, 300);
	printCandyBar(can);
}

void setCandyBar(CandyBar& candy, const char* candy_name, double candy_weight, int candy_cal) {
	candy.name = candy_name;
	//strcpy(candy.name, candy_name);
	candy.weight = candy_weight;
	candy.calories = candy_cal;
}

void printCandyBar(const CandyBar& candy) {
	std::cout << "Candy brand: " << candy.name << std::endl;
	std::cout << "Weight of candy: " << candy.weight << std::endl;
	std::cout << "Calories in candy: " << candy.calories << std::endl;
}