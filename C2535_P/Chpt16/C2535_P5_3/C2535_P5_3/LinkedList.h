//Kim Lien Chu
//COP2535.0M1
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <vector>
#include <iostream>
#include <string>

//#include "LinkNode.h"
using namespace std;
class ListNode
{
public:

	ListNode();
	ListNode(string v, ListNode *p = NULL)
	{
		value = v; next = p;
	}
	ListNode *head;

	string value;
	ListNode *next;
	friend class LinkedList;      // LinkedList has friend status	
};

class LinkedList
{
public:
	void add(string x);
	bool isMember(string x);
	LinkedList() { head = NULL; }
	void print();
	void rPrint(){ rPrint(head); }
	~LinkedList();
	void remove(string x);
	void reverse();
	int search(string x);
	void insert(string x, int pos);
	void addToEndList(string x);
	void removeBeginList();
	void removeEndList();




	ListNode *head;
	static void rPrint(ListNode *pList);
};
#endif