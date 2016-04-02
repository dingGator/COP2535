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
#include <vector>
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
			cout << "\n        " << left << setw(30) << line;
			postfixExpr(inputExpr);

		}
		inFile.close();
	}
}
/*********************************
string postfixExpr(istream & in)
uses a stack to read the expression
uses a stack to calculate the expression
*************************************/


void GetInFile::postfixExpr(istream & in)
{
	/*********************************
	uses a stack to change 
		the expression from postfix expressions
		to  infix expression
	uses a stack to calculate the expression
	*************************************/
	ostringstream rExpr;
	ostringstream lExpr;

	//ostringstream numberStr;
	//string stringfix;
	ch = in.peek();
	bool lNum = true;

	while (ch != EOF)
	{	
		//evaluate each line of file
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
		
			
			calcStack.push(number);
		
			ch = in.peek();
			
			continue;
		}
		
		rNumber = calcStack.top();
		rExpr << rNumber;
		calcStack.pop();
		
		lNumber = calcStack.top();
		lExpr << lNumber;
		calcStack.pop();
		
		// check for binary operator
		if (ch == '+' ||
			ch == '-' ||
			ch == '*' ||
			ch == '/')
		{
			//store total
			

			total1 = calcExpr();
			/*
			strcat(" (", lExpr.str());
			strcat(" ", ch.str());
			strcat(" ", rExpr.str());
			strcat(" )", " ");
			*/
			infix = string(" (") + lExpr.str() + ch + rExpr.str() +string(") ");
			calcStack.push(total1);
		
		}
		ch = in.get();
		ch = in.peek();
	
	}
	
	
	cout << setprecision(2) << fixed << total1;
//	cout << "  (" << lExpr.str() << " " << ch << " " << rExpr.str() << ")";

	cout << infix;

};
double GetInFile::calcExpr()
{

	/**************************
	calculate the value of the postfix expression
	**********************************/
	if (ch == '+')
	{
		total1 =(lNumber + rNumber);
	}
	else if (ch == '-')
	{
		total1 = (lNumber - rNumber);

			}
	else if (ch == '*')
	{
		total1 = (lNumber * rNumber);
	
	}
	else if (ch == '/')
	{//This to handle a double from the calculation
		total1 = lNumber / (rNumber + 0.0);
	}
	
	return total1;
}
void GetInFile::infixExpr(string stringfix, double total1,string line )
{
	
		cout << endl;

	
}