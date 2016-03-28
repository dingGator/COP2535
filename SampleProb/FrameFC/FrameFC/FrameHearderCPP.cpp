//Kim Lien Chu
//COP2535.0M1

#include "BubbleSort.h"
using namespace std;
BubbleSort::BubbleSort()  //constructor
{

	swap = false;
	bubbleSortExCount = 0;

}
/***************************
*  BubbleSortArray
*	--that uses the bubble sort algorithm to sort the array in ascending order.
array1 :  array to be sorted
size:  the size of the array
*	--& counts the number of exchanges it makes:	bubbleSortCount
**********************************/

int BubbleSort::bubbleSortArray(int array1[], int size)
{
	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array1[count] > array1[count + 1])
			{

				temp = array1[count];
				array1[count] = array1[count + 1];
				array1[count + 1] = temp;
				swap = true;

				bubbleSortExCount++;

			}

		}

	} while (swap);
	return bubbleSortExCount;

}