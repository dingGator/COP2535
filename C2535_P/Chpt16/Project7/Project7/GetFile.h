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
	bool lNum;
	string oper1;
	string oper2;
	string newExpr;

	string bBoard;
	string bBSt;
	bool bB1Ready;
	bool bB2Ready;

	int number;
	char ch;
	string line;


	stack<double>calcStack;
	double tempTotal;
	double lNumber;
	double rNumber;
	double total1;


	GetInFile();

	void getInputFile();
	void postfixExpr(istream & inputstream);
	void isItDigit(istream &inputstream);
	double calcExpr();
	void digitSave();
	void createStringDisplay();
	void getStackNum();
	~GetInFile(){};		// destructor


};

#endif
