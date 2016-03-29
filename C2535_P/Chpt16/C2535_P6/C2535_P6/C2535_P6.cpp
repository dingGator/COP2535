//Kim Lien Chu
//COP2535.0M1

/******************************************
Project 6
program 
	uses a single stack
	read postfix expressions
	prints their values.
	Each input expression
		is on its own line in the postfix.txt file.
	The output of each expression
		displayed on the console screen
	ends when the end of the file is reached.  

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
/*******************************************


******************************************
*/

int main()
{
	string outString;
	/******************************************
	GetInFile
	Use the file postfix.txt to 
	******************************************/
	DisplayRep repDisp;
	repDisp.displayHeader();

	GetInFile inputFile;
	outString=inputFile.getInputFile();
	/****************************
	********************************/
	
	/**************************************
	****************************/
//	repDisp.displayPostfix(outString);
	return 0;
}
