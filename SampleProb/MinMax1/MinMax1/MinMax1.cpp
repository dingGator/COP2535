//Debbie Reid 
//Array introduction 
//Find the min and max of an array of numbers

#include<iostream> 
using namespace std;
//prototypes go here 
void display(const int numbers[], const int SIZE, int min, int max);
int setMin(int n); 
int setMax(int n); 
void getInput(int numbers[], const int SIZE); 
void compare(const int numbers[], const int SIZE, int& min, int& max);
void validate(int& num);
int main() {
	//variables
	const int SIZE = 5; int numbers[SIZE];
	//5 values stored in the array
	int min; int max;
	//get input values from the user 
	getInput(numbers, SIZE);
	//set min and max to the first value in the array 
	min = setMin(numbers[0]); 
	max = setMax(numbers[0]);
	//compare to find min and max 
	compare(numbers, SIZE, min, max);
	//display the output 
	display(numbers, SIZE, min, max);
	return 0;
}
/********************Function Definitions**********************/ 
void getInput(int numbers[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++) 
	{
		cout << "Enter a number: "; 
		cin >> numbers[i];
		validate(numbers[i]);
	}
}
void validate(int& num) 
{
	while (!cin)
	{
		cin.sync(); cin.clear(); 
		cout << "Invalid input, try again: ";
		cin >> num;
	}
}
int setMin(int n) { return n; }
int setMax(int n) { return n; }
void compare(const int numbers[], const int SIZE, int& min, int& max)
{
	for (int i = 1; i < SIZE; i++) {
		if (numbers[i] < min) min = numbers[i];
		if (numbers[i] > max) max = numbers[i];
	}
}
void display(const int numbers[], const int SIZE, int min, int max) 
{
	cout << endl << endl; cout << "For the contents of the array numbers: " << endl;
	//display the contents of the array 
	for (int i = 0; i < SIZE; i++) 
	{ 
		cout << "numbers[" << i << "] = " << numbers[i] << endl; }
	cout << endl; cout << "The minimum value is : " << min << endl; 
	cout << "The maximum value is : " << max << endl << endl;
}

		