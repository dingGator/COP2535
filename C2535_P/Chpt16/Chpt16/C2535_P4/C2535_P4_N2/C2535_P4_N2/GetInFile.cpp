//Kim Lien Chu
//COP2535.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include<cstring>
#include<cstdlib>
#include <vector>
#include <fstream>
#include "DisplayRep.h"
#include "GetInFile.h"
#include "SimpleVector.h"

using namespace std;
/*******************************************
class GetInFile
1.  Use the file minmax.txt to populate the vectors.
a.  The file will contain 5 integer values
followed by five string values.
2.  Vectors are populated with file data
*******************************************/

void GetInFile::getInputFile(SimpleVector<double> &doubVect,
	SimpleVector<string> &strVect, int sizeVector)
{

	string valStr;
	//double valDoub;
	//char ch;
	string line;

	ifstream inFile;

	//  Use the file minmax.txt to populate the vectors.

	inFile.open("minmax.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		while (getline(inFile, line))
		{  /******************************************
		   Check to see if the data is number or alpha
		   Vectors are populated with file data
		   ********************************************/
			for (int i = 0; i < sizeVector; i++)
			{
				if (isdigit(line.at(0)) || line.at(0) == '-')
				{
					double valDoub = atof(line.c_str());

					//vector: double populated

					doubVect.loadData(valDoub, i);
				}
				else
				{
					valStr = line;

					//vector: string populated
					strVect.loadData(valStr, i);
				}
			}
		}
		inFile.close();
	}

}


