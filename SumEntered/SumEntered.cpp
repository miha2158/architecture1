#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>


#define flag true;

using namespace std;

int main()
{

#if flag
	cout << "Enter sequence" << endl;;
#else
	ifstream fin("input.txt");
#endif

	long sum = 0;
	int maxmin = INT32_MIN;

	do
	{
		string p;
#if flag
		cin >> p;
#else 
		fin >> p;
#endif
		if (p == "*")
			break;

		int num = stoi(p);
		sum += num;
		
		if (num < 0 && num > maxmin)
			maxmin = num;
	}
	while (true);

	cout << maxmin << endl << sum << endl;

#if flag
#else
	fin.close();
#endif

	cin.get();
	cin.get();
    return 0;
}

