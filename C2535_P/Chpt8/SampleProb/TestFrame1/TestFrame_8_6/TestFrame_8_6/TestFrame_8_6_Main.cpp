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
	cout << "***********chpt8 p6******************" << endl;
	int values[5], count;
	for (count = 0; count < 5; count++)
	{
		values[count] = count + 1;
	}
	for (count = 0; count < 5; count++)
	{
		cout << "value:  "<< values[count] << " in index count: "<< count <<endl;
	}
	cout << "***********chpt8 p7******************" << endl;

	const int NUM_MEN = 10;
	int fish[NUM_MEN], count1;
	cout << "\n  how many fish were caught by each fisherman  ";
	for (int count1 = 0; count1<NUM_MEN; count1++)
	{
		cout << "\n  fisherman  " << (count1 + 1) << ":";
		cout << "\n count1 * 5=  " << (count1 * 5)<< "  index:  "<< count1<<endl;
		//cin >> fish[count1];
		fish[count1] = count1 * 5;
	}
	cout << "\n  Fish report" << endl;
	for (int count2= 0; count2< NUM_MEN; count2++)
	{
		cout << "\n  fisherman # " << (count2 + 1) << " caught  ";
		cout << fish[count2] << " fish." << endl;
	}

	cout << "***********p8******************" << endl;

	int ages[10] = { 5, 7, 9, 14, 15, 17, 18, 19, 21, 13 };
	double temps[7] = { 14.7, 16.3, 18.43, 21.09, 17.9, 18.76, 26.7 };
	char	alpha[8] = { 'j', 'B', 'L', 'N', '*', '$', 'H', 'M' };

	cout << "**********p11*******************" << endl;
		int x = 1;
		int values1[] = { 2, 6, 10, 14 };
		cout << "\n  int values1[] = { 2, 6, 10, 14 };  " << endl;
		cout << "\n  int x = 1;  "<<endl;
		cout << "\n  values1[x]=   " << values1[x];
	cout << "\n  values1[x++]= " << values1[x++]  << "  x=  " << x;
	cout << "\n  values1[++x]= " << values1[++x] <<  "  x=  " << x;
	cout << "\n  values1[0]=   " << values1[0];
	cout << "\n  ++values1[0]= " <<++values1[0];
	cout << "\n  values1[0]++= " << values1[0]++ <<endl;
	cout << "************p12*****************" << endl;

	int nums[5] = {1, 2, 3};
	cout << "int nums[5] = { 1, 2, 3 };" << endl;
	cout << "nums[3]; is: " << nums[3] << endl;
	
	
	cout << "*****************************" << endl;

	double balance[5] = { 100.0, 250.0, 325.0, 500.0, 1100.0 };
	const double INT_RATE = 0.1;
	cout << "8.13  " << endl;
	cout << endl;
	cout << fixed << showpoint << setprecision(2);
	for (int count = 0; count < 5; count++)
		cout <<"interest:  " <<(balance[count] * INT_RATE) << endl;
	
	cout << "*****************************" << endl;
	cout << "8.14  " << endl;
	cout << endl;
	const int SIZE = 5;
	int count3;
	int time[SIZE] = { 1, 2, 3, 4, 5 },
		speed[SIZE] = { 18, 4, 27, 52, 100 },
		dist[SIZE];
	for (count3 = 0; count3 < SIZE; count3++)
		dist[count3] = time[count3] * speed[count3];
	
	for (count3 = 0; count3 < SIZE; count3++)
	{
		cout <<"time:      "<< time[count3] << " ";
		cout <<"   speed:     "<< speed[count3] << " ";
		cout <<"   distance:  "<< dist[count3] << endl;
	}
	cout << "*****************************" << endl;

	return 0;
}

