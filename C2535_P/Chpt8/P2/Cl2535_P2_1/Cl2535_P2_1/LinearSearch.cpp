//Kim Lien Chu
//COP2535.0M1
#include "LinearSearch.h"
LinearSearch::LinearSearch()
{
	index = 0;
	position = -1;
	bool found = false;
}
/***************************
*linearSearchArray
--that uses the linear search program to locate:	 value 
--& keep a count of	the number of comparisons it makes until it finds the value:
			--position
**********************************/

int LinearSearch::linearSearchArray(int array4[], int size, int value)
{	
	
	while ((index < size) || (!found))
	{
		if (array4[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}
