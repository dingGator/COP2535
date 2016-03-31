//Kim Lien Chu
//COP2535.0M1

/******************************************
Project 6
program
	read postfix expressions
	convert to infix expression
	calculate value of the postfix expression
Assume
	Only use binary operators
	Expression contain no variables

*******************************************/
#include <iostream>
#include "GetInFile.h"
#include "DisplayRep.h"
#include <sstream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	DisplayRep repDisp;  
	// display what program do
	repDisp.displayHeader();
/*************************************
read in postfix file
		process postfix expression
		output report as infix expression
***************************/
	GetInFile inputFile;
	inputFile.getInputFile();
	return 0;
}
