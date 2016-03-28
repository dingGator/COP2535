// Kim Lien Chu
//C2535.0M1
#include <iostream>
#include <string>
#include "DisplayRep.h"
#include "UserInput.h"
#include "ValidateInput.h"
#include "LinkedList.h"

using namespace std;
/**********************************************
•	Project 5
*
*   add inventory item at the end of the list
•	add inventory item at the beginning of the list
•	remove inventory item from the end of the list
•	remove inventory item from the beginning of the list
•	remove inventory item by name
•	display the list of inventory items
•	exit

********************************/

int main()

{

	UserInput userEnter;
	ValidateInput valInput;
	LinkedList list1;
	DisplayRep  displayList;
	string begin_Input = "begin_Input";
	string good_Num = "good_Num";

	string statusMsg;
	int choiceNum;
	string itemName;
	string good_Item = "good_Item";
	statusMsg = begin_Input;
	string continue_Entry = "continue_Entry";

	// Explain program to user
	displayList.displayProgHeader();

	while ((statusMsg == begin_Input) ||
		(statusMsg == continue_Entry) ||
		(statusMsg == "wrong_Number")||
		(statusMsg != "exit_Now"))
	{

		choiceNum = userEnter.userEnterChoice(statusMsg);

		//	 Validate all input.
		if (statusMsg != "exit_Now")
		{
			statusMsg = valInput.valChoice(choiceNum);
			if (statusMsg == good_Num)
			{    // choice 1,2,3 need an itemName
				if ((choiceNum == 1) || (choiceNum == 2) || (choiceNum == 3))
				{
					itemName = userEnter.userEnterItem();

					statusMsg = valInput.valItem(itemName);
				}

			}

			// if good choice and item name then make list
			if ((statusMsg == good_Item) && (choiceNum == 1))
			{
				list1.insert(itemName, 0);
				statusMsg = continue_Entry;
			}
			else if ((statusMsg == good_Item) && (choiceNum == 2))
			{
				list1.addToEndList(itemName);
				statusMsg = continue_Entry;
			}
			else if ((statusMsg == good_Item) && (choiceNum == 3))//		
			{
				list1.remove(itemName);
				statusMsg = continue_Entry;
			}
			else if ((statusMsg == good_Num) && (choiceNum == 4))
			{
				list1.removeBeginList();
				statusMsg = continue_Entry;
			}
			else if ((statusMsg == good_Num) && (choiceNum == 5))
			{
				list1.removeEndList();
				statusMsg = continue_Entry;
			}
			cout << "\n    Current list item List is :   ";
			list1.rPrint();
			cout << endl;
			cout << endl;
		}
	}
	displayList.displayRepHeader();
	list1.rPrint();
	cout << endl;
	cout << endl;

	return 0;
}