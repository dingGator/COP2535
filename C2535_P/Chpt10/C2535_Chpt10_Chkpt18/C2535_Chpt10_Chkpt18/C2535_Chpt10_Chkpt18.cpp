#include <iostream>
using namespace std;
struct Rectangle
{
	int length =10;
	int width =11;
	int *area ;

};
int main()
{	//10.18
	//Rectangle *rptr;
	//10.19
	Rectangle rect1;

	cout << "  *rect1.area  " << *rect1.area << endl;
	//cout << *rect1.area;
	//cout << rptr->length << endl << rptr->width << endl;
	return 0;
}