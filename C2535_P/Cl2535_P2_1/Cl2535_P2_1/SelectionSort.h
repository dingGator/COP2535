//Kim Lien Chu
//COP2535.0M1

#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

/*************************************
Class SelectionSort
--that uses the selection sort algorithm to sort array.
--& counts the number of exchanges it makes.
***************************************/
class SelectionSort
{
private:
	// variables to keep scores
	int startScan;
	int minIndex;
	int minValue;
	int selectSortExCount;
	
public:
	SelectionSort();//constructor
	int selectSortArray(int [],int);
	//destructor
	~SelectionSort(){};

};
#endif