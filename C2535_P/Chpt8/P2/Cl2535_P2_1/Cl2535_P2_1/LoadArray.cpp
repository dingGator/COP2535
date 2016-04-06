//Kim Lien Chu
//COP2535.0M1
#include "LoadArray.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

LoadArray::LoadArray()  //constructor
{
	loadCount = 0;
}
/*******************************************
*	Bring in and load file into two arrays: 
*		ranData1[], ranData2[]
*	Each array will hold the contents of a file
*	of 200 integer values.:		arraySize
*********************************/

void LoadArray::loadTwoArray(int ranData1[], int ranData2[], int arraySize)
{
	// bring in random.txt file
	ifstream inputFile;
	
	inputFile.open("random.txt");
	if (inputFile)
	{
		// reading data from file
		
		while ((inputFile >> ranData1[loadCount]) && (loadCount < arraySize))
		{
			ranData2[loadCount] = ranData1[loadCount];
			loadCount++;
		}
		// close file
		inputFile.close();
	}
	else
	{     // error in open of file
		cout << "Error opening the file";
	}
}
