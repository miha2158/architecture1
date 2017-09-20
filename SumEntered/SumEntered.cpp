#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter sequence";

	long sum = 0;
	int maxmin = INT32_MIN;

	do
	{
		string p;
		cin >> p;
		if (p == "*")
			break;

		int num = stoi(p);
		sum += num;
		
		if (num < 0 && num > maxmin)
			maxmin = num;
	}
	while (true);

	cout << maxmin << endl << sum << endl;

	cin.get();
	cin.get();
    return 0;
}

