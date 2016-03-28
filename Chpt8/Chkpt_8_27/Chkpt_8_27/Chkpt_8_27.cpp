//Kim Lien Chu
//COP2535.0M1
/*******************************************

*********************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void fillArray(char[], int);
void showArray(const char[], int);
double	avgArray(const int[], int);
void displayArray7(int[][7], int);

class Tank
{
private:
	int gallons;
public:
	Tank()
	{
		gallons = 50;
	}
	Tank(int gal)
	{
		gallons = gal;
	}
	int getGallons()
	{
		return gallons;
	}

};
class Yard
{
private:
	int length, width;
public:
	Yard()
	{
		length = 0; width;
	}
	void setLength(int l)
	{
		length = l;
	}
	void setWidth(int w)
	{
		width = w;
	}

	int getLength() { return length; }
	int getWidth() { return width; }
};


int main()
{
	cout << "\n***********Vector chpt8 p28******************" << endl;
	vector<int>frogs;
	vector<float>lizards(20);
	vector<char>toads(100, 'Z');
	cout << "\n***********Vector chpt8 p29******************" << endl;

	vector<int>gators;
	vector<double>snakes(10);
	gators.push_back(27);
	snakes[4] = 12.897;
	
	cout << "\n***********Vector chpt8 p32******************" << endl;

	Tank storage[3] = { 10, 20 };
	for (int index = 0; index < 3; index++)
	{
		cout << storage[index].getGallons() << endl;
	}

	cout << "\n***********Vector chpt8 p33******************" << endl;
		
	const int SIZE = 10;
	Yard lawns[SIZE];
	cout << "enter the length and width";
	for(int count = 0; count < SIZE; count++)
		{
			int input1;
			int input2;
			cout << "\n  yard " << (count + 1) << " :  "
				<< "\n  length : "<< (count*4);
			//cin >> input;
			input1 = count * 4;
			lawns[count].setLength(input1);
			cout << "\n  width  : "<< (count *2);
			//cin >> input;
			input2 = count * 2;
			lawns[count].setWidth(input2);
		}
	cout << "\n the yard dimenstions";
	for(int yard = 0; yard < SIZE; yard++)
	{
			cout << "\n  yard " << (yard + 1) << "    "
				<< lawns[yard].getLength() << " X "
				<< lawns[yard].getWidth() << endl;
	}
		
	cout << "\n***********Vector chpt8 p34******************" << endl;

	return 0;
}