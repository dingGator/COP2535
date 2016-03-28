//Kim Lien Chu
//COP2535.0M1
#include "BinarySearch.h"
BinarySearch::BinarySearch()
{
	first = 0;
	count = 0;
	middle = 0;
//	position = -1;
	found = false;
}
/***************************
*BinarySearch
--that uses the binary search algorithm to locate the value.
*	--& keep count of the numbers of comparisons it makes:	count
**********************************/

int BinarySearch::binarySearchArray(int array3[], int arraySize, int value)
{
	last = arraySize - 1;
	while ((!found) && (first <= last))
	{
		middle = (first + last) / 2;
		if (array3[middle] == value)
		{
			found = true;
//			position = middle;
			count++;

		}
		else if (array3[middle] > value)
		{
			last = middle - 1;
			count++;
		}
		else
		{
			first = middle + 1;
			count++;
		}
	}
	return count;
}
