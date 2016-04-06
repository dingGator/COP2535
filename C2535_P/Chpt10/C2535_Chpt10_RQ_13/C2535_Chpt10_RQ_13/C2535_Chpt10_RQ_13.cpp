#include <iostream>
using namespace std;

void change(int *);
void exchange(int *p, int *q);
int main()
{	//RQ 13
	int x = 7;
	int *iptr = &x;
	cout << endl << endl;
	cout << "\n      *iptr  " << *iptr << endl;
	cout << "\n     iptr    " << iptr << endl;

	//RQ 17
	int numbers[] = { 2, 4, 6, 8, 10 };
	cout << "\n    *(numbers + 3)   " << *(numbers + 3) << endl;
	cout << "********************************" << endl;
	//RQ 23 
	const int *p1;
	int hi = 3;
	p1 = &hi;
	cout << "\n   int hi = 3;  " << endl;
	cout << "   p1= &hi;    " << endl;
	cout << "  *p1  " << *p1 << endl;
	cout << "  p1   " << p1 << endl;
	cout << "********************************" << endl;
	//RQ 25
	int i = 10;
	change(&i);
	
	//RQ 27
	int ten = 10;
	int ele = 11;
	exchange(&ten, &ele);

	//RQ 29

	int a[5] = { 0, 10, 20, 30, 40 };
	int k = 3;
	int *p = a + 1;
	cout << "********************************" << endl;
	cout << "\n\n  	int a[5] = { 0, 10, 20, 30, 40 }; "<<endl;
	cout << "     int k = 3;  int *p = a + 1;  "<<endl;
	cout << endl << endl;
	//29A
	cout << "  a[k]       " << a[k] << endl;

	//29B
	cout << "  *(a + k)   " << *(a + k) << endl;

	//29C
	cout << "  *a         " << *a << endl;

	//29D

	cout << "  a[*a]      " << a[*a] << endl;

	//29E
	cout << "  a[*a + 2]  " << a[*a + 2] << endl;

	//29F

	cout << "  *p         " << *p << endl;
	
	//29G

	cout << "  p[0]       " << p[0] << endl;

	//29H
	cout << "  p[1]       " << p[1] << endl;


	return 0;
	
}
void change(int *p)
{
	*p = 20;
	cout << "*************change *******************" << endl;
	cout << "    *p   " << *p << endl;
	cout << "********************************" << endl;
}

void exchange(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
	cout << "*************exchange*******************" << endl;
	cout << "  *p   " << *p << endl;
	cout << "  *q   " << *q << endl;
	cout << "********************************" << endl;
}

/*  output



*iptr  7
iptr    004FFA94

*(numbers + 3)   8

int hi = 3;
p1= &hi;
*p1  3
p1   004FFA54
*p   20
*p   11
*q   10


int a[5] = { 0, 10, 20, 30, 40 };
int k = 3;  int *p = a + 1;


a[k]   30
*(a + k)   30
*a   0
a[*a]   0
a[*a + 2]  20
*p   10
p[0]   10
p[1]   20
Press any key to continue . . .
*/