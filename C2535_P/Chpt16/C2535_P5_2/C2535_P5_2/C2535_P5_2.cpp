// Chapter 17 - Assignment 8, Member Insertion by Position
// This program adds a list insert by position capability to the
// Linked List Class.
#include <iostream>
#include "DisplayRep.h"
#include "UserInput.h"
#include "ValidateInput.h"
#include "LinkNode.h"
#include "LinkedList.h"

using namespace std;
/**********************************************
•	add inventory item at the end of the list
•	add inventory item at the beginning of the list
•	remove inventory item from the end of the list
•	remove inventory item from the beginning of the list
•	remove inventory item by name
•	display the list of inventory items
•	exit

********************************/

int main()

{
	// Explain program to user
	cout << "\n\n   This program allows you to construct a list by:" << endl;
	cout << "   add inventory item at the end of the list" << endl;
	cout << "   add inventory item at the beginning of the list" << endl;
	cout << "   remove inventory item from the end of the list" << endl;
	cout << "   remove inventory item from the beginning of the list" << endl;
	cout << "   remove inventory item by name  " << endl;
	cout <<	"   display the list of inventory items" << endl;


	UserInput userEnterInput;
	ValidateNum valNum;
	LinkedList list1;

	DisplayRep  disRep;
	//double aveNum;
	//int modNum;
	//int movieNum;
	string begin_Input = "begin_Input";
	string good_Num = "good_Num";
	string statusMsg;
	statusMsg = begin_Input;


	/**************************************************************
	*/
				/********************************************
				//			Allow the user to enter the number
				//of movies each student saw into the array.
				*******************************************/
	
				choiceNum=userEnterInput.userEnterIn(statusMsg);
				/********************************************
				//	 Validate all input.
				*******************************************/
	
				statusMsg = valNum.valInput(movieNum);
				if (statusMsg == good_Num)
				{

					/********************************************
					//	 Load number of movie into array.
					*******************************************/

					//			ldArray.loadInArray(n, movieNum, statusMsg);
		/*			n++;
				}
			}
		}
	}
	*/
	
	// Create empty list

	/*
		list1.insert(x);
		cout << "\nCurrent list membership is: ";
		list1.rPrint();
	*/
	/*************************************************
	display the average with one decimal place
	display the mode(the value that occurs most often).
	***********************************************/
	/*
	disRep.displayHeader();
	//	disRep.displaySurAvg(aveNum);
	//	disRep.displaySurMod(modNum);
	*/
	return 0;
}