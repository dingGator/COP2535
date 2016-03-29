//Kim Lien Chu
//COP2535.0M1

#ifndef LOADARRAY_H
#define LOADARRAY_H

/*******************************************
Class LoadArray
*	Bring in and load	file into two arrays
*	Each array will hold the contents of a file
*	of 200 integer values.
*********************************/
class LoadArray
{
private:
	int loadCount;

public:

	LoadArray();//constructor
	//prototype
	void loadTwoArray(int[], int[], int);
	~LoadArray(){};
};
#endif