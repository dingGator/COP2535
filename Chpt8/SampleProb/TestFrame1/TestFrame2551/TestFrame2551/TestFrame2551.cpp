//Kim Lien Chu
//COP2535.0M1
/*******************************************
This program
*Create two arrays where each will hold 200 integer values.
*	Bring in and load random.txt file into two arrays
*Using the two arrays, Call a function:
--that uses the bubble sort algorithm to sort one of the arrays in ascending order.
*	--& counts the number of exchanges it makes.
*Call a function: that uses the selection sort algorithmto sort the other array.
--& counts the number of exchanges it makes.
Display exhanges values.
*Call a function: that uses the linear search program to locate the value 869.
--& keep a count of	the number of comparisons it makes until it finds the value.
*Call a function: that uses the binary search algorithm to locate the same value.
*	--& keep count of the numbers of comparisons it makes.
*Display comparison count it makes.
*********************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
class Tank
{
private:
		int gallons;
public:
	Tank()
	{ gallons = 50; }
	Tank(int gal)
	{ gallons = gal;}
	int getGallons()
	{return gallons;}
};
class Package
{
	
private:
	int value;
public:
	Package()
	{
		value = 7; cout << "\n     " << value << endl;
	}
	Package(int v)
	{
		value = v; cout << "\n     " << value << endl;
	}
	~Package()
	{
	//	cout << "goodbye" << endl; 
	}

};
class Location
{
private:
	int latitude = 20;
public:

	int getLatitude()
	{
		return latitude ;
	}
};

class Map
{
private:
	Location position;
public:
	int getposition()
	{
		return position.getLatitude();
	}
};

class Circle
{
private:
	double radius;
public:
	void setRadius(double r)
	{	radius = r;	}

	double getArea()
	{return (3.14 * radius* radius);}

};
class Pizza
{
private:
	double price;
	Circle size;
public:

	void setPrice(double p)
	{
		price = p;
	}

	void setSize(double r)
	{
		size.setRadius(r) ;
	}
	double costPerSqIn()
	{
		return (price/size.getArea());
	}


};
struct Student
{	int id,
		entryYear;
	double gpa;
};

struct Account
{
	string acctNum;
	double acctBal;
	double intRate;
	double avgBal;
	
	Account(string num, double bal, double rate, double avg)
	{
		acctNum = num; acctBal = bal;
		intRate = rate; avgBal = avg;
	}
};


int main()
{
	cout << "\n\n*********storage p13********************" << endl;
	Tank storage1, storage2, storage3(20);
	cout << "\n     " << storage1.getGallons() << endl;
	cout << "\n     " << storage2.getGallons() << endl;
	cout << "\n     " << storage3.getGallons() << endl;

	cout << "\n\n*****Package p14************************" << endl;

	Package obj1(4);
	Package obj2;
	cout << "\n\n*****************************" << endl;


	cout << "\n\n*********lattitude p20 *********" << endl;
	Map latPos;
	cout << "\n      lat position:   " << latPos.getposition() << endl;


	cout << "\n\n*********circle p21,22 *********" << endl;
	Circle circle1;
	circle1.setRadius(2.3);
	cout << "\n      circle area:  " << circle1.getArea() << endl;

	cout << "\n\n*******Pizza **p23********************" << endl;
	Pizza myPizza;
	myPizza.setPrice(12.99);
	myPizza.setSize(14);
	cout << "\n      price per square inch $" << myPizza.costPerSqIn() << endl;

	cout << "\n\n*********student p26********************" << endl;

	Student s1 = { 1234, 2008, 3.41 };
	Student s2 = {5678, 2010};
	cout <<"\n       entry year   " <<s1.entryYear << endl;
	cout <<"\n       id           " << s1.id << endl;
	cout <<"\n       gpa          " << s1.gpa << endl;
	
	cout << "\n\n***********************" << endl;
	
	cout << "\n       entry year   " << s2.entryYear << endl;
	cout << "\n       id           " << s2.id << endl;
	cout << "\n       gpa          " << s2.gpa << endl;

	
	cout << "\n\n*********account p27********************" << endl;
	Account savings = { "ACZ4237", 4512.59, 0.04, 4217.07 };
	cout << "\n     acctnum        " << savings.acctNum << endl;
	cout << "\n     acctbal        " << savings.acctBal << endl;
	cout << "\n     intrate        " << savings.intRate << endl;
	cout << "\n     avgbal         " << savings.avgBal << endl;
	
	return 0;
}
