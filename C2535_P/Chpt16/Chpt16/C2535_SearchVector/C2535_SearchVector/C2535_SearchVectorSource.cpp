#include <iostream>
#include "searchvect.h"

using namespace std;

int main()
{
	const int SIZE = 10;
	SearchableVector<int> intTable(SIZE);
	SearchableVector<double> doubleTable(SIZE);
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x] = (x * 2);
		doubleTable[x] = (x*2.14);
	}
	
	cout << " in intTable:  \n";
	for (int x = 0; x < SIZE; x++)
	{
		cout<< intTable[x]<<  "  ";
	}

	cout << endl;
	cout << " in doubleTable:  \n";
	for (int x = 0; x < SIZE; x++)
	{
		cout << doubleTable[x] << "  ";
	}
	cout << endl;

	int result;
	cout << "search intTable   ";
	result = intTable.findItem(6);
	if (result == -1)
	{
		cout << " not found  ";
	}
	else
		cout << "  found  ";


	result = doubleTable.findItem(12.84);
	if (result == -1)
	{
		cout << " not found  ";
	}
	else
		cout << "  found  ";

	return 0;
}