#pragma once
#include "Node.h"
class List
{
public:
	Node* first;
	List();
	bool isEmpty();
	void InsertFirst(int Value);
	void InsertBefore(int item, int value);
	void InsertLast(int value);
	void DeleteItem(int value);
	void Display();
	int Size();
	bool search(int key);
	void sortList();

};
