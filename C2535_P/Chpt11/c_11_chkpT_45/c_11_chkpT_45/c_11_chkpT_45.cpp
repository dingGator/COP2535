#include <iostream>
using namespace std;
class Base
{
public:
	Base() { cout << "entering the base.\n"; }
	~Base(){ cout << "leaving the base.\n"; }
};

class Camp :public Base
{
public:
	Camp(){ cout << "Entering the camp.\n"; }
	~Camp(){ cout << "Leaving the camp.\n"; }
};
int main()
{
	Camp outpost;
	return 0;
}