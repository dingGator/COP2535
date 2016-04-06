//Kim Lien Chu
//COP2535.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "GetInFile.h"
#include <stack>
#include <cstring>
#include <cstdlib>
using namespace std;
/*******************************************
class GetInFile
	uses a single stack
	read postfix.txt rile
		calculate expressions value
			prints their values.

	The output of each expression
		displayed on the console screen
	ends when the end of the file is reached.
Assume
	Only use binary operators
	Expression contain no variables

*******************************************/
void GetInFile::getInputFile()
{
	string line;
	string repString;
	ifstream inFile;
			
/************************************
Use the file: postfix.txt 
	Each input expression
		is on its own line in the postfix.txt file.
******************************/
	inFile.open("postfix.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		while (getline(inFile, line))
		{ 
/******************************************
		read postfix expressions 
		and prints their values .	
Assume
	Only use binary operators
	Expression contain no variables
********************************************/
			istringstream inputExpr(line);
			repString = postfixExpr(inputExpr);
			if (total1 == 0)
			{
				cout << "\n         "<<left << setw(30)  <<  line  
					 << left << setw(30) << repString << endl;
			}
			else
			{	
				cout << "\n         "<<left << setw(30) << line   
					 << left << setw(10) <<showpoint<<setprecision(4)<< total1 
					 << left << setw(30) << repString << endl;
			}
		}
		cout << endl;
		cout << endl;
		
		inFile.close();
	
	}
	
	
}
/*********************************
string postfixExpr(istream & in)
uses a stack to read the expression
uses a stack to calculate the expression
*************************************/


string GetInFile::postfixExpr(istream & in)
{
	/*********************************
	uses a stack to change 
		the expression from postfix expressions
		to  infix expression
	uses a stack to calculate the expression
	*************************************/
		int number;
	ch = in.peek();
	while (ch != EOF)
	{	//evaluate each line of file
		// see if it is a space
		if (isspace(ch))
		{
			ch = in.get();
			ch = in.peek();
			continue;
		}
		// see if it is a number
		if (isdigit(ch))
		{
			in >> number;
			ostringstream numberStr;
			numberStr << number;
		
			calcStack.push(number);
			infixStack.push(numberStr.str());
			ch = in.peek();

			continue;
		}

		rNumber = calcStack.top();
		calcStack.pop();
		lNumber = calcStack.top();
		calcStack.pop();
		
		rExpr = infixStack.top();
		infixStack.pop();
		lExpr = infixStack.top();
		infixStack.pop();
		// check for binary operator
		if (ch == '+' ||
			ch == '-' ||
			ch == '*' ||
			ch == '/')
		{
			//store total
			total1=calcExpr();
			calcStack.push(total1);
			// store the string of the expression
			infixStack.push( "(" + lExpr + " " + ch + " " + rExpr + ")");


		}
		ch = in.get();
		ch = in.peek();
		
	}
	
	stringfix = infixStack.top();
	return stringfix;


};
double GetInFile::calcExpr()
{
	/**************************
	calculate the value of the postfix expression
	**********************************/
	if (ch == '+')
	{
		total1 = lNumber + rNumber;
	}
	else if (ch == '-')
	{
		total1 = lNumber - rNumber; 
	}
	else if (ch == '*')
	{
		total1 = lNumber * rNumber; 
	}
	else if (ch == '/')
	{//This to handle a double from the calculation
		total1 = lNumber / (rNumber + 0.0); 
	}
	
	return total1;
}
