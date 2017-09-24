#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>


#define flag true;

using namespace std;

int main()
{

#if flag
	cout << "Enter sequence" << endl << "* should be the end of it" << endl;
#else
	ifstream fin("input.txt");
#endif

	long sum = 0;
	long possum = 0;
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
		
		if (num < 0)
		{
			if (num > maxmin)
				maxmin = num;
		}
		else possum += num;
	}
	while (true);

	cout << endl << maxmin << endl << possum << endl << sum << endl;

#if flag
#else
	fin.close();
#endif

	cin.get();
	cin.get();
    return 0;
}