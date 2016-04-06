//Kim Lien Chu
//COP2000.0M01
/*  
*/
#include <iostream>
#include <string>

using namespace std;
class MinMax
{
private:
	static const int SIZE = 5;
	int input[SIZE];
	int min;
	int max;

public:
	//TO DO
	//move data to the class
	//compute to find the min and max
	//display
	MinMax();     //constructor
	void setInput(int n[]);
	void compute();
	void display();
	~MinMax();   //destructor

};
// /***************Mehod definition****************************/
MinMax::MinMax()
{
	for (int i = 0; i < SIZE; i++)
		input[i] = 0;
}

//populate the array
void MinMax::setInput(int n[])
{
	for (int j = 0; j < SIZE; j++)
		input[j] = n[j];
}
//find the min and max
void MinMax::compute()
{
	//set initial values to the first number in the array
	min = input[0];
	max = input[0];
	//loop thru the rest of the array
	for (int k = 1; k < SIZE; k++)
	{
		if (input[k] < min)
			min = input[k];
		if (input[k] > max)
			max = input[k];
	}
}

//display
void MinMax::display()
{
	cout << "Min value:" << min << endl;
	cout << "Max value:" << max << endl;
}
MinMax::~MinMax()
{
	cout << "destructor  ";
}
/***********************prototype*/
void getInput(int [], const int);
void validate(int&);
/******************/
int main()
{
	//variables
	const int SIZE1 = 5;
	int temp[SIZE1];

	MinMax minMaxObj;
	
	// get input from the user
	getInput(temp, SIZE1);
	//move scrubbed data to the class
	minMaxObj.setInput(temp);
	minMaxObj.compute();
	minMaxObj.display();

	return 0;
}

void getInput(int t[], const int SIZE)   // [] pass the entire array
{
	//prompt the user
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter an integer value:  ";
		cin >> t[i];
		validate(t[i]);   //pass only value
		                  // DO NOT pass an array as reference  
		                  // bcs if pass, then only pass pointer***  
	}
}

// validate input value


void validate(int& i)
{
	while (!cin)
	{
		cin.sync;
		cin.clear();
		cout << "Invalid";
		cin >> i;
	}
}

