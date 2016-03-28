#include <string>
#include <iostream>

using namespace std;

template <class T>
T minimum(T arr[], int size)
{
	T smallest = arr[0];
	for (int k = 0; k < size; k++)
	{
		if (arr[k] < smallest)
			smallest = arr[k];
	}
	return smallest;
}
int main()
{
	int arr1[] = { 40, 20, 35 };
	cout << "  The min num " << minimum(arr1, 3)
		<< endl;
	string arr2[] = { "zoe", "snoopy", "bob", "waldo" };
	cout << " the min string  " << minimum(arr2, 4)
		<< endl;
	return 0;
}