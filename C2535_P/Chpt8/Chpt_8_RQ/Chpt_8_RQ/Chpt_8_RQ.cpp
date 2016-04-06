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

struct Car
{
	string make,
		model;
	int year;
	double cost;
	Car()
	{
		make = model = " "; year = cost = 0;
	}
	Car(string mk, string md, int yr, double c)
	{
		make = mk; model = md; year = yr; cost = c;
	}
};
struct	PopStruct
{	string name;
	long population;
};


int main()
{
	cout << "\n*********** chpt8 RQ p29******************" << endl;
	Car forSale[25] =	{ Car("Ford", "Taurus", 2006, 21000),
						 Car("Honda", "Accord", 2004, 11000),
						 Car("Jeep", "Wrangler", 2007, 24000) };


	cout << "\n***********chpt8 RQ p30******************" << endl;
	for (int index = 0; index < 25; index++)
	{
		cout << "\n car "<<index <<   " make:    " << forSale[index].make << endl;
		cout << "\n car "<<index <<   " model:   " << forSale[index].model << endl;
		cout << "\n car " << index << " year:    " << forSale[index].year << endl;
		cout << "\n car " << index << " cost:    " << forSale[index].cost << endl;
		cout << "\n*********** ******************" << endl;

	};
	cout << "\n*********** chpt8 RQ p31******************" << endl;
	int array1[25] = { 1 };
	int array2[25] = { 2 };

	for(int index = 0; index<25; index++)
	{
		cout << "\n     array1   " << array1[index];
		cout << "\n     array2   " << array2[index];
		array2[index] = array1[index];
		cout << "\n     array1A   " << array1[index];
		cout << "\n     array2A   " << array2[index];
		cout << "\n*********** ******************" << endl;
	};

	cout << "\n*********** chpt8 RQ p33******************" << endl;

	int emplId[10] = { 1 };
	double grossPay[10] = { 2 };
	for(int emp = 0; emp<10; emp++)
	{
		cout << "\n  employ id:   " << emplId[emp];
		cout << "    grosspay:  " << grossPay[emp] << endl;
	};

	cout << "\n*********** chpt8 RQ p34******************" << endl;
	PopStruct country[12];
	ifstream dataIn;
	dataIn.open("random.txt");
	for (int index = 0; index < 12; index++)
	{
		getline(dataIn, country[index].name);
		dataIn >> country[index].population;
		dataIn.ignore();
		cout << "\n  country   " << country[index].name;

	}
	dataIn.close();

	cout << "\n*********** chpt8 RQ p34******************" << endl;


	return 0;
}