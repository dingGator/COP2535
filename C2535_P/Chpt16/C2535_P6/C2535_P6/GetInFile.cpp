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
*******************************************/
string GetInFile::getInputFile()
{

	string line;
	string repString;
	ifstream inFile;
	int calcNum;
	
	//  Use the file postfix.txt to .

	inFile.open("postfix.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		while (getline(inFile, line))
		{  /******************************************
		   ********************************************/
			//convert string to string stream
			istringstream inputExpr(line);
			repString= postfixExpr(inputExpr);
			calcNum = calcExpr(repString);
			cout << "\n        " << line << setw(50)<< calcNum << "     "<<setw(10) << repString << endl;

		}
		
		inFile.close();
	
	}
	return repString;
	
}


string GetInFile::postfixExpr(istream & in)
{
	stack<string> infixStack;
	char ch;
	int number;
	string lExpr;
	string rExpr;
	ch = in.peek();
	while (ch != EOF)
	{
		if (isspace(ch))
		{
			ch = in.get();
			ch = in.peek();
			continue;
		}
	
		if (isdigit(ch))
		{
			in >> number;
			ostringstream numberStr;
			numberStr << number;
			cout << "number  " << number << endl;
			infixStack.push(numberStr.str());
			ch = in.peek();
			continue;
		}

		rExpr = infixStack.top();
		infixStack.pop();
		lExpr = infixStack.top();
		infixStack.pop();

		if (ch == '+' ||
			ch == '-' ||
			ch == '*' ||
			ch == '/')
		{
			infixStack.push("(" +lExpr + " " + ch + " " + rExpr+")" );
			cout << "  lExpr  " << lExpr << endl;
			cout << "  rExpr  " << rExpr << endl;
		}
		ch = in.get();
		ch = in.peek();
	}
return infixStack.top();
}
int GetInFile::calcExpr(string repString)
{
	int calcNum1;
	calcNum1 = atol(repString);
	return calcNum1;
}


;

