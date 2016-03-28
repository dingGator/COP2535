//Kim Lien Chu
//COP2535.0M1
#ifndef LINKNODE_H
#define LINKNODE_H
#include <vector>
#include <iostream>
#include <string>

//#include "ListNode.h"
using namespace std;
class ListNode
{
public:
	ListNode(double v, ListNode *p)
	{
		value = v; next = p;
	}
private:
	double value;
	ListNode *next;
	friend class LinkedList;      // LinkedList has friend status	
};


#endif