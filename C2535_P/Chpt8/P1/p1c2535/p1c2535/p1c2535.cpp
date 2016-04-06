//Kim Lien Chu
//COP2535.0M1
/* This program display a histogram of a survey of
twenty students' rating of the food in the student food court
*/

#include <iostream>
#include <fstream>    // bring in survey.txt file
#include <string>

using namespace std;
/*
Read in these responses into an array
and determine the frequency of each rating.
Display the frequencies as a histogram

*/
class HistoDisplay
{
private:
	int rateFrq[10]; 
public:
	HistoDisplay();
	//prototype
	void loadSurvey(vector<int>); 
	void displayHist(int);
	
}
void displayHist(rate)
{
	for (int rateCount = 1; rateCount < 11; rateCount++)
	{
		cout << rateCount << "           " << rateFrq[rateCount];
	}
	

};

void loadSurvey(vector<int> surveyNum)
{
	// bring in survey.txt file
	ifstream inputFile;
	int qualNum;
	int count = 0;
	rateFrq[] = { 0 }; // initialize frequency array
	// open the input file
	inputFile.open("survey.txt");
	if (inputFile)
	{
		cout << "file read in" << endl;
		// reading data from file
		// validate file

		while (inputFile >> qualNum)
		{

			cout << qualNum << "   count:  " << count << endl;
			count++;
			cout << "load data into vector " << endl;
			surveyNum.push_back(qualNum);
			// count the frequency of the ratings
			if (qualNum > 10 || qualNum < 1)
			{
				cout << "Error in input file"
			}
			else
			{
				rateFrq[qualNum]++;
			}
		}
		cout << "file read done" << endl;
		// close file
		inputFile.close();
	}
	else
	{
		cout << "Error opening the file";
	}
}


//void showValues(vector<int>);
//void detFreq(vector<int>);
//void displayCount(int);

int main()
{
		/*		Twenty students were asked
	to rate on the scale from 1 to 10
	the quality of the food in the student food court
	with 1 being "awful" and 10 being "excellent".
	The responses are stored in the survey.txt file.
	*/

	// bring in and load survey.txt file into vector 
	vector<int> surveyFile;
	Histodisplay surveyGram;
	surveyGram.loadSurvey(surveyFile);
	surveyGram.displayHist();
	// display histogram

	return 0;

}








