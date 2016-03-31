#include <iostream>
using namespace std;

class Box
{
private:
	double width;
	double length;
	double height;
public:
	Box(double w, double l, double h)
	{
		width = w; length = l; height = h;
	};
	Box( Box &b)
	{
		width = b.width;
		length = b.length;
		height = b.height;
	};

	};
//B
class Circle
{
private:
	double diameter;
	int centerX;
	int centerY;
public:
	Circle(double d, int x, int y)
	{
		diameter = d; centerX = x; centerY = y;
	}
	Circle (Circle  &right)
	{
		diameter = right.diameter;
		centerX = right.centerX;
		centerY = right.centerY;
	}
};

//RQ_43

//A
class Vehicle
{
private:
	int wheels;
public:
	string carMaker;
};
class Car: public Vehicle
{
public:
	Car();
	~Car();
protected:
	int passengers;
};
//B
class Truck: public Vehicle
{
private:
	double cargoWeight;
public:
	Truck();
	~Truck();
	
};
