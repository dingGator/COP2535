//Kim Lien Chu
//COP2535.0M1
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <vector>
#include <iostream>
#include <string>

#include "LinkNode.h"
using namespace std;
class LinkedList
{
public:
	void add(double x);
	bool isMember(double x);
	LinkedList() { head = NULL; }
	void print();
	void rPrint(){ rPrint(head); }
	~LinkedList();
	void remove(double x);
	void reverse();
	int search(double x);
	void insert(double x);
private:
	ListNode *head;
	static void rPrint(ListNode *pList);
};

#endif