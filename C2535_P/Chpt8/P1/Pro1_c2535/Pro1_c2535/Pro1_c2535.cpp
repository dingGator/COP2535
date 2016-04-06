//Kim Lien Chu
//COP2535.0M1
/* This program display a histogram of a survey of
twenty students' rating of the food in the student food court
*/

#include <iostream>
#include <fstream>    // bring in survey.txt file
#include <string>
#include <iomanip>
#include <vector>

using namespace std;
/*
Read in these responses into an array
and determine the frequency of each rating.
Display the frequencies as a histogram

*/
class HistoDisplay
{
private:
	int dataFile_size =20 ;
	int surveyData[20];
	int rating_size = 10 ;
	int rateFrq[10];
public:

	
	//prototype
	void loadSurvey();  //load responses to a vector
	void showRating();		// display histogram

};

void HistoDisplay::loadSurvey()
{
	// bring in survey.txt file
	ifstream inputFile;
	//int qualNum;
	int count = 0;
	//rateFrq[] = { 0 }; // initialize frequency array
	// open the input file
	inputFile.open("survey.txt");
	if (inputFile)
	{
		cout << "file read in" << endl;
		// reading data from file
		// validate file

		while (inputFile >> surveyData[count])
		{
			cout << " input file 1st " << surveyData[count] << endl;
			cout << " input file index " << count << endl;

			count++;
			// count the frequency of the ratings
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
void HistoDisplay::showRating()
{
	int rateFrq[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
	int accum = 0;
	cout << " in side histodisplay" <<  accum << endl;
	for (int index = 0; index < 20; index++)
	{
		int rating = 0;
		cout << "*******************************" << endl;
		cout << " in side histodisplay 1st " << surveyData[index] << endl;
		cout << " in side histodisplay index1st " << index << endl;

		rating = surveyData[index];
		cout << " rating " << rating << endl;
		accum = rateFrq[rating] + 1;
		cout << " acc " << accum << endl;
		rateFrq[rating] = accum;
		
		cout << " ratefrq " << rateFrq[rating] << endl;
		
		cout << "*******************************" << endl;
		cout << " in side for loop Frequency" << endl;
		cout << " in side histodisplay 21st " << rateFrq[rating] << endl;
		//cout << " in side histodisplay 2nd " << rateFrq[10] << endl;

		cout << "*******************************" << endl;

	}


	cout << left << setw(15) << "\nRating";
	cout << right<< "Frequency\n" << endl;
	cout << endl;

	for (int rateCount = 1; rateCount < 11; rateCount++)
	{
		
		
		cout << left<< setw(15)<<rateCount;
		cout << right ;
		
				
		for (int freq = 0; freq < rateFrq[rateCount]; freq++)
			cout  << "*";
			cout << endl;
			
	}


};


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
	
	HistoDisplay surveyGram;
	surveyGram.loadSurvey();  //load rating from file
	surveyGram.showRating();	// display histogram

	return 0;

}


