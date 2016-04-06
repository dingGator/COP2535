//Kim Lien Chu
//COP2535.0M1
//Project 4
/******************************************
Project 4
Program:
1.  Use the file minmax.txt to populate the vectors.
a.  The file will contain 5 integer values
followed by five string values.

2.  Uses these two functions:

T min (vector <T> v)
T max (vector <T> v)

a.  functions
1.  accepts a vector v that is passed to it
a.  Vectors are populated with file data
2.  returns the min and max value of all items in the vector v
a.  call the min function and the max function
for the integer vector.
b.  Then call the min function and the max function
for the string vector.
3.  Display the results of the min and max function calls.

*******************************************/
#include <iostream>
#include <vector>
#include "GetInFile.h"
#include "DisplayRep.h"
//#include "SimpleVector.h"
using namespace std;
/*******************************************

two functions :

T min(vector <T> v)   give min value
T max(vector <T> v)   give max value

1.  accepts a vector v that is passed to it
a.  Vectors are populated with file data
2.  returns the min and max value of all items in the vector v

******************************************
*/
template <class T>
T min(vector<T> arr)
{
	T smallest = arr[0];
	for (int count = 1; count < arr.size(); count++)
	{
		if (arr[count] < smallest)
		{
			smallest = arr[count];
		}
	}
	return smallest;
}

template <class T>
T max(vector<T> arr)
{
	T largest = arr[0];
	for (int count = 1; count < arr.size(); count++)
	{
		if (arr[count] > largest)
		{
			largest = arr[count];
		}
	}

	return largest;
}

int main()
{
	double smallestDoub;
	double largestDoub;
	string smallestStr;
	string largestStr;

	vector<double>doubleTable;
	vector<string>strTable;
	/******************************************
	GetInFile
	Use the file minmax.txt to populate the vectors.
	******************************************/

	GetInFile inputFile;
	inputFile.getInputFile(doubleTable, strTable);
	/****************************
	a.  call the min function and the max function
	for the integer vector.
	b.  call the min function and the max function
	for the string vector.
	********************************/
	smallestDoub = min(doubleTable);
	largestDoub = max(doubleTable);

	smallestStr = min(strTable);
	largestStr = max(strTable);

	/**************************************
	Display the results of the min and max function calls.
	****************************/
	DisplayRep repDisp;
	repDisp.displayHeader();
	repDisp.displayMaxMin(smallestDoub,
		largestDoub,
		smallestStr,
		largestStr);
	return 0;
}
