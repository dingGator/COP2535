//Kim Lien Chu
//COP2535.0M1
#include "SelectionSort.h"
SelectionSort::SelectionSort()//constructor
{
	startScan = minIndex = minValue = selectSortExCount = 0;
}
/***************************
*selectSortArray
--that uses the selection sort algorithm to sort array:
	array2[]
	size -- the size of array
--& counts the number of exchanges it makes:
		selectSortExCount----should be:   (size-1)  
*******************************/


int SelectionSort::selectSortArray(int array2[], int size)
{
	
	for (startScan = 0; startScan < (size-1); startScan++)
	{	
		minIndex = startScan;
		minValue = array2[startScan];
		for (int index = (startScan + 1); index < size; index++)
		{
			if (array2[index] < minValue)
			{
				minValue = array2[index];
				minIndex = index;
			}
		}
		array2[minIndex] = array2[startScan];
		array2[startScan] = minValue;
		
	}
	selectSortExCount = startScan;
	return selectSortExCount;
}
