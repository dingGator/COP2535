#include<iostream>
using namespace std;
int main()
{
	int x = 50, y = 60, z = 70;
	int *ptr;
	cout << x << " " << y <<" " << z << endl;
	ptr = &x;
	*ptr += 10;
	ptr = &y;
	*ptr *= 5;
	ptr = &z;
	*ptr *= 2;
	cout << x << " " << y << " " << z << endl;
	int array[100] = { 10 };
	for (int x2 = 0; x2 < 10; x2++)
		cout << "no ptr  " << array[x2] << endl;

	for (int x3 = 0; x3 < 10; x3++)
		cout << " pointer  "<<*(array + x3) << endl;

	int *pint;
	
	int xA = 5;
	pint = &xA;
	cout << " pint++  " << pint++ << endl;
	cout << " --pint " << --pint << endl;
	//cout << " pint/= 2  " << pint /= 2 << endl;
	//cout << " pint*= 4  " << pint *= 4 << endl;
	cout << " xA  s1   " << xA << endl;

	*pint += xA;
	cout << " xA  s2   " << xA << endl;

	cout << " pint+= xA s3 " << (*pint += xA) << endl;

	cout << " xA  s4   " << xA << endl;
	cout << " pint+= xA  s5  " << (*pint += xA) << endl;
	cout << " xA  s6   " << xA << endl;

	pint += xA;
	cout << " pint p1 " << pint << endl;
	cout << " xA  s7   " << xA << endl;

	cout << " pint+= xA  s8  " << (pint += xA) << endl;
	/*
	
	*/

	int ivar;
	int *iptr = &ivar;

	int ivar, *iptr = &ivar;

	float fvar;
	float *fptr = &fvar;

	int nums[50], *iptr = nums;

	int *iptr = &ivar;
	int ivar;

	return 0;
}
/*

50 60 70
60 300 140
no ptr  10
no ptr  0
no ptr  0
no ptr  0
no ptr  0
no ptr  0
no ptr  0
no ptr  0
no ptr  0
no ptr  0
 pointer  10
 pointer  0
 pointer  0
 pointer  0
 pointer  0
 pointer  0
 pointer  0
 pointer  0
 pointer  0
 pointer  0
 pint++  0018F844
 --pint 0018F844
 xA  s1   5
 xA  s2   10
 pint+= xA s3 20
 xA  s4   20
 pint+= xA  s5  40
 xA  s6   40
 xA  s7   40
 pint+= xA  s8  0018F984
Press any key to continue . . .
*/