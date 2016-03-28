#include <iostream>
#include <iomanip>
using namespace std;


void makeNegative(int *);
void convert(double *);
void processArray(const int *, int);

int main()
{	//10.9
	//A
	int array1[10];
	cout << "\n\n  (array1 < &array1[1]) ";
	if (array1 < &array1[1])
	{
		cout << " True" << endl;
	}
	else
	{
		cout << " False" << endl;
	}

	//B
	int array2[10];
	cout << "\n\n  (&array2[4] < &array2[1])  ";
	if (&array2[4] < &array2[1])
	{
		cout << " True" << endl;
	}
	else
	{
		cout << " False" << endl;
	}

	//C
	int array3[10];
	cout << "  (array3 != &array3[2])  ";
	if (array3 != &array3[2])
	{
		cout << " True" << endl;
	}
	else
	{
		cout << " False" << endl;
	}
	//D
	int array4[10];
	cout << "  (array4 != &array4[0])  ";
	if (array4 != &array4[0])
	{
		cout << " True" << endl;
	}
	else
	{
		cout << " False" << endl;
	}
	//10.10
	int num = 7;
	makeNegative(&num);
	cout << "\n\n    makeNegative(&num);   " << num << endl;

	//10.11
	double measurement;
	cout << "Enter a length, convert to centimeter: 3.5;   ";
	//cin >> measurement;
	measurement = 3.5;

	convert(&measurement);
	cout << setprecision(4);
	cout << fixed << showpoint;
	cout << " value in centimeter:  " << measurement << endl;

	//10.12
	const int SIZE = 4;
	const int numbers[SIZE] = {18, 17, 12, 14};
	processArray(numbers, SIZE);

	//10.13
	int *ip;
	ip = new int;
	delete ip;

	//10.14
	int *ip14;
	ip14 = new int[500];
	delete[] ip14;

	//10.15

	return 0;
}
//10.10
void makeNegative(int *val)
{
	if (*val > 0)
	{
		*val = -(*val);
	}
}
//10.11
void convert(double *meas)
{	
	*meas += 2.54;
}
//10.12
void processArray(const int *array12, int size)
{
	cout << " inside processArray  " << endl;
}

// 10.16
char *getname(char *name)
{
	cout << "enter your name:  ";
	cin.getline(name, 81);
	return name;
}
/*(array1 < &array1[1])  True
(&array2[4] < &array2[1])   False
(array3 != &array3[2])   True
(array4 != &array4[0])   False

Enter a length, convert to centimeter: 3.5;    value in centimeter:  6.0400

inside processArray


Press any key to continue . . .
*/