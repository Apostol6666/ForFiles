#ifndef _FILE_H
#define _FILE_H
#include <fstream>

using namespace std;

class Data {
private: 
	int time;
	char s;
public:
	Data() {}
	void AllNames();
	int CompleteFiles();
	void getD(string buffer, ofstream &get);

};
