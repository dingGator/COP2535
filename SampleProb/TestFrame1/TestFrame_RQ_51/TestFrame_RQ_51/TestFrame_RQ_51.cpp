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

struct Names
{
	string first;
	string last;
	Names(string f, string l)
	{
		first = f; last = l;
	};
};

struct TwoVals
{
	int a;
	int b;
};
class DumbBell
{
private:
	int weight;
public:
	int setWeight(int w)
	{return weight = w ;};
};

class Change
{
 private:
	int pennies;
	int nickels;
	int dimes;
	int quarters;
public:
	Change()
	{
		pennies = nickels = dimes = quarters = 0;
	};
	Change(int p = 100, int n = 50, int d = 50, int q = 25);
};
Change::Change(int p, int n, int d, int q)
{
	pennies = p;
	nickels = n;
	dimes = d;
	quarters = q;
}
class Square
{
private:
	int side;
public:
	Square()
	{ side = 1; }
	Square(int a)
	{
		side = a;
	}
	Square(int, int);
	void setSide(int s)
	{
		side = s;
	}
	int getSide();
	
};
int Square::getSide()
{
	return side;
};
int main()
{
	cout << "\n\n********* RQ p51A********************" << endl;
	Names customer("Smith", "Orley");
		//cout << Names.first << endl;
	cout << "\n Names.first is wrong--> customer.first:  "<< customer.first<< endl;
		//cout << Names.last << endl;
	cout << "\n Names.last  is wrong--> customer.last:  " << customer.last << endl;
	
	
	cout << "\n\n***********p51B*****************" << endl;
	TwoVals v = { 5, 10 };

	cout << v.a << "  " << v.b<<endl;

	cout << "\n   initialize this way:   TwoVals v = { 5, 10 };"<<endl;

	cout << "\n not :   int a =5;   int b =10;  " << endl;
	cout << "\n ***cannot initialize struct member in declaration***  " << endl;

	cout << "\n\n************* p53A***************" << endl;
	DumbBell bar;
	
	cout << "The weight is: " << bar.setWeight(200) << endl;
	
	cout << "\n\n***********lecture square****************" << endl;
	Square square1();
	int s1;
	//s1 = square1(7);
	cout << "\n\n***********class p47*****************" << endl;




	return 0;
}
