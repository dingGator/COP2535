#include <iostream>
#include <string>
using namespace std;

double divide(double, double);

int main()
{
	int num1, num2;
	double quotient;
	cout << "enter 2 numbers   ";
	cin >> num1 >> num2;
	try
	{
		quotient = divide(num1, num2);
		cout << " the quot  is " << quotient << endl;
	}
	catch (string exceptionString)
	{
		cout << exceptionString;
	}
	cout << "  end of program    " << endl;
	return 0;
}
double divide(double numerator, double denominator)
{
	if (denominator == 0)
		throw string("Error : cannot divide by zero  \n");
	else
		return numerator / denominator;
}