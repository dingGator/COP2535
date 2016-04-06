// Chapter 17 - Assignment 8, Member Insertion by Position
// This program adds a list insert by position capability to the
// Linked List Class.
#include <iostream>
#include "DisplayRep.h"
#include "UserInput.h"
#include "ValidateNum.h"
//#include "ListNode.h"
#include "LinkedList.h"

using namespace std;


int main()

{
	// Explain program to user
	cout << "This program allows you to construct a list by specifying"
		" list members\n and their positions on the list.";

	UserInput<int> userEnterInput;
	ValidateNum valNum;
	LinkedList list1;

	DisplayRep  disRep;
	//double aveNum;
	//int modNum;
	int movieNum;
	string begin_Input = "begin_Input";
	string good_Num = "good_Num";
	int numberOfStudent = -98;
	string statusMsg;
	statusMsg = begin_Input;


	/**************************************************************
	Ask the user how many students were surveyed.
	An array of integers with this many elements is be dynamically allocated.
	Validate all input.
	****************************************************/

	numberOfStudent = userEnterInput.userEnterIn(statusMsg, numberOfStudent);

	/********************************************
	//	 Validate all input.
	*******************************************/
	statusMsg = valNum.valInput(numberOfStudent);
	if (statusMsg == good_Num)
	{
		/***************************************
		//	allocate pointer array
		********************************/
		//	LoadArray  ldArray(numberOfStudent);

		if (statusMsg == good_Num)
		{
			int n = 0;
			while (n < numberOfStudent)
			{
				int numStd = n + 1;
				/********************************************
				//			Allow the user to enter the number
				//of movies each student saw into the array.
				*******************************************/

				movieNum = userEnterInput.userEnterIn(statusMsg, n);
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
					n++;
				}
			}
		}
	}
	
	// Create empty list
	
	// Demonstrate insert by position        
	for (int k = 1; k <= 5; k++)
	{
		cout << "\nEnter a number followed by a position: ";
		int x, pos;
		cin >> x >> pos;
		list1.insert(x, pos);
		cout << "\nCurrent list membership is: ";
		list1.rPrint();
	}
	/*************************************************
	display the average with one decimal place
	display the mode(the value that occurs most often).
	***********************************************/

	disRep.displayHeader();
//	disRep.displaySurAvg(aveNum);
//	disRep.displaySurMod(modNum);

	return 0;
}