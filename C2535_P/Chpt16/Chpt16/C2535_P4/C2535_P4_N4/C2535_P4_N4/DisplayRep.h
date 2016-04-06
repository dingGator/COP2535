//Kim Lien Chu
//COP2535.0M1
#ifndef DISPLAYREP_H
#define DISPLAYREP_H


#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

/*******************************************
class GetInFile
1.  Use the file minmax.txt to populate the vectors.
a.The file will contain 5 integer values
followed by five string values.
2.  Vectors are populated with file data

* *********************************************************/
class DisplayRep
{
private:


public:
	DisplayRep(){};     // default constructor

	void displayHeader();
	void displayMaxMin(double, double, string, string);
	~DisplayRep(){};		// destructor


};

#endif
