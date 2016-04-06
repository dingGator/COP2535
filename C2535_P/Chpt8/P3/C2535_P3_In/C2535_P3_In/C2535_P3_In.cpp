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
#include "GetInFile.h"


using namespace std;


int main()
{
	//initialize the DataCounter structure 
	// DataCounter structure found in file: DataCounter.h
	
	DataCounter respCount[] =
		{	DataCounter("Cheese Pizza", 0, 0),
			DataCounter("Hamburger", 0, 0),
			DataCounter("Fish Sticks", 0, 0),
			DataCounter("Mystery Meat", 0, 0) };
	GetInFile getInput;
	
	// get input file
	//count responses of like and dislike
	// load result of counter in struct DataCounter
	
	
	getInput.getInputFile(respCount);

	//Display report
	DisplayReport disRep;
	disRep.displayHeader();
	disRep.displayCount(respCount);

	return 0;
}
