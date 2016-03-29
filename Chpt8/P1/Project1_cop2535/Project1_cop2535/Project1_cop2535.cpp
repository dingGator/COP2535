//Kim Lien Chu
//COP2535.0M1
/* This program display a histogram of a survey of
twenty students' rating of the food in the student food court
*/

#include <iostream>
#include <fstream>    // bring in survey.txt file
#include <string>
#include <vector>
using namespace std;  
/*
Read in these responses into an array 
and determine the frequency of each rating.
Display the frequencies as a histogram

*/
void showValues(vector<int>);
void detFreq(vector<int>);
void displayCount(int);

int main()
{
	//program code goes here
/*		Twenty students were asked
		to rate on the scale from 1 to 10
		the quality of the food in the student food court
		with 1 being "awful" and 10 being "excellent".
		The responses are stored in the survey.txt file.
*/
	// bring in survey.txt file
	ifstream inputFile;
	int qualNum;
	int count = 0;
	vector<int> surveyNum;
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

		}
		cout << "file read done" << endl;
		// close file
		inputFile.close();
	}
	else
	{
		cout << "Error opening the file";
	}
	showValues(surveyNum);
	// determine frequency of each rating
	detFreq(surveyNum);
	// display histogram

	return 0;

}
	// display value in vector
	void showValues(vector<int> vect)
	{
		for (int count = 0; count < vect.size(); count++)
			cout << vect[count] << endl;
	}

	void detFreq(vector<int> vect)
	{
		int tenRate = 0, nineRate = 0,
			eightRate = 0, sevenRate = 0,
			sixRate = 0, fiveRate = 0,
			fourRate = 0, threeRate = 0,
			twoRate = 0, oneRate = 0;

		for (int count = 0; count < vect.size(); count++)
		{
			if (vect[count] > 10 || vect[count] < 1)
			{
				cout << "Error in input";
			}
			else if (vect[count] == 10)
			{
				tenRate++;
			}

			else if (vect[count] == 9)
			{
				nineRate++;
			}
			else if (vect[count] == 8)
			{
				eightRate++;
			}

			else if (vect[count] == 7)
			{
				sevenRate++;
			}
			else if (vect[count] == 6)
			{
				sixRate++;
			}
			else if (vect[count] == 5)
			{
				fiveRate++;
			}
			else if (vect[count] == 4)
			{
				fourRate++;
			}
			else if (vect[count] == 3)
			{
				threeRate++;
			}
			else if (vect[count] == 2)
			{
				twoRate++;
			}
			else if (vect[count] == 1)
			{
				oneRate++;
			}
		}
		cout << "10 " << tenRate;
			for (int histoCount = 0; histoCount < tenRate; histoCount++)
			{
				cout << "*" ;
			}
			cout << endl;
			cout << "9 " << nineRate ;
				for (int histoCount = 0; histoCount < nineRate; histoCount++)
				{
					cout << "*" ;
				}
				cout << endl;
				
				cout << "8 " << eightRate ;

					for (int histoCount = 0; histoCount < eightRate; histoCount++)
					{
						cout << "*" ;
					}
					cout << endl;
					cout << "7 " << sevenRate ;
					
					for (int histoCount = 0; histoCount < sevenRate; histoCount++)
					{
						cout << "*" ;
					}
					cout << endl;
					cout << "6 " << sixRate ;
					for (int histoCount = 0; histoCount < sixRate; histoCount++)
					{
						cout << "*" ;
					}
					cout << endl;
					cout << "5 " << fiveRate ;

						for (int histoCount = 0; histoCount < fiveRate; histoCount++)
						{
							cout << "*";
						}
						cout << endl;
						cout << "4 " << fourRate ;
						for (int histoCount = 0; histoCount < fourRate; histoCount++)
						{
							cout << "*";
						}
						cout << endl;
						cout << "3 " << threeRate ;
						for (int histoCount = 0; histoCount < threeRate; histoCount++)
						{
							cout << "*";
						}
						cout << endl;
						cout << "2 " << twoRate ;
						for (int histoCount = 0; histoCount < twoRate; histoCount++)
						{
							cout << "*" ;
						}
						cout << endl;
					cout << "1 " << oneRate ;
					for (int histoCount = 0; histoCount < oneRate; histoCount++)
					{
						cout << "*" << endl;
					}

	}


	
	

