//Kim Lien Chu
//COP2535.0M1


/*
school cafeteria is giving a survey
to its students to improve their lunch menus.
Use the file cafeteria.txt file to input the results
of the survey into a
2 - dimensional array to hold the counters for the survey.
The file will hold values for a string menu item,
a 'Y' if the student liked the food item
and a 'N' if the student disliked the food item.

Once the file has been processed
and the 2 - dimensional array set up,
display the results in group form such as :

Food Item			   Like			Dislike
Cheese Pizza			3				0
Hamburger				1				2
Fish Sticks				2				1
Mystery Meat			0				3

Be sure to use pointer notation where applicable.
*/
//#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
//tofo: added this include
#include <fstream>

using namespace std;

struct DataCounter
{
	string name1;
	int likeCount;
	int dlikeCount;

	DataCounter(){};

	DataCounter(string str, int li, int disl)
	{
		name1 = str; likeCount = li; dlikeCount = disl;
	}
};



class DisplayReport
{

public:
	DisplayReport(){};
	void displayHeader();
	void displayCount(DataCounter []);
	~DisplayReport(){};
	

};
void DisplayReport::displayHeader()
{
	cout << "\n   ***************************************************" << endl;

	cout << "		    Survey of Cafeteria Food                   " << endl;
	cout << "\n   ***************************************************" << endl;
	cout << setw(21) << left << "   Food Item        ";
	cout << setw(18) << left << "   Like              ";
	cout << setw(20) << left << "	Dislike          " << endl<<endl;

};
void DisplayReport::displayCount(DataCounter respCount[])

{
	
	for (int displayRespI = 0; displayRespI < 4; displayRespI++)
	{
		cout << "   " << setw(20) << left << respCount[displayRespI].name1;
		cout << "   " << setw(21) << left << respCount[displayRespI].likeCount;
		cout << "   " << setw(15) << left << respCount[displayRespI].dlikeCount;
		cout << endl;
	}
	
	cout << endl << endl;
};



void getInFile(DataCounter []);

int main()
{

	DataCounter respCount[4] =
	{	DataCounter("Cheese Pizza", 0, 0),
		DataCounter("Hamburger", 0, 0),
		DataCounter("Fish Sticks", 0, 0),
		DataCounter("Mystery Meat", 0, 0) };

	getInFile(respCount);

	DisplayReport disRep;
	disRep.displayHeader();
	disRep.displayCount(respCount);
	
	return 0;
}

void getInFile(DataCounter respCount[])
{
	
	
	string likeY = "Y";
	string disN = "N";
	ifstream inFile;
	inFile.open("cafeteria.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		//readData till EOF
		string s;
		//string inPut;
		
		while (getline(inFile, s))
		{
			stringstream line(s);
			string firstWord;
			string secondWord;
			string thirdWord;
		//	string foodName;
			string yorN;
			line >> firstWord; //fetch first word of current line
			line >> secondWord;

			for (int fNameI = 0; fNameI < 4; fNameI++)
			{

				if (firstWord == respCount[fNameI].name1)
				{
					yorN = secondWord;
					if (yorN == likeY)
					{
						respCount[fNameI].likeCount++;
					}
					else if (yorN == disN)
					{
						respCount[fNameI].dlikeCount++;
					}
					fNameI = 4;

				}
				else if ((firstWord + " " + secondWord) == respCount[fNameI].name1)
				{
					line >> thirdWord;
					yorN = thirdWord;
					if (yorN == likeY)
					{
						respCount[fNameI].likeCount++;
					}
					else if (yorN == disN)
					{
						respCount[fNameI].dlikeCount++;
					}
					fNameI = 4;
				}

				
			}
		}
	}
	inFile.close();
}






