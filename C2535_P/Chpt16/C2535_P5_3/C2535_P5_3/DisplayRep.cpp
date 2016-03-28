//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <iomanip>
#include <string>

#include "DisplayRep.h"

using namespace std;

void DisplayRep::displayProgHeader()
{
	cout << "\n\n***************************************************************           ";
	cout << "\n\n   This program allows you to construct a list ";
	cout << "\n       You can:   " << endl;
	cout << "\n          1.    add inventory item at the begining of the list. " << endl;
	cout << "\n          2.    add inventory item at the end of the list." << endl;
	cout << "\n          3.    remove inventory item by name.  " << endl;
	cout << "\n          4.    remove inventory item from the begining of the list." << endl;
	cout << "\n          5.    remove inventory item from the end of the list." << endl;
	cout << "\n\n       Then program will display the list of inventory items" << endl;
	cout << "\n\n***************************************************************           ";
	cout << endl;
	cout << endl;
}
/*******************************
display header
******************************/

void DisplayRep::displayRepHeader()
{	//display

	cout << "\n\n     ***************************************************" << endl;
	cout << "\n                    The List of Items you entered ";
	cout << "\n              Please note:  ** the items should be in the order you wanted   ";
	cout << "\n     ****************************************************" << endl;

}



