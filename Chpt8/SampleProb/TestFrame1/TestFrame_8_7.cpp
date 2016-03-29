//Kim Lien Chu
//COP2535.0M1
/*******************************************
This program
*Create two arrays where each will hold 200 integer values.
*	Bring in and load random.txt file into two arrays
*Using the two arrays, Call a function:
--that uses the bubble sort algorithm to sort one of the arrays in ascending order.
*	--& counts the number of exchanges it makes.
*Call a function: that uses the selection sort algorithmto sort the other array.
--& counts the number of exchanges it makes.
Display exhanges values.
*Call a function: that uses the linear search program to locate the value 869.
--& keep a count of	the number of comparisons it makes until it finds the value.
*Call a function: that uses the binary search algorithm to locate the same value.
*	--& keep count of the numbers of comparisons it makes.
*Display comparison count it makes.
*********************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;

int main()
{
	const in NUM_MEN = 10;
	int fish[NUM_MEN], count;
	cout << ”how many fish were caught by each fisherman”;
	for (int count = 0; count<NUM_MEN; count++
	{
		cout << ”fisherman “ << (count + 1) << ”:”;
		cin >> fish[count];
	}
	Cout << ”Fish report”
		for (int count = 0; count< NUM_MEN; count++)
		{
			cout << fisherman # “ << (count + 1) << “ caught”
				<< fish[count] << “ fish.”
		}
	return 0;
}

