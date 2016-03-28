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
#include <vector>

using namespace std;
class InputFile
{
private:
	vector<string>data1;
	vector<string>data2;
	string chPizzaName;
	string chPizza1;
	string chPizza2;
	string hBurgerName;
	string fshStkName;
	string fshStk1;
	string fshStk2;
	string mysMeatName;
	string mysMeat1;
	string mysMeat2;
	string likeY;
	string disN;

public:

	InputFile(){};
	void getInputFile();
	string valInput(string&);
};

void InputFile::getInputFile()
{
	vector<string>line1;
	vector<string>dataVal;
	string data1;
	ifstream dataFile;
	string line;
	bool validName = false;
	bool validResp = false;
	dataFile.open("cafeteria.txt");
	if (!dataFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		//readData till EOF
		while (dataFile >> line1)
		getline(dataFile, line);
			//cout << data1 << endl;
		line1.push_back(line);
			cout <<"  line  0"<< line << endl;
			if (data1 == "Y")
			{
				if (validName)
				{
					validResp = true;
				}
			}

			else if (data1 == "N")
			{
				if (validName)
				{
					validResp = true;

				}
			}
		}

		dataFile.close();

};


string InputFile::valInput(string &dataVal)
{
	string chPizzaName = " ";
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
	bool validName = false;
	bool validResp = false;
	string data1;
	string data2;
	//readData till EOF
	if (data1 == hBurgerName)
	{
		validName = true;
	}
	else if (data1 == chPizza1)
	{
	//	dataFile >> data2;
		if (data2 == chPizza2)
		{
			validName = true;
		}
	}
	else if (data1 == fshStk1)
	{
		//dataFile >> data2;
		if (data2 == fshStk2)
		{
			validName = true;
		}
	}
	else if (data1 == mysMeat1)
	{
		//dataFile >> data2;
		if (data2 == mysMeat2)
		{
			validName = true;
		}
	}
	
	else
	{
		validName = false;
	}
	return data1;
};
		
	

	
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

	DataCounter()
	{
		name1 = "  "; likeCount = dlikeCount = 0;

	};

	DataCounter(string d , int like, int dlike)
	{
		name1 = d; likeCount = like; dlikeCount = dlike;
	};
};


void calcResp();
void loadCounterArray();
void displaySurvey();
int main()
{



	GoodData goodInput[12];
	DataCounter countResp[4]=	{	DataCounter("Cheese Pizza", 0, 0),
									DataCounter("Hamburger", 0, 0),
									DataCounter("Fish Sticks", 0, 0),
									DataCounter("Mystery Meat", 0, 0) };
	
	string *inputData1;
	
		for (int structI = 0; structI < 12; structI++)
		{

			for (int cRespIndex = 0; cRespIndex < 4; cRespIndex++)
			{

				if (countResp[cRespIndex].name1 == goodInput[structI].goodName)
				{

					if (goodInput[structI].goodResp == "Y")
					{
						countResp[cRespIndex].likeCount++;
					}
					else if (goodInput[structI].goodResp == "N")
					{
						countResp[cRespIndex].dlikeCount++;
					}

					cRespIndex = 4;
				}
			}

		}
		//displaySurvey
		cout << "\n   ***************************************************" << endl;

		cout << "		    Survey of Cafeteria Food                   " << endl;
		cout << "\n   ***************************************************" << endl;
		cout << setw(21) << left << "   Food Item        ";
		cout << setw(18) << left << "   Like              ";
		cout << setw(20) << left << "	Dislike          " << endl;

		for (int displayRespI = 0; displayRespI < 4; displayRespI++)
		{
			cout << "   " << setw(20) << left << countResp[displayRespI].name1;
			cout << "   " << setw(21) << left << countResp[displayRespI].likeCount;
			cout << "   " << setw(15) << left << countResp[displayRespI].dlikeCount << endl;
		}
		cout << endl;



return 0;
};




/*
void loadCounterArray()
{

};
void displaySurvey()
{

};
*/