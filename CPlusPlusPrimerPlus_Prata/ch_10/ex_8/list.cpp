#include"list.h"
#include<iostream>
#include <iterator>

List::List(int size) : listsize(size)
{
	head = tail = nullptr;
	items = 0;
}

List::~List()
{
	Node* temp;
	while (head != nullptr) {
		temp = head;
		head = head->next; // save pointer to the next element
		delete temp; // delete current node
	}
}

bool List::isEmpty() const
{
	return (head == NULL);
}

bool List::isFull() const
{
	return items == listsize;
}

bool List::pushValue(const int val)
{
	if (isFull()) 
		return false;
	Node* temp = new Node;
	temp->x = val; //set new value
	temp->next = nullptr; // make n point to the next node
	++items;
	if (head == nullptr)
		head = temp;
	else
		tail->next = temp;
	tail = temp; // tail points to new node
	return true;
}

void List::visit(void(*pf)(int& val))
{
	for (size_t i = 0; i < items; i++)
	{
		(*pf)
	}
}


