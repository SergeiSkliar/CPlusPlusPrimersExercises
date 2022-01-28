#pragma once

const int LIST_SIZE = 4;

class List {
private:
	struct Node {
		int x;
		Node* next;
	};
	Node* head;
	Node* tail;
	int items;
	const int listsize;
public:
	List(int size = LIST_SIZE);
	~List();

	bool isEmpty() const;
	bool isFull() const;
	bool pushValue(const int val);
	void visit(void (*pf)(int & val));
};