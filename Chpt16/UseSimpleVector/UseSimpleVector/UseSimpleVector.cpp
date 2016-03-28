#include <iostream>
#include "SimpleVector.h"

using namespace std;

int main()
{
	const int SIZE = 10;
	SimpleVector<int>intTable(SIZE);
	SimpleVector<double>doubleTable(SIZE);
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x] = (x * 2);
		doubleTable[x] = (x*2.14);
	}

	cout << " in intTable:  \n";
	intTable.print();

	cout << " in doubleTable:  \n";
	doubleTable.print();

	return 0;
}
