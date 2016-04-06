#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Chpt 16 RQ 11 
template <class T>
void reverse(T arr[], int size)
{
	if (size >= 2)
	{
		swap(arr[0], arr[size - 1]);
		reverse(arr + 1, size - 2);
	}
}
template <class T>
T square(T number)
{
	return (number*number);
}

template <class T1, class T2>
T1 sum(T1 x, T2 y)
{
	return (x + y);
}

template <class T3>
int add(int number1, int number2, T3 number3)
{
	return (number1 + number2 + number3);
}
double division(int, int);
int main()
{	// Chpt 16 RQ 11 
	int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "  int    array  ";

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	reverse(arr, 10);
	cout << "  reverse  array  ";
	for (int i = 0; i < 10;i++)
	{
		cout<< arr[i]<< "  ";
	}
	cout << endl;
	// RQ  14

	char arr2[10]{'1', '2', '3', '4', '5', '6', '7', '8', '9'};

	cout << "  char  array  ";

	for (int i = 0; i < 10; i++)
	{
		cout << arr2[i] << "  ";
	}
	cout << endl;

	reverse(arr2, 10);
	cout << "  reverse  array  ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr2[i] << "  ";
	}
	cout << endl;

	// RQ 15A
	int num1 = 10;
	int num2 = 2;
	double quotient = 0;
	try 
	{
		quotient = division(num1, num2);
		{
			cout << " the quotient is " << quotient << endl;
		};
	}
	catch (string exceptionString)
	{
		cout << exceptionString;
	}
	//RQ 15B
	try
	{
		quotient = division(num1, num2);
		{
			cout << " the quotient is " << quotient << endl;
		};
	}
	
	//cout << " the quotient is " << quotient << endl;
	

	catch (string exceptionString)
	{
		cout << exceptionString;
	}
	//RQ 15C
	cout<< " square  " << square(num1)<<endl;
	//RQ 15D
	int num3 = 6;
	cout << " add  " << add(num1, num2, num3) << endl;

	//RQ 15E
	cout << " sum  " << sum(num1,num2) << endl;
	
	//RQ 15 F
	//SimpleVector <int> array(25);
	//RQ 15 G
	//cout << valueSet<int>[2] << endl;

	//cout << valueSet[2] << endl;

	return 0;
}

double division(int num1, int num2)
{
	return (num1 / num2);
}