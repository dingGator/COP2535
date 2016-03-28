#include <string>
#include <iostream>
using namespace std;

template <class T>
T minimum(T arr[], int size)
{
	T smallest = arr[0];
	for (int k = 1; k < size; k++)
	{
		if (arr[k] < smallest)
			smallest = arr[k];
	}
	return smallest;
}

// 16.7
template <class T>
int minPosition(T arr[], int size)
{
	int minPos = 0;
	for (int k = 1; k < size; k++)
	{
		if (arr[k] < arr[minPos])
			minPos = k;
	}
	return minPos;
}

// 16.10

template<class T>
class List
{
	int students;
};
/*
class Rectangle
{ 
private:
	double width;
	double length;
	double area;
public:
	void setData(double w, double l)
	{
		width = w; 
		length = l;
	}
	void calcArea()
	{
		area = width* length;
	}
	double getWidth()
	{
		return width;
	}
	double getLength()
	{
		return length;
	}
	double getArea()
	{
		return area;
	}
};
*/
template <class T>
class Rectangle
{
private:
	T width;
	T length;
	T area;
public:
	void setData(T W, T L)
	{
		width = W; length = L;
	}
	void calcArea()
	{
		area = width * length;
	}
	T getWidth()
	{
		return width;
	}
	T getLength()
	{
		return length;
	}
	T getArea()
	{
		return area;
	}
};

int main()
{
	int arr1[] = { 40, 20, 25 };
	cout << "  the minimum number is   " << minimum(arr1, 3)
		<< endl;
	string arr2[] = { "zoe", "snoopy", "bob", "waldorf" };
	cout << "  the minimum string is   " << minimum(arr2, 4)
		<< endl;

	//16.10
	//List<int> myList;

	return 0;
}