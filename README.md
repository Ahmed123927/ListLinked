<h1>Linked List Implementation in C++</h1>
This repository contains an implementation of a linked list data structure in C++ that includes the following functions: InsertFirst, InsertBefore, InsertLast, DeleteItem, Display, Size, search, and sortList. A linked list is a data structure that consists of a sequence of nodes, where each node contains a value and a pointer to the next node in the sequence.

<h2>Usage</h2>
To use the linked list implementation, follow these steps:

1-Clone the repository or download the source code. <br>
2-Include the header file List.h in your C++ code.<br>
3-Create a linked list object by calling the List constructor.<br>
4-Use the InsertFirst, InsertBefore, InsertLast, DeleteItem, Display, Size, search, and sortList methods to manipulate the linked list.<br>

Here's an example of how to use the linked list implementation:<br>
```
#include "List.h"
#include <iostream>

int main()
{
    // Create a linked list object
    List list;

    // Insert some values into the list
    list.InsertFirst(1);
    list.InsertLast(2);
    list.InsertBefore(2, 3);

    // Print the list
    list.Display(); // Output: 1 3 2

    // Remove a value from the list
    list.DeleteItem(3);

    // Print the list again
    list.Display(); // Output: 1 2

    return 0;
}
```
<h2>Methods</h2>
The linked list implementation provides the following methods:
<ul>
<li>List(): Constructor that creates an empty linked list.</li>
<li>bool isEmpty(): Returns true if the list is empty, false otherwise.</li>
<li>void InsertFirst(int Value): Inserts a new node with the given value at the beginning of the list.<br>
<li>void InsertBefore(int item, int value): Inserts a new node with the given value before the node containing the specified item value.<br>
<li>void InsertLast(int value): Inserts a new node with the given value at the end of the list<br>
<li>void DeleteItem(int value): Removes the first node with the given value from the list.<br>
<li>void Display(): Prints the values of all nodes in the list.<br>
<li>int Size(): Returns the number of nodes in the list.<br>
<li>bool search(int key): Returns true if a node with the given key value is found in the list, false otherwise.<br>
<li>void sortList(): Sorts the list in ascending order.<br>
	</ul>
