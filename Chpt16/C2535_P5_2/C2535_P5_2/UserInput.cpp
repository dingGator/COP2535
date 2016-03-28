//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include "UserInput.h"

using namespace std;


UserInput::UserInput()
{
	itemName = " ";
	begin_Input = "begin_Input";
}
/***************************
UserInput::userNumIn
read in number,
**********************************/
void UserInput::userEnterIn(string statusMsg)
{
	if (statusMsg == begin_Input)
	{

	int choice;
	cout << "\n               Enter a choice                 " << endl;
	cout << "\n   1.  Insert item to begining of List        " << endl;
	cout << "\n   2.  Insert item to end of List             " << endl;
	cout << "\n   3.  Remove an item from the List by name   " << endl;
	cout << "\n   4.  Remove the first item on the List      " << endl;
	cout << "\n   5.  Remove the last item on the List       " << endl;
	cout << "\n       Enter -99 to end entry                 " << endl;
	cout << "\n     Enter your choice:   ";

	cout << "\n      Please enter a choice number " << endl;
	cout << "                 Or enter -99 to end :  ";
	cin >> choice;

	while (!cin)
	{
		cout << "\n\n  You did not enter a choice number.  " << endl;
		cout << "\n    Please enter a choice number  " << endl;
		cout << "                 Or enter -99 to end :  " << endl;
		cin.clear();
		cin.ignore();
		cin >> choice;

	}
	cout << "\n     Enter an item name :    "<<endl;
	cin >> itemName;
	return itemName;
}
void UserInput::processChoice()
{
		if (choice == 1)
		{
			cout << "\n   1.  Insert item to begining of List        " << endl;
			
		}
		else if (choice == 2)
		{
			cout << "\n   2.  Insert item to end of List             " << endl;

		}
		else if (choice == 3)
		{
			cout << "\n   3.  Remove an item from the List by name   " << endl;
		}
		else if (choice == 4)
		{
			cout << "\n   4.  Remove the first item on the List      " << endl;
		}
		else if (choice == 5)
		{
			cout << "\n   5.  Remove the last item on the List       " << endl;

		}
}
