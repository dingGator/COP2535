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

//#include "ForTesting.h"

#include "LoadArray.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "BinarySearch.h"
#include "LinearSearch.h"
#include "DisplayReport.h"
using namespace std;

int main()
{
	/**********************************************
	*Create two arrays where each will hold 200 integer values.
	*************************************************/
	const int FILE_SIZE = 200;
	int randomData1[FILE_SIZE] = { 0 };
	int randomData2[FILE_SIZE] = { 0 };
	int value = 869;
	
	
	LoadArray loadArray1;
	BubbleSort bubbleSort1;
	SelectionSort selectSort;
	BinarySearch binarySearch;
	LinearSearch linearSearch;
	DisplayReport displayReport;
	int bubbleExchangeCount = 0;
	int selectionExchangeCount = 0;
	int linearSearchCount = 0;
	int binarySearchCount = 0;
	int arraySize = 0;

/*********************************************		
*	Bring in and load		random.txt		file into two arrays
*	Each array will hold the contents of a file(random.txt)
*	of 200 integer values.
*************************************************/

	loadArray1.loadTwoArray(randomData1, randomData2, FILE_SIZE);  //load from file

	
/******************************************************	
*Using the two arrays, 
*call a function:
*	--that uses the bubble sort algorithm to sort one of the arrays in ascending order.
*	--& counts the number of exchanges it makes.
*******************************************************************/
		
	bubbleExchangeCount = bubbleSort1.bubbleSortArray(randomData1, FILE_SIZE);

	
/********************************************************
Call a function:
*--that uses the selection sort algorithm to sort the other array.
*--& counts the number of exchanges it makes.
*******************************************************/
		selectionExchangeCount = selectSort.selectSortArray(randomData2, FILE_SIZE);
		
	
/**************************************************
		*Display number of Exchanges for:
		--Bubble Sort
		--Selection Sort
***********************************************************/

		displayReport.displayRepHeader();
		displayReport.displaySortRep(bubbleExchangeCount, selectionExchangeCount);


/***********************************************************
*Call a function :
		--that uses the linear search algorithm to locate the value 869.
			--& keep a count of	the number of comparisons it makes until it finds the value.
			*Call a function :
		--that uses the binary search algorithm to locate the same value.
			*	--& keep count of the numbers of comparisons it makes.
******************************************************************/

		linearSearchCount = linearSearch.linearSearchArray(randomData1, FILE_SIZE, value);
		binarySearchCount = binarySearch.binarySearchArray(randomData2, FILE_SIZE, value);


/**************************************************
*Display number of Exchanges for:
		--Linear Search
		--Binary Search
***********************************************************/

		displayReport.displaySearchRep(linearSearchCount,binarySearchCount);

	return 0;
}

