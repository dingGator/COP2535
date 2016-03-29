//Kim Lien Chu
//COP2535.0M1
#ifndef DISPLAYREP_H
#define DISPLAYREP_H

#include <iostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

/*******************************************
class GetInFile

* *********************************************************/
class DisplayRep
{
private:


public:
	DisplayRep(){};     // default constructor

	void displayHeader();
	void displayPostfix(string);
	~DisplayRep(){};		// destructor


};

#endif
