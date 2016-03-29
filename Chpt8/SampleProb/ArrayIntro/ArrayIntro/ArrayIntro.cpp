//Debbie Reid //Array introduction //Find the average height of students in the class
#include<iostream> 
using namespace std;
int main() {
	//variables 
	int studentHeight[10];
	//prompt the user for data 
	for (int i = 0; i < 10; i++) 
	{ 
		cout << "Enter a height: "; 
		cin >> studentHeight[i];
	}
	//display the values 
	cout << endl << endl;
	for (int j = 0; j < 10; j++) {
		cout << "Height of element [" << j << "] is: " << studentHeight[j]
			<< endl;
	}
	return 0;
}
