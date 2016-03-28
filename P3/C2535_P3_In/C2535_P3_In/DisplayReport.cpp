//Kim Lien Chu
//COP2535.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include "DataCounter.h"
#include "DisplayReport.h"

using namespace std;
/*******************************************
                DisplayReport
will make the report of this format

***************************************************

Survey of Cafeteria Food
***************************************************"

Food Item			   Like			Dislike
Cheese Pizza			3				0
Hamburger				1				2
Fish Sticks				2				1
Mystery Meat			0				3

* *********************************************************/

void DisplayReport::displayHeader()
{
	cout << "\n   ***************************************************" << endl;

	cout << "		      Survey of Cafeteria Food                   " << endl;
	cout << "\n   ***************************************************" << endl;
	cout << setw(21) << left << "   Food Item        ";
	cout << setw(18) << left << "   Like              ";
	cout << setw(20) << left << "	Dislike          " << endl << endl;

};
void DisplayReport::displayCount(DataCounter respCount[])

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

