//Kim Lien Chu
//COP2535.0M1


/**********************************************************
Program uses the file cafeteria.txt file to input the results
of a survey into a 2 - dimensional array 
to hold the counters for the survey.

The file holda values for a string menu item,
a 'Y' if the student liked the food item
and a 'N' if the student disliked the food item.

Once the file has been processed
and the 2 - dimensional array set up,
program displays the results in group form :

Food Item			   Like			Dislike
Cheese Pizza			3				0
Hamburger				1				2
Fish Sticks				2				1
Mystery Meat			0				3

************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include "DataCounter.h"
#include "DisplayReport.h"


using namespace std;


void getInFile(DataCounter[]);

int main()
{
	//initialize the DataCounter structure 
	// DataCounter structure found in file: DataCounter.h
	DataCounter respCount[] =
	{ DataCounter("Cheese Pizza", 0, 0),
	DataCounter("Hamburger", 0, 0),
	DataCounter("Fish Sticks", 0, 0),
	DataCounter("Mystery Meat", 0, 0) };
	
	// get input file
	//count responses of like and dislike
	// load result of counter in struct DataCounter
	
	getInFile(respCount);

	//Display report
	DisplayReport disRep;
	disRep.displayHeader();
	disRep.displayCount(respCount);

	return 0;
}/**********************************************
				getInFile
 get input file
 count responses of like and dislike
 load result of counter in struct DataCounter
******************************************/
void getInFile(DataCounter respCount[])
{


	string likeY = "Y";
	string disN = "N";

	//read in cafeteria file
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
			line >> secondWord;  // fetch second word of current line

			//loop thru the DataCounter structure find the name of food item
			// add one to the like or dislike variable of that food item

			for (int fNameI = 0; fNameI < sizeof(respCount); fNameI++)
			{
				// when the food item name is one word 
				// the seond word will be a y or n response: like or dislike
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
				// when the food item name is two words 
				// the third word will be a response:
				//a y or n response: like or dislike
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






