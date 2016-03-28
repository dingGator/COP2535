//Kim Lien Chu
//COP2535.0M1
#ifndef USERINPUT_H
#define USERINPUT_H

#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
using namespace std;
/*************************************
*Class UserInput
read in number,
**************************************/

class UserInput
{
private:
	// variables 
	int choiceNum;
	string itemName;
	string begin_Input;
	int arrEleDisplay;
	int errorCnt;
	string continue_Entry;


public:

	UserInput();  // constructor

	int userEnterChoice(string);
	string userEnterItem();
	~UserInput(){};
};
#endif