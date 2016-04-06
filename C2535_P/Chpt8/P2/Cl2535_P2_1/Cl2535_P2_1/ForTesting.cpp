//Kim Lien Chu
//COP2535.0M1
#include <iostream>

#include "ForTesting.h"
using namespace std;
/****************
   ***** Show first 10 elements  of array
**************/

void ForTesting::showArray(int showArray1[])
{
	cout << "     array"<< endl;
	for (int count = 0; count < 10; count++)
	{
		cout << "     " << showArray1[count] << "   " << count << endl;
	};
		cout << endl;
}


