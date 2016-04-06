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
	uses a single stack
	read postfix.txt rile
	calculate expression values
	convert the postfix expression 
	  to infix expression
	
Assume
	Only use binary operators
	Expression contain no variables


* *********************************************************/
class GetInFile
{
private:

	string lExpr;
	string rExpr;
	char ch;
	string stringfix;
	int lNumber;
	int rNumber;
	
public:
	double total1;

	
	GetInFile(){ total1 = 0.0; };     // default constructor

	void getInputFile();
	string postfixExpr(istream & inputStream);
	double calcExpr();
	~GetInFile(){};		// destructor


};

#endif
