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
#include <stdlib.h>
using namespace std;
GetInFile::GetInFile()
{
	//infix = "";
	lNum = true;
	oper1 ="";
	oper2 = "";
	newExpr ="";
	bBoard = "";
	bBSt ="";
	bB1Ready = false;
	bB2Ready = false;

}
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
postfixExpr
the file is istream in
Check till end of file
	stream in the file into number
	if space look at next space
	if digit change the number to a string
         

*************************************/


void GetInFile::postfixExpr(istream & in)
{
	ch = in.peek();
	
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
		if (isdigit(ch))
		{
			isItDigit(in);
			continue;
		}
		getStackNum();
		
		ch = in.get();
		ch = in.peek();
	
	}
	
	
	cout << setprecision(2) << fixed << total1;
	cout << "  " << bBoard;
	//initialize variables
	newExpr = " ";
	oper1 = " ";
	oper2 = " ";
	bB1Ready = false;
	bB2Ready = false;

};
/**********************************
isItDigit()
process number to see if is a digit
******************************/
void GetInFile::isItDigit(istream &in)
{
	// see if it is a number
		in >> number;
		digitSave();
		total1 = number;
		calcStack.push(number);
		ch = in.peek();
	
		
}
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
}/********************

digitSave
save of oper1 and oper2
for string creation
*****************************/
void GetInFile::digitSave()
{
	ostringstream ossLNumber;
	ostringstream ossRNumber;

	if (oper1 == " ")
	{
		ossLNumber << number;
		oper1 = ossLNumber.str();
	}
	else
	{
		ossRNumber << number;
		oper2 = ossRNumber.str();
	}

}
/***********************************
createStringDisplay()
create the infix string
**********************************/
void GetInFile::createStringDisplay()
{
	newExpr = "(" + oper1 + ch + oper2 + ")";



	if (bB1Ready && bB2Ready)
	{

		bBoard += ch;
		bBoard += bBSt;
	}
	if (!bB1Ready)
	{
		bBoard = newExpr;
		bB1Ready = true;
		bB2Ready = false;
	}
	else
	{
		bBSt = newExpr;
		bB2Ready = true;
	}


	oper1 = " ";
	oper2 = " ";


}
/**************************************
getStackNum()
get the stack number
*************************************/
void GetInFile::getStackNum()
{
	rNumber = calcStack.top();
	calcStack.pop();
	lNumber = calcStack.top();

	calcStack.pop();

// check for binary operator
	if (ch == '+' ||
		ch == '-' ||
		ch == '*' ||
		ch == '/')
	{
		createStringDisplay();
		total1 = calcExpr();
		calcStack.push(total1);

	}
}