//Kim Lien Chu
//COP2535.0M1
#ifndef GETINFILE_H
#define GETINFILE_H


#include <iostream>
#include <sstream>
#include <stack>
#include <string>


using namespace std;

/*******************************************
class GetInFile

* *********************************************************/
class GetInFile
{
private:


public:
	GetInFile(){};     // default constructor

	string getInputFile();
	string postfixExpr(istream & inputStream);
	int calcExpr(string);
	~GetInFile(){};		// destructor


};

#endif
