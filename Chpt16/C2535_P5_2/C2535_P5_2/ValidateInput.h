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

class ValidateNum
{
private:
	// variables 


	int valInNum;

	int sentinel_99;
public:
	string errorMsgOut;
	ValidateNum();  // constructor
	string valInput(int &);
	~ValidateNum(){};
};
#endif