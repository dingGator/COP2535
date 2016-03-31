//Kim Lien Chu
//COP2535.0M1


#include <iostream>
#include <sstream>
#include <stack>
#include <string>

#include "DisplayRep.h"

using namespace std;
/*******************************************
class DisplayReport
display report header
*******************************************/

void DisplayRep::displayHeader()
{
	cout << "\n        *********************************************************** " << endl;
	cout << "\n        This program produces a report of the Postfix.txt file      " << endl;
	cout << "\n           The report will have:                                    " << endl;
	cout << "\n                        the original input                          " << endl;
	cout << "\n                        the calculated value of the input           " << endl;
	cout << "\n                        the postfix expression of the input         " << endl;
	cout << "\n        ************************************************************" << endl << endl;
	cout << endl;
	cout << "\n                 Postfix Expressions Report                         " << endl;
	cout << endl;
	cout << "\n        ************************************************************" << endl << endl;
	cout << endl;
	cout << "\n        Input	                     Output                        " << endl << endl;
}