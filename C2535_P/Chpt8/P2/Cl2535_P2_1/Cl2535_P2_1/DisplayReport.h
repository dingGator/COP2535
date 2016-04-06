//Kim Lien Chu
//COP2535.0M1
#ifndef DISPLAYREPORT_H
#define DISPLAYREPORT_H
/*************************************
Class DisplayReport
*Display number of Exchanges for:
--Bubble Sort
--Selection Sort
*Display number of Exchanges for:
--Linear Search
--Binary Search

***************************************/
class DisplayReport
{
	
public:

	DisplayReport(){};  // constructor
	//prototypes
	
	void displayRepHeader();
	void displaySortRep(int,int);
	void displaySearchRep(int, int);
	
	//destructor
	~DisplayReport(){};


};
#endif

