//Kim Lien Chu
//COP2535.0M1


#include <iostream>
#include <sstream>
#include <stack>
#include <string>

#include "DisplayRep.h"

using namespace std;
/*******************************************
displayRep
Input						Output
78							78
78 6 +						84
78 6 + 9 2 - /				12			(78 + 6) / (9 - 2)
*******************************************/

void DisplayRep::displayHeader()
{
	cout << "\n        ************************************" << endl;
	cout << "\n                        Postfix             " << endl;
	cout << "\n        ************************************" << endl << endl;
	cout << "\n        Input						Output " << endl << endl;
}
/*
void DisplayRep::displayPostfix(string outRep)

{
	cout << "\n        "<<outRep << outRep << endl;
	cout << "\n\n            *******************" << endl << endl;
}
*/
