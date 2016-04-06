//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include "DisplayReport.h"
using namespace std;

DisplayReport::DisplayReport()
{}

void DisplayReport::displayRepHeader()
{
	cout << "\n\n         Comparison of Bubble Sort and Selection Sort Exchanges Counts " << endl;
	cout << "              and Comparison of Binary Search and and Linear Search" << endl;
	cout << "                          ***********" << endl;
	cout << endl;

}
/**************************************************
*Display number of Exchanges for:
--Bubble Sort
--Selection Sort
***********************************************************/



void DisplayReport::displaySortRep(int bSortExCount,int selSortExCount)
{
	cout << " \n  The exchange for Bubble  sorts are: " <<  "   " << bSortExCount <<endl; 
	cout << " \n  The exchange for Selection sorts are: " <<  " " << selSortExCount<<endl;
	cout << "\n\n" << endl;
}
/**************************************************
*Display number of Exchanges for:
--Linear Search
--Binary Search
***********************************************************/

void DisplayReport::displaySearchRep(int lineSearchCount,int binSearchCount)
{
	cout << " \n  The count for Linear search are: " <<  "   " << lineSearchCount <<endl; 
	cout << " \n  The count for Binary search are: " << " " << binSearchCount<<endl; 
	cout << "\n\n" << endl;
}

