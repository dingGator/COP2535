//Kim Lien Chu
//C2535.0M1

#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <new>      
#include <iostream>
#include <cstdlib>

using namespace std;

template<class T>
class SimpleVector
{
private:
	T *aptr;
	int arraySize;
	void subError() const;
public:

	SimpleVector(int);
	SimpleVector(const SimpleVector &);
	~SimpleVector();

	int size() const
		{return arraySize;}
	T &operator[](int );
	void print() const;
	void loadData(T, int);
};

#endif // !SIMPLEVECTOR_H
