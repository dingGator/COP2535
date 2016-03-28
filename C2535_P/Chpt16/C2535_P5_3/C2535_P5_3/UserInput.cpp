//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include <string>
#include <cctype>
#include "UserInput.h"

using namespace std;


UserInput::UserInput()
{
	itemName = " ";
	begin_Input = "begin_Input";
	continue_Entry = "continue_Entry";
	choiceNum = 0;
	errorCnt = 0;
}
/***************************
UserInput::userNumIn
read in number,
**********************************/
int UserInput::userEnterChoice(string statusMsg)
{

	if ((statusMsg == begin_Input) || (statusMsg == continue_Entry))
	{


		cout << "\n                Please Enter a Choice                 " << endl;
		cout << "\n          1.    add inventory item at the begining of the list. " << endl;
		cout << "\n          2.    add inventory item at the end of the list." << endl;
		cout << "\n          3.    remove inventory item by name.  " << endl;
		cout << "\n          4.    remove inventory item from the begining of the list." << endl;
		cout << "\n          5.    remove inventory item from the end of the list." << endl;
		cout << "\n          or -99      to end entry                   " << endl;

		cout << "\n                 Please Enter Your Choice:   ";


		cin >> choiceNum;
	}
	if ((!cin) || (errorCnt < 7))
	{
		errorCnt++;
		cout << "\n\n  You  entered " << choiceNum;
		cout << " This is not a choice number.  " << endl;
		cout << "    Please enter a choice number Or enter -99 to end :  ";
		cin >> choiceNum;


	}

	if (errorCnt == 6)
	{
		choiceNum = errorCnt;
	}

	return choiceNum;

}
string UserInput::userEnterItem()
{
	cout << "\n   Please enter an item name:  ";
	cin >> itemName;
	return itemName;

};
