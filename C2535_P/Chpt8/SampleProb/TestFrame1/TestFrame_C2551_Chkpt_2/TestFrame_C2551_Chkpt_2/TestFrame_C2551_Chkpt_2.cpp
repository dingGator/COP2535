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

struct MovieInfo
{
	string	name;
	string 	director;
	int year;
};
struct Location
{
	double latitude, longitude, height;
};
struct City
{
	string cityName;
	Location position;

};
class Rectangle
{
	int length;
	int width;
};
class TestClass
{
private:
	int val;
	void showVal()
	{
		cout << val << endl;
	}

public:
	TestClass(int x)
	{
		val = x;
	}
};

Rectangle getRect();
void setRect(Rectangle &);
void showRect(Rectangle &);

int main()
{	/*
	cout << "\n\n*********movie p28********************" << endl;
	
	MovieInfo movie;
	cout << " \n   what is the name of movie   ";
		 //getline(cin, movie.name);
	movie.name = "pride and prejudice";
	cout << "\n  what is the director name  ";
		//getline(cin, movie.director);
	movie.director = "Darcy";
	cout << "\n  what is year  ";
		//cin >> movie.year;
	movie.year = 2009;
	cout << "\n\n  Here is the movie info  ";
	cout << "\n  Name:  " << movie.name << endl;
	cout << "\n  director: " << movie.director << endl;
	cout << "\n  year of release : " << movie.year << endl;
	
	cout << "\n\n***********city p31*****************" << endl;
	
	City destination;
	destination.cityName = "Tupelo";
	destination.position.latitude = 34.28;
	destination.position.longitude = -88.77;
	destination.position.height = 361.0;
	cout << "\n   city name     "<< destination.cityName;
	cout << "\n    latitude     " << destination.position.latitude;
	cout << "\n    longitude    " << destination.position.longitude;
	cout << "\n    height       " << destination.position.height;
	cout << endl;

	cout << "\n\n*************Rectangle p34***************" << endl;
	
	Rectangle part;

	setRect(part);
	part = getRect();
	showRect(part);
	
	cout << "\n\n****************************" << endl;
	TestClass test(77);
	test.showVal();
	*/
	Rectangle *BoxPrt;
	int numbers1[] = { 99, 87, 66, 55, 101 };
	cout << numbers1[3] << endl;
	//cout << *BoxPrt.length << endl;
	
	int numbers[] = { 99, 87, 66, 55, 101 };
	for (int i = 1; i < 4; i++)
		cout << numbers[i] << endl;
	/*
	int numbers[];
	
	const int SIZE = 5;
	double x[SIZE];
	for (int i = 2; i <= SIZE; i++)
	{x[i] = 0.0;};
	*/
	const int SIZE = 5;
	double aAx[SIZE];
	for (int i = 2; i < SIZE; i++)
	{
		aAx[i] = 0.0;
	}
	return 0;
}
/*
void setRect(Rectangle &item)
{
	item.length = 5;
	item.width = 6;

}
void showRect(Rectangle &r)
{
	cout <<"\n     length " << r.length << endl;
	cout <<"\n     width  "<<  r.width << endl;
}

Rectangle getRect()
{
	Rectangle r;
	cout << "width: ";
	r.width = 90;
	//cin >> r.width;
	cout << "length: ";
	//cin >> r.length;
	r.length = 80;
	return r;

}*/