#pragma once

class List {
private:
	struct Node {
		int x;
		Node* next;
	};
	Node* head;
public:
	List();
	~List();

	bool isEmpty();
	void pushValue(int val);
	int popValue();
	void visit(int i);
};