#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H
#include "SimpleVector.h"

template<class T>
class SearchableVector : public SimpleVector<T>
{
public:
	SearchableVector(int s) : SimpleVector<T>(s)
	{}

	SearchableVector(SearchableVector &);

	SearchableVector(SimpleVector<T> &obj) :
		SimpleVector<T>(obj)
	{}
	int findItem(T);
	double minimum(T);
	double maximum(T);
	
};

template<class T>
SearchableVector<T>::
SearchableVector(SearchableVector &obj) :
SimpleVector<T>(obj)
{
}

template <class T>
int SearchableVector<T>::findItem(T item)
{
	for (int count = 0; count < this->size(); count++)
	{
		if (this->operator[](count) == item)
		{
			return count;
		}

	}
	return -1;
}
template <class T>
double SearchableVector<T>::minimum(T item)
{
	T smallest = this->operator[](0);
	for (int count= 1; count < this->size(); count++)
	{
		if (this->operator[](count) < smallest)
		{
			smallest = this->operator[](count);
		}
	}
	return smallest;
}

template <class T>
double SearchableVector<T>::maximum(T item)
{
	T largest = this->operator[](0);
	for (int count = 1; count < this->size(); count++)
	{
		if (this->operator[](count) < largest)
		{
			largest = this->operator[](count);
		}
	}

	return largest;
}

#endif // !SEARCHABLEVECTOR_H
