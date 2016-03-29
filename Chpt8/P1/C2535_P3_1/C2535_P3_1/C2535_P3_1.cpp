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
#include <iostream> 
#include <string> 
#include <fstream>
#include <iomanip>

using namespace std; 
struct GoodData
{
	string goodName;
	string goodResp;
	
};
struct DataCounter
{
	string name1;
	int likeCount;
	int dlikeCount;

};

void getInput();
void calcResp();
void loadCounterArray();
void displaySurvey();
int main()
{
	
	getInput();
	
	//valData();

	//countSurvey();
	
	//loadCounterArray();
	//displaySurvey();


	return 0; 
};
void getInput()
{
	GoodData goodInput[12];
	DataCounter countResp[4];
	countResp[0].name1 = "Cheese Pizza";
	countResp[1].name1 = "Hamburger";
	countResp[2].name1 = "Fish Sticks";
	countResp[3].name1 = "Mystery Meat";
	string data1;
	string data2;
	countResp[0].likeCount = 0;
	countResp[0].dlikeCount = 0;

	countResp[1].likeCount = 0;
	countResp[1].dlikeCount = 0;
	countResp[2].likeCount = 0;
	countResp[2].dlikeCount = 0;
	countResp[3].likeCount = 0;
	countResp[3].dlikeCount = 0;
	bool validName;
	string goodNameIn;
	string chPizzaName = "";
	string chPizza1 = "Cheese";
	string chPizza2 = "Pizza";
	string hBurgerName = "Hamburger";
	string fshStkName = "";
	string fshStk1 = "Fish";
	string fshStk2 = "Sticks";
	string mysMeatName = "";
	string mysMeat1 = "Mystery";
	string mysMeat2 = "Meat";
	string likeY = "Y";
	string disN = "N";
	int i= 0;

	ifstream dataFile;
	dataFile.open("cafeteria.txt");
	if (!dataFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		//readData till EOF
		while (dataFile >> data1)
		{
			cout << data1 << endl;
			if (data1 == hBurgerName)
				{
					validName = true;
					goodNameIn = data1;
					goodInput[i].goodName = goodNameIn;
					cout << "goodInput[i].goodName 1   " << goodInput[i].goodName << endl;
					
				}
				else if (data1 == chPizza1)
				{
					dataFile >> data2;
					cout << "data2 " << data2 << endl;
					if (data2 != chPizza2)
					{
						cout << "Invalid food name in file: 2 " << (data1 + " " + data2) << endl;
						validName = false;
					}
					else
					{
						validName = true;
						goodNameIn = (data1 + " " + data2);
						goodInput[i].goodName = goodNameIn;
						cout << "goodInput[i].goodName 2   " << goodInput[i].goodName << endl;
					
					}

				}
				else if (data1 == fshStk1)
				{
					dataFile >> data2;
					if (data2 != fshStk2)
					{
						cout << "Invalid food name in file:  3 " << (data1 + " " + data2) << endl;
						validName = false;

					}
					else
					{
						validName = true;
						goodNameIn = (data1 + " " + data2);
						goodInput[i].goodName = goodNameIn;
						cout << "goodInput[i].goodName   3 " << goodInput[i].goodName << endl;
					
					}

				}
				else if (data1 == mysMeat1)
				{
					dataFile >> data2;
					if (data2 != mysMeat2)
					{
						cout << "Invalid food name in file: 4 " << (data1 + " " + data2) << endl;
						validName = false;
					}
					else
					{
						validName = true;
						goodNameIn = (data1 + " " + data2);
						goodInput[i].goodName = goodNameIn;
						cout << "goodInput[i].goodName   4 " << goodInput[i].goodName << endl;
						
					}
				}
				else if (data1 == "Y" || data1 == "N")
				{	
					if (validName)
					{
						goodInput[i].goodResp = data1;
						cout << "goodInput[i].goodResp   y/n " << goodInput[i].goodResp << endl;
						i++;
					}
				}
				else
				{
					cout << "Invalid input in inputfile: 5 " << data1 << endl;
					validName = false;
				}
				
				cout << "it is here   " << i << endl;
		}
		cout << "closing file  ";
		dataFile.close();
		for (int structI = 0; structI < 12; structI++)
		{	
			cout << "\n struct  index:  " << structI << " --struct name:   "<< goodInput[structI].goodName;
			cout << " --struct resp:  " << goodInput[structI].goodResp << endl;
		
			for (int cRespIndex = 0; cRespIndex < 4; cRespIndex++)
			{
			
				if (countResp[cRespIndex].name1 == goodInput[structI].goodName)
				{
					cout << "\n  goodInput[structI].goodResp:   " << goodInput[structI].goodResp << endl;

					if (goodInput[structI].goodResp == "Y")
					{
						countResp[cRespIndex].likeCount++;
						cout << "\n like: " << "  " << countResp[cRespIndex].likeCount << endl;
					}
					else if (goodInput[structI].goodResp == "N")
					{
						countResp[cRespIndex].dlikeCount++;
						cout << "\n dislike: " << "  " << countResp[cRespIndex].dlikeCount << endl;
					}
				
					cRespIndex = 4;
				}
			}
			
		}
		//displaySurvey
		cout << "\n   ***************************************************" << endl;

		cout << "		    Survey of Cafeteria Food                   " << endl;
		cout << "\n   ***************************************************" <<endl;
		cout << setw(21) << left << "   Food Item        ";
		cout << setw(18) << left << "   Like              ";
		cout << setw(20) << left << "	Dislike          " << endl;

		for (int displayRespI = 0; displayRespI < 4; displayRespI++)
		{
			cout << "   "<<setw(20) << left <<countResp[displayRespI].name1;
			cout << "   "<<setw(21) << left << countResp[displayRespI].likeCount;
			cout << "   "<<setw(15) << left << countResp[displayRespI].dlikeCount<<endl;
		}
		cout << endl;

	}
};





/*
void loadCounterArray()
{

};
void displaySurvey()
{	

};
*/