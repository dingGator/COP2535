//Kim Lien Chu
//COP2535.0M1

#ifndef VALIDATEINPUT_H
#define VALIDATEINPUT_H
#include <string>
using namespace std;
/*************************************
class ValidateNum
--validate each number :

***************************************/

class ValidateInput
{
private:
	// variables 
	int valInNum;
	string wrong_Choice;
	int sentinel_99;
public:
	string errorMsgOut;
	ValidateInput();  // constructor
	string valChoice(int);
	string valItem(string);
	~ValidateInput(){};
};
#endif