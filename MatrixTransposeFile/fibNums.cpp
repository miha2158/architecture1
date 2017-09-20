#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

void fibcalc(int* i0, int* i1, int* i2)
{
	int temp = *i1 + *i0;
	*i2 = *i1;
	*i1 = *i0;
	*i0 = temp;
}

int main()
{
	
	cout << "¬ведите значение до которого вычисл€ть" << endl;

	int max;
	cin >> max;

	int a = 2, b = 1, c = 1;

	do
	{
		cout << a << " ";
		fibcalc(&a, &b, &c);
	}
	while (a < max);

	cout << a << endl;

	cin.get();
	cin.get();
    return 0;
}