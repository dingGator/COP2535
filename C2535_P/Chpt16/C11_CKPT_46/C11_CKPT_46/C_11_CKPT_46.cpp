#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
	Base() { cout << "entering the base.\n"; }
	Base(string str)
	{
		cout << "This base is "<< str<< ".\n";
	}
	~Base(){ cout << "leaving the base.\n"; }
};

class Camp :public Base
{
public:
	Camp(){ cout << "Entering the camp.\n"; }
	Camp(string str1, string str2) : Base(str1)
	{
		cout << "The camp is  " << str2 << ".\n";
	}
	~Camp(){ cout << "Leaving the camp.\n"; }
};
int main()
{
	Camp outpost("secure", "secluded");
	return 0;
}