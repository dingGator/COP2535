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

	string lExpr;
	string rExpr;
	char ch;
	string stringfix;
	
public:
	int total1;
	int total2;
	
	GetInFile(){};     // default constructor

	string getInputFile();
	string postfixExpr(istream & inputStream);
	//int calcExpr();
	~GetInFile(){};		// destructor


};

#endif
