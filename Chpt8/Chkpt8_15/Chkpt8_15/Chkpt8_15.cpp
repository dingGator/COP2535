//Kim Lien Chu
//COP2535.0M1
/*******************************************

*********************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;

void fillArray(char[], int);
void showArray(const char[], int);
double	avgArray(const int[], int);
void displayArray7(int[][7], int);

int main()
{
	cout << "\n***********chpt8 p15******************" << endl;
	typedef int TenInts[10];

	cout << "\n***********chpt8 p16******************" << endl;

	cout << "\n***********chpt8 p17******************" << endl;
	char prodCode[8] = { '0', '0', '0', '0', '0', '0', '0', '0' };
	fillArray(prodCode, 8);
	showArray(prodCode, 8);

	cout << "\n***********chpt8 p18******************" << endl;
	const int SIZE = 10;
	int userNums[SIZE];
	cout << "\n Enter 10 numbers:  ";
	for (int count1 = 0; count1 < SIZE; count1++)
	{
		cout << "\n  #" << (count1 + 1) << " :  "<< (count1 *4);
		//cin >> userNums[count1];
		userNums[count1] = (count1 * 4);
	}
	cout << "\n The average of those numbers is ";
	cout << avgArray(userNums, SIZE) << endl;
	
	cout << "\n***********chpt8 p19******************" << endl;
	int grade[30][10];

	cout << "\n***********chpt8 p20******************" << endl;
	double sales[6][4];

	
	cout << "\n***********chpt8 p21******************" << endl;

	sales[0][0] = 56893.12;
	
	cout << "\n***********chpt8 p22******************" << endl;

	cout << sales[5][3] << endl;

	cout << "\n***********chpt8 p23******************" << endl;

	int setting[3][5] = { { 12, 24, 32, 21, 42 },
						{ 14, 67, 87, 65, 90 },
						{ 19, 1, 24, 12, 8 } };

	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cout << setw(5) << setting[row][col] << " ";
		}
		cout << endl;
	}

	cout << "\n***********chpt8 p24******************" << endl;

	int table[3][4] = { { 2, 3 }, { 7, 9, 2 }, { 1 } };
	for (int row2 = 0; row2 < 3; row2++)
	{
		for (int col2 = 0; col2 < 4; col2++)
		{
			cout << setw(5) << table[row2][col2] << " ";
		}
		cout << endl;
	}
	cout << "\n***********chpt8 p25******************" << endl;

	int hours[5][7] = {0};
	int stamps[8][7] = { 1 };
	int autos[12][7] = { 2 };
	displayArray7(hours, 5);
	displayArray7(stamps, 8);
	displayArray7(autos, 12);

	cout << "\n***********chpt8 p26******************" << endl;
	int vidNum[50][10][25];
	cout << "\n***********chpt8 p27******************" << endl;
	return 0;
}
void fillArray(char arr[], int size1)
{
	char code = 65;
	for (int k = 0; k < size1; code++,k++)
		arr[k] = code;
}
void showArray(const char codes[], int size2)
{
	for (int k = 0; k < size2; k++)
		cout << codes[k];
}
double	avgArray(const int array[], int size3)
{
	double total = 0.0;
	double average = 0.0;
	for (int count2 = 0; count2 <size3; count2++)
	{
		total += array[count2];
	};
	average = total / size3;
	return average;
}

void displayArray7(int array3[][7], int numRows)
{
	for (int row3 = 0; row3 < numRows; row3++)
	{
		for(int col3 = 0; col3 < 7; col3++)
		{ 	cout << array3[row3][col3] << " ";
		}
		cout << endl;
		
	}

}



