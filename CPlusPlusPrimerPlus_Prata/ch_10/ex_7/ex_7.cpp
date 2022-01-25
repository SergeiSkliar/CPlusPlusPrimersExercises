#include<iostream>
#include"plorg.h"

int main() {
	Plorg first;
	Plorg second("tatata");

	first.report();
	second.report();

	first.change_index(4);
	first.report();
	second.change_index(100);
	second.report();
}