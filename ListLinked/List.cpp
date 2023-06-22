#include "List.h"
#include <cstddef>
#include <iostream>
using namespace std;
List::List()
{
	first = NULL;
}

bool List::isEmpty()
{
	return (first == NULL);
}

void List::InsertFirst(int Value)
{
	Node* NewNode = new Node;
	NewNode->Data = Value;
	NewNode->next = NULL;

	if (!isEmpty()) {
		NewNode->next = first;
	}
	first = NewNode;

}

void List::InsertBefore(int item, int value)
{
	if (search(item)) {
		Node* NewNode = new Node;
		NewNode->Data = value;
		Node* temp = first;
		while (temp != NULL && temp->next->Data != item) {
			temp = temp->next;
		}

		NewNode->next = temp->next;
		temp->next = NewNode;
	}
	else
	{
		cout << "item not fount \n ";
	}
}

void List::InsertLast(int value)
{
	if (isEmpty()) {
		InsertFirst(value);
	}
	else {
		Node* NewNode = new Node;
		NewNode->Data = value;
		Node* temp = first;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		NewNode->next = NULL;

		temp->next = NewNode;
	}
}

void List::DeleteItem(int value)
{
	Node* deletePtr = first;
	Node* previous = NULL;

	if (isEmpty()) {
		cout << "ERROR: NO ITEM TO DELETE";
	}
	else if (first->Data == value)
	{
		first = first->next;
		delete deletePtr;
	}
	else
	{
		while (deletePtr != NULL && deletePtr->Data != value) {
			previous = deletePtr;
			deletePtr = deletePtr->next;
		}
		if (deletePtr != NULL) {
			previous->next = deletePtr->next;
			delete deletePtr;
		}
		else {
			cout << "ERROR: ITEM NOT FOUND";
		}
	}
}

void List::Display()
{
	Node* temp = first;
	while (temp != NULL)
	{
		cout << temp->Data << "\n";
		temp = temp->next;
	}
}

int List::Size()
{
	int count = 0;
	Node* temp;
	temp = first;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

bool List::search(int key)
{
	bool found = false;
	Node* temp;
	temp = first;
	while (temp != NULL)
	{
		if (temp->Data == key) {
			found = true;
		}
		temp = temp->next;
	}
	return found;
}

void List::sortList()
{
	Node* prev = NULL;
	bool swap = true;
	while (swap)
	{
		swap = false;
		Node* cur = first;

		while (cur->next != NULL)
		{
			int temp = 0;
			prev = cur;
			cur = cur->next;
			if (cur->Data < prev->Data) {
				temp = cur->Data;
				cur->Data = prev->Data;
				prev->Data = temp;
				swap = true;
			}
		}
	}
}

