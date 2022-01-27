#include "cow.h"
#include <iostream>

int main() {
	Cow cow("Peach", "Polo", 90);
	cow.ShowCow();
	Cow cow2 = cow;
	cow2.ShowCow();
	Cow cow3;
	cow3 = cow2;
	cow3.ShowCow();

}