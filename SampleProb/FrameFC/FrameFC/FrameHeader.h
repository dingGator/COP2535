//Kim Lien Chu
//COP2535.0M1
#ifndef BUBBLESORT_H
#define BUBBLESORT_H
/*******************************************
* Class  BubbleSort:
*	--that uses the bubble sort algorithm to sort one of the arrays in ascending order.
*	--& counts the number of exchanges it makes.
*********************************/

class BubbleSort
{
private:
	int temp;
	bool swap;
	int bubbleSortExCount;

public:

	BubbleSort();  // constructor
	//prototypes

	int bubbleSortArray(int[], int);

	//destructor
	~BubbleSort(){};

};
#endif