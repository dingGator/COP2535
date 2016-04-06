//Kim Lien Chu
//C2535.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include<cstring>
#include<cstdlib>
#include <vector>
#include <fstream>

#include "SimpleVector.h"

using namespace std;

template <class T>
SimpleVector<T>::SimpleVector(int s)
{
	arraySize = s;
	// Allocate memory for the array.
		aptr = new T[s];
	
	// Initialize the array.
	for (int count = 0; count < arraySize; count++)
		aptr[count] = T();
	
}
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
	arraySize = obj.arraySize;
	aptr = new T[arraySize];
	// Copy the elements of obj's array.
	for (int count = 0; count < arraySize; count++)
		aptr[count] = obj[count];

}

template <class T>
SimpleVector<T>::~SimpleVector()
{
	if (arraySize > 0)
		delete[]aptr;
}
template <class T>
void SimpleVector<T>::subError() const 
{
	cout << "ERROR: Subscript out of range.\n";
	exit(0);
	
}

template <class T>
T &SimpleVector<T>::operator[](int sub)
{
	if (sub <0 || sub >= arraySize)
		subError();

	return aptr[sub];
}

template <class T>
void SimpleVector<T>::print() const
{
	for (int k = 0; k < arraySize; k++)
		cout << aptr[k] << "  ";
	cout << endl;
}
template <class T>
void SimpleVector<T>::loadData(T valData,int i)
{
	aptr[i] = valData;
}