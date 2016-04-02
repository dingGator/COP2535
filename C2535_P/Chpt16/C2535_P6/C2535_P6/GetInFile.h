//Kim Lien Chu
//COP2535.0M1
#ifndef GETINFILE_H
#define GETINFILE_H


#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>


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


	
public:
	//stack<string> infixStack;
	int number;

	string stringfix;
	//string lExpr;
	//string rExpr;
	char ch;
	char ch1;
	string infix;
	string line;
	string repString;
//	stack<string> infixStack;
	stack<double>calcStack;

	double tempTotal;
	int lNumber;
	int rNumber;
	double total1;
	GetInFile(){};

	void getInputFile();
	void postfixExpr(istream & inputStream);
	double calcExpr();
	void infixExpr(string, double, string);
	~GetInFile(){};		// destructor


};

#endif
