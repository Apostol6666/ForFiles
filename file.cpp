#include "pch.h"
#include <iostream>
#include "head.h"
#include <fstream>
#include <string>
#include "windows.h"

using namespace std;

int Data::CompleteFiles() {
	string buffer;
	string buff;

	ifstream name;
	name.open("all_files.txt");
	if (!name.is_open()) {
		cout << "Main file not open";
		return -1;
	}

	ifstream date;
	ofstream get("all_data.999");

	while (!name.eof()) {
		getline(name, buffer);
		getD(buffer, get);
	/*	date.open(buffer);
		if (!date.is_open()) {
			cout << "Files not open";
			return -2;
		}
		while (!date.eof()) {
			getline(date, buff);
			get << buff << endl;
		} */
	}

	name.close();
}

void Data::getD(string buffer, ofstream &get) {
	ifstream on;
	string buff;
	on.open(buffer);

	while (on.eof()) {
		getline(on, buff);
		get << buff << endl;
	}

}


void Data::AllNames(){
ofstream names;
names.open("all_files.txt");

string s = "C:\\";

WIN32_FIND_DATA FindFileData;
HANDLE files;

files = FindFirstFile("VOB/*.999", &FindFileData);

if (files != INVALID_HANDLE_VALUE) {
	do {
		s = s + FindFileData.cFileName;
		names << s << endl;
		cout << "s File" << s << endl;
		s = "C:\\";
	} while (FindNextFile(files, &FindFileData) != 0);
	FindClose(files);
	}

names.close();

system("pause");
}

