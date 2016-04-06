//Kim Lien Chu
//COP2535.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include<cstring>
#include<cstdlib>
#include <vector>
#include <fstream>

#include "DisplayRep.h"

using namespace std;
/*******************************************
class GetInFile
1.  Use the file minmax.txt to populate the vectors.
a.  The file will contain 5 integer values
followed by five string values.
2.  Vectors are populated with file data
*******************************************/
void DisplayRep::displayHeader()
{
	cout << "\n        ************************************" << endl;
	cout << "\n         Maximum and Minimum Values Report       " << endl;
	cout << "\n        ************************************" << endl << endl;
}
void DisplayRep::displayMaxMin(double smallestDoub,
	double largestDoub,
	string smallestStr,
	string largestStr)


{
	cout << "\n        maximum number in file:   " << largestDoub << endl;
	cout << "\n        mininum number in file:   " << smallestDoub << endl;
	cout << "\n        maximum string in file:   " << largestStr << endl;
	cout << "\n        mininum string in file:   " << smallestStr << endl;

	cout << "\n\n            *******************" << endl << endl;
}
