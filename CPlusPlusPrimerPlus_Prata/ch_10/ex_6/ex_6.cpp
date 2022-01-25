#include<iostream>
#include"move.h"

int main() {
	Move newMove;
	newMove.showmove();

	newMove.reset(20.3, 25.0);
	newMove.showmove();

	Move secondMove(15.0, 12.1);
	Move thirdMove = newMove.add(secondMove);
	thirdMove.showmove();
}

