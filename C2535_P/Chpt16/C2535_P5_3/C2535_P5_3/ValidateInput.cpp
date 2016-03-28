//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include <string>
#include "ValidateInput.h"

using namespace std;

ValidateInput::ValidateInput()
{
	valInNum = -98;
	sentinel_99 = -99;
	errorMsgOut = " ";
	wrong_Choice = "wrong_Number";

}
/***************************
ValidateNum::errorMsg
validate each number :--- send console error msgs out
and error msg back to the program
*---if blank or not a number            --- not a number
---if -99 stop asking for more numbers   -- end input
*---if  greater than    0                -- good number
*--- if 0 or less than  0               --- error range number
**********************************/

string ValidateInput::valChoice(int inNum)
{
	if (inNum == sentinel_99)  //sentinel
	{
		cout << "\n\n  You wanted to stop entering to list.  Good bye    " << endl;
		errorMsgOut = "exit_Now";
		//		exit(0);
	}
	else if ((inNum >0) && (inNum<6))
	{
		errorMsgOut = "good_Num";
	}
	else 
	{
		cout << "\n\n  You  entered " << inNum;
		cout << "\n This is not a choice number.  " << endl;
		cout << "    Please enter a choice number Or enter -99 to end :  " << endl;
		errorMsgOut = "wrong_Number";
	}

	return errorMsgOut;


}
string ValidateInput::valItem(string itemName)
{
	if (itemName == "-99")
	{
		cout << "\n\n  You wanted to stop entering to list.  Good bye    " << endl;
		errorMsgOut = "exit_Now";

	}
	else
	{
		cout << "\n\n You entered:  " << itemName << "." << endl;
		errorMsgOut = "good_Item";
	}
	return errorMsgOut;

}


