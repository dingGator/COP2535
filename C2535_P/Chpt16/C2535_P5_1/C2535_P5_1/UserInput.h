//Kim Lien Chu
//COP2535.0M1
#ifndef USERINPUT_H
#define USERINPUT_H

#include <iostream>
#include <cstdlib>
using namespace std;
/*************************************
*Class UserInput
read in number,
**************************************/
template <class T>
class UserInput
{
private:
	// variables 
	T inputNum;
	string begin_Input;
	int arrEleDisplay;


public:

	UserInput();  // constructor

	T userEnterIn(string, int);
	~UserInput(){};
};
#endif