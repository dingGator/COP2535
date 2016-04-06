//Kim Lien Chu
//COP2535.0M1
/*******************************************
This program

*********************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct Inventory1
{
	int itemCode;
	int qtyOnHand;
};

struct Car
{
	string make;
	string model;
	int	year;
	double cost;

	Car(string mk, string md, int y, double c)
	{
		make = mk; model = md; year = y; cost = c;
	};

};
struct TempScale
{
	double fahrenheit;
	double celsius;
};
struct Reading
{
	int windSpeed;
	double humidity;
	TempScale temperature;
	
};
union Items
{
	char	alpha;
	int 	num;
	long 	bigNum;
	double real;
};

class Inventory
{
private:
	string prodID;
	string prodDescription;
	int qtyInStock;
public:
	Inventory(string, string, int);
	void setInv(string, string, int);
	int getInvQty();

};
Inventory::Inventory(string id = "0", string descript = "new", int qty = 0)
{
	prodID = id; prodDescription = descript; qtyInStock = qty;
};
void Inventory::setInv(string id1, string descript1, int qty1)
{
	//id1="3", descript1 = "grapes"; qty1 = 1000;
	prodID = id1; prodDescription = descript1; qtyInStock = qty1;
}
int Inventory::getInvQty()
{
	return qtyInStock;
}

int main()
{
	cout << "\n\n*********trivet RQ p39********************" << endl;

	Inventory1 trivet = { 555, 110 };
	cout << "\n      trivet itemcode     " << trivet.itemCode << endl;
	cout << "\n      trivet qtyOnHand    " << trivet.qtyOnHand << endl;
	cout << "\n\n***********car p40*****************" << endl;

	Car	c1 = { "Ford", "mustang", 2010, 22495 };
	cout << "\n      car make            " << c1.make << endl;
	cout << "\n      car model           " << c1.model << endl;
	cout << "\n      car year            " << c1.year << endl;
	cout << "\n      car cost            " << c1.cost << endl;


	cout << "\n\n*************Temperature p41***************" << endl;

	Reading today;
	today.windSpeed = 37;
	today.humidity = 32;
	today.temperature.fahrenheit = 32;
	today.temperature.celsius = 0;
	cout << "\n      windspeed          " << today.windSpeed << endl;
	cout << "\n      humidity           " << today.humidity << endl;
	cout << "\n      temp.fahrenheit    " << today.temperature.fahrenheit << endl;
	cout << "\n      temp.celsius       " << today.temperature.celsius << endl;


	cout << "\n\n***********union p45*****************" << endl;

	Items anItem;
	anItem.bigNum = 509;
	cout << "\n      anItem            " << anItem.bigNum << endl;

	cout << "\n\n***********class p47*****************" << endl;

	Inventory invItem;
	invItem.setInv("oranges", "oranges", 300);
	cout << "\n      invItem          " << invItem.getInvQty()<< endl;
	


	return 0;
}
