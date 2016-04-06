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
struct Product
{
	string description;
	int partNum;
	double cost;
	Product()
	{
		description = " a ";
		partNum = cost = 0;
	}
	Product(string d, int p, double c)
	{
		description = d;
		partNum = p;
		cost = c;
	}
};

struct Measurement
{
	int miles;
	double hours;
};

struct Destination
{
	string city;
	Measurement travelTime;
};



int main()
{
	cout << "\n***********Vector chpt8 p34,p35******************" << endl;
	
	Product items[100];

	cout << "\n***********Vector chpt8 p36******************" << endl;

		items[0].description = "Claw Hammer";
		items[0].partNum = 547;
		items[0].cost = 8.29;

	cout << "\n***********Vector chpt8 p37******************" << endl;

	for (int x = 0; x <100; x++)
	{
		cout << items[x].description << "  ";
		cout << items[x].partNum << "  ";
		cout << items[x].cost << "  ";
		cout << endl;
	}

	cout << "\n***********Vector chpt8 p38******************" << endl;

	Product items2[5] ={Product("screw drive ", 621, 1.72),
						Product("socket set  ", 892, 19.97),
						Product("Claw hammer ", 547, 8.29)};

	for (int x = 0; x <5; x++)
	{
		cout << items2[x].description << "  ";
		cout << items2[x].partNum <<"  ";
		cout << items2[x].cost << "  ";
		cout << endl;
	}

	cout << "\n***********Vector chpt8 p39******************" << endl;

	cout << "\n***********Vector chpt8 p40******************" << endl;

	cout << "\n***********Vector chpt8 p41******************" << endl;
	Destination places[20];
	places[4].city = "Tupelo";
	places[4].travelTime.miles = 375;
	places[4].travelTime.hours = 7.5;



	return 0;
}