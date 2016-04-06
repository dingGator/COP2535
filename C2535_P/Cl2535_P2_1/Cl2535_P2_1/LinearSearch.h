//Kim Lien Chu
//COP2535.0M1
#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H
/*************************************
*LinearSearch:
--that uses the linear search program to locate the value.
--& keep a count of	the number of comparisons it makes until it finds the value.
***************************************/
class LinearSearch
{
private:
	// variables 
	int index;
	int position;
	bool found;
public:

	LinearSearch();  // constructor
	int linearSearchArray(int[], int, int);
	~LinearSearch(){};
};
#endif