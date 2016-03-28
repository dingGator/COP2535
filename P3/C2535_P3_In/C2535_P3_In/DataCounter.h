//Kim Lien Chu
//COP2535.0M1
#ifndef DATACOUNTER_H
#define DATACOUNTER_H


#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;
/***************************************
struct DataCounter
a 2 - dimensional array
to hold the counters for the survey.
*******************************/
struct DataCounter
{
	string name1;
	int likeCount;
	int dlikeCount;

	DataCounter(){};
	DataCounter(string str, int li, int disl);

};
#endif