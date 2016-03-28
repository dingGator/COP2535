//Kim Lien Chu
//COP2535.0M1
#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H
/*************************************
class Binary Search
--that uses the binary search algorithm to locate the same value.
*	--& keep count of the numbers of comparisons it makes.
***************************************/
class BinarySearch
{
private:
	int first;
	int last;
	int middle;
//	int position;
	bool found;
	int count;
public:

	BinarySearch();  // constructor
	
	int binarySearchArray(int[], int, int);
	//prototypes
	~BinarySearch(){};


};
#endif