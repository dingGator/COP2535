// Chapter 9 - Programming Challenge 2, Lottery Winners 
// This program uses a linear search to see if an entered winning 5-digit 
// lottery number matches the number on any of the player's tickets.

#include <iostream> 
using namespace std;
//prototypes 
int getInput(); 
void validate(int& n);
class Lottery 
{

private:
	int userNum;
	//lottery number the user entered
	bool win;
	//did the user win?
public:
	Lottery(); 
	void setUserNum(int); 
	void compare(const int[], const int); 
	void display();
}; /**************************Method Definitions************************/ 
Lottery::Lottery()
{
	win = false;
}
void Lottery::setUserNum(int n) 
{
	userNum = n;
}
void Lottery::compare(const int ticket[], const int SIZE) 
{
	for (int i = 0; i < SIZE; i++) 
	{ if (ticket[i] == userNum) win = true; }
}
void Lottery::display() 
{
	cout << endl << endl;
	if (win)
		cout << "Congratulations, you won!" << endl << endl;
	else
		cout << "Better luck next time." << endl << endl;
}

int main() {
	const int SIZE = 10; 
	int ticket[SIZE] = 
	{ 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
	int winningNum; //raw input from the user

	Lottery chance; //object of class Lottery 
	winningNum = getInput(); //move valid input value to the class
	chance.setUserNum(winningNum);
//compare values 
	chance.compare(ticket, SIZE);
//display results 
	chance.display();
return 0;
}
/*************************Function Definitions***************************/
int getInput() 
{
	int in; //variable to read into
	cout << "Please enter this week's 5-digit winning lottery number: "; 
	cin >> in;
	validate(in); 
	return in;
}
void validate(int& n) {
	while (n <= 0 || !cin) 
	{
		cin.sync(); cin.clear();
		cout << "Invalid input, try again: "; cin >> n;
	}
}