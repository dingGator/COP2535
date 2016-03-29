//Kim Lien Chu
//COP2535.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include "DisplayReport.h"

using namespace std;
/*******************************************
DisplayReport
will make the report of this format

* *********************************************************/

void DisplayReport::displayHeader()
{
	cout << "\n   ***************************************************" << endl;

	cout << "		      Minimum & Maxium of File                   " << endl;
	cout << "\n   ***************************************************" << endl;

};
/*
void DisplayReport::displayMinMaxNum(double, double)

{
	for (int displayRespI = 0; displayRespI < sizeof(respCount); displayRespI++)
	{
		cout << "   " << setw(20) << left << respCount[displayRespI].name1;
		cout << "   " << setw(21) << left << respCount[displayRespI].likeCount;
		cout << "   " << setw(15) << left << respCount[displayRespI].dlikeCount;
		cout << endl;
	}

	cout << endl << endl;
};

*/