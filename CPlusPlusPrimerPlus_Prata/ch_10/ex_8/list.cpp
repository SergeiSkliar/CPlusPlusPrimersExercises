#include"list.h"
#include<iostream>
#include <iterator>

List::List()
{
	head = nullptr;
}

List::~List()
{
	Node* next = head;
	while (next) {
		Node* deletion = next;
		next = next->next; // save pointer to the next element
		delete deletion; // delete current node
	}
}

bool List::isEmpty()
{
	return (head == NULL);
}

void List::pushValue(int val)
{
	Node* n = new Node();
	n->x = val; //set new value
	n->next = head; // make n point to the next node

	head = n; // head points to new node
}

int List::popValue()
{
	Node* n = head;

	int pop = n->x;
	head = head->next;
	delete n;
	return pop;
}

void List::visit(int i)
{
	Node* visited = head;
	for (int i = 0; i < i; ++i) {
		++visited;
	}
}
