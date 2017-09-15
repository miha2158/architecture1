#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	string inp;
	{
	ifstream fin("input.txt");
	fin.seekg(0, fin.end);
	int finLength = fin.tellg();
	char* inpC = new char[finLength];
	fin.seekg(0, fin.beg);

	fin.read(inpC, finLength);
	inp = string(inpC);
	delete[] inpC;
	}

	istringstream iss(inp);
	vector<string> tokens{istream_iterator<string>{iss},
                      istream_iterator<string>{}};
		
	for (auto token : tokens)
		cout << token << endl;
	cout << endl;



	cin.get();
    return 0;
}

