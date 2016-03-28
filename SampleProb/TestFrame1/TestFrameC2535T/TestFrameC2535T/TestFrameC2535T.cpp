//Kim Lien Chu
//COP2535.0M1
/*******************************************
This program
*Create two arrays where each will hold 200 integer values.
*	Bring in and load random.txt file into two arrays
*Using the two arrays, Call a function:
--that uses the bubble sort algorithm to sort one of the arrays in ascending order.
*	--& counts the number of exchanges it makes.
*Call a function: that uses the selection sort algorithmto sort the other array.
--& counts the number of exchanges it makes.
Display exhanges values.
*Call a function: that uses the linear search program to locate the value 869.
--& keep a count of	the number of comparisons it makes until it finds the value.
*Call a function: that uses the binary search algorithm to locate the same value.
*	--& keep count of the numbers of comparisons it makes.
*Display comparison count it makes.
*********************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;
void display(const int numbers[], const int SIZE, int min, int max);
int setMin(int n);
int setMax(int n);
void getInput(int numbers[], const int SIZE);
void compare(const int numbers[], const int SIZE, int& min, int& max);
void validate(int& num);


int main()
{
	cout << "*****************************" << endl;

	int values[5] = { 0, 1, 2, 3, 4 };

	int x = 0;
	cout << "int values[5] = { 0, 1, 2, 3, 4 };" << endl;

	cout << "\n  values[x]		" << values[x];
	cout << "\n  values[x++]	" << values[x++] << "  x=  " << x;
	cout << "\n  values[++x]	" << values[++x] << "  x=  " << x;
	cout << "\n  values[0]		" << values[0];
	cout << "\n  ++values[0]	" << ++values[0];
	cout << "\n  values[0]++	" << values[0]++ << endl;
	cout << "*****************************" << endl;
	//variables
	int studentHeight1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "int studentHeight1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };" << endl;
	const int SIZE = 5;
	int numbers[SIZE];			//5 values stored in the array

	int min;
	int max;

	//get input values from the user
	getInput(numbers, SIZE);

	//set min and max to the first value in the array
	min = setMin(numbers[0]);
	max = setMax(numbers[0]);

	//compare to find min and max
	compare(numbers, SIZE, min, max);

	//display the output
	display(numbers, SIZE, min, max);
	cout << "*****************************" << endl;

	//variables 
	int studentHeight2[10];
	//prompt the user for data 
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a height: " << endl;
		//cin >> studentHeight[i];
		studentHeight2[i] = studentHeight1[i];
	}
	//display the values 
	cout << endl << endl;
	for (int j = 0; j < 10; j++) {
		cout << "Height of element [" << j << "] is: " << studentHeight2[j]
			<< endl;
	}
	cout << "*****************************" << endl;
	int numbersT[] = { 99, 87, 66, 55, 101 };
	for (int i = 1; i < 4; i++)
		cout << numbersT[i] << endl;


	return 0;
}
void getInput(int numbers[], const int SIZE)
{
	int studentHeight1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "in getInput :int studentHeight1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter a number: " << endl;
		//cin >> numbers[i];
		numbers[i] = studentHeight1[i];
		validate(numbers[i]);
	}
}

void validate(int& num)
{
	while (!cin)
	{
		cin.sync();
		cin.clear();
		cout << "Invalid input, try again: ";
		cin >> num;
	}
}

int setMin(int n)
{
	return n;
}

int setMax(int n)
{
	return n;
}

void compare(const int numbers[], const int SIZE, int& min, int& max)
{
	for (int i = 1; i < SIZE; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];

		if (numbers[i] > max)
			max = numbers[i];
	}
}

void display(const int numbers[], const int SIZE, int min, int max)
{
	cout << endl << endl;
	cout << "For the contents of the array numbers: " << endl;

	//display the contents of the array
	for (int i = 0; i < SIZE; i++)
	{
		cout << "numbers[" << i << "] = " << numbers[i] << endl;
	}

	cout << endl;
	cout << "The minimum value is : " << min << endl;
	cout << "The maximum value is : " << max << endl << endl;

}




