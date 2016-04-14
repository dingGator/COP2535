//Kim Lien Chu
//COP2535.0M1
#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

/*******************************************
class DisplayRep
display report header
* *********************************************************/
class EmployeeInfo
{
	friend class IntBinaryTree;
	int empIDNum;
	EmployeeInfo *left;
	EmployeeInfo *right;
	EmployeeInfo(int empIDNum1, EmployeeInfo *left1 = NULL,
		EmployeeInfo *right1 = NULL)
	{
		empIDNum = empIDNum1;
		left = left1;
		right = right1;
	}
	

};

#endif
