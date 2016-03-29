//Kim Lien Chu
//COP2535.0M1

#include <iostream>
#include <string>
#include <iomanip>

#include <vector>
#include <fstream>
//#include "DisplayReport.h"
//#include "GetInFile.h"

using namespace std;

/*
Program
1.  Uses two functions:
	A.  T min (vector <T> v)
	B.  T max (vector <T> v)
		a.  accept a vector v 
		b.  return the min and max value
			of all items in the vector v passed to it.  
	C.  if T is a numeric type 
		a.  such as an int or double, 
	D.  when the min function is called, 
		a.  the minimum value in the vector will be returned.  
	F.  When the max function is called, 
		a.	the maximum value in the vector will be returned.  
2.  Use the file minmax.txt to populate the vectors.   
3.  The file will contain 5 integer values followed by five string values.  
4.  Once the vectors are populated, 
5.		Call the min function and 
		the max function 
			for the integer vector.  
6.  Then call the min function 
		and the max function 
	for the string vector.
7.  Display the results of the min and max function calls.

*/


template <class T>
T min(vector <T> v)
{	
	T smallest = v[0];
	for (int k = 1; k < 10; k++)
	{
		if (v[k] < smallest)
			smallest = v[k];
	}
	return smallest;
}

template <class T>
T max(vector <T> v)
{
	T largest = v[0];
	for (int k = 1; k < 10; k++)
	{
		if (v[k] > largest)
			largest = v[k];
	}
	return largest;
}

int main()
{
	
	vector<double> inDouVect;

	vector<string> inStrVect;
	double minDouble;
	double maxDouble;
	//GetInFile inFile;
	cout << "   getInputFile    " << endl;
	//inFile.getInputFile(vi);//,vs);
	
	double in;


	ifstream inFile;
	inFile.open("minmax.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{

		while (inFile >> in)
		{

			try
			{
				if (isalpha)
					throw in;
				else
				{

					inDouVect.push_back(in);
					cout << "    load array   " << inDouVect[(inDouVect.size() - 1)] << endl;
					//			inDouVect.push_back(in);
					//	cout << "   load double in double array   " << inDouVect[0] << endl;
				}


			}
			catch ()
			{
				inStrVect.push_back(in);
				cout << "    load array   " << inStrVect[(inStrVect.size() - 1)] << endl;
				//		
				cout << "   There are string in this file" << endl;
			}


		}

		inFile.close();




		cout << "   template    " << endl;
		/*
		try
		{
		minDouble = min(inDouVect);
		maxDouble = max(inDouVect);
		cout << "  min and max   " << minDouble <<endl;
		}
		//catch (string exceptionString)
		{

		cout << "  There are string in file   " << endl;

		}
		/*
		try
		{
		min(vs);
		max(vs);
		}
		catch (string exceptionString)
		{
		//	cout << "  There are string in file   " <<vs<< endl;

		}
		*/
		//	DisplayReport disRep;
		//	disRep.displayHeader();
		//	disRep.displayCount(min, max);



		return 0;
	}
};





/* *********************************************************/


