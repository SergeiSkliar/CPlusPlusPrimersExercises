#include <iostream>
#include "golf.h"

int main() {
	golf ann("Ann Birdfree", 24);
	golf andy;


	ann.showgolf();
	andy.showgolf();

	ann.new_handicap(30);
	ann.showgolf();
}