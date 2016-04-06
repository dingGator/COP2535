//Kim Lien Chu
//COP2535.0M1
#ifndef GETINFILE_H
#define GETINFILE_H


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
class GetInFile
{
private:
	

public:
	GetInFile(){};     // default constructor

	void getInputFile(vector<double> &, vector<string> &);
	~GetInFile(){};		// destructor


};

#endif
