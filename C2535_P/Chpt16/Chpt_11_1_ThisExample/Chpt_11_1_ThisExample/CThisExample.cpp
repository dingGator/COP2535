#include <iostream>
#include "ThisExample.h"
using namespace std;

int main()
{
	Example ob1(10), ob2(20);
	cout << "Address of objet are  "<< &ob1
		<< " and  " << &ob2 << endl;
	ob1.printAddressAndValue();
	ob2.printAddressAndValue();
	return 0;
}