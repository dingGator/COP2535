//Kim Lien Chu
//COP2535.0M1
/*******************************************
This program
*Display comparison count it makes.
*********************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;

int main()
{
	const int NUM_MEN = 10;
	int fish[NUM_MEN], count;
	cout << "how many fish were caught by each fisherman  ";
	for (int count = 0; count<NUM_MEN; count++)
	{
		cout << "fisherman  " << (count + 1) << ":";
		cin >> fish[count];
	}
	cout << "Fish report"<<endl;
		for (int count = 0; count< NUM_MEN; count++)
		{
			cout << "fisherman # " << (count + 1) << " caught  ";
			cout << fish[count] << " fish."<< endl;
		}
	return 0;
}

