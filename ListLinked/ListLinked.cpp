#include <iostream>
using namespace std;
#include "List.h"


int main()
{

	List L;
	L.InsertFirst(100);
	L.InsertFirst(95);
	L.InsertLast(1);
	L.InsertFirst(88);
	L.InsertFirst(20);
	L.InsertLast(2);
	L.sortList();

	cout << L.Size();
	if (L.isEmpty()) {
		cout << "empty";
	}
	else
	{
		cout << " \n not empty  \n";
	}
	L.Display();
}

