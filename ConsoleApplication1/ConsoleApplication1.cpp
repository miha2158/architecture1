#include "stdafx.h"
#include <iostream>

long long fItt(long long n)
{
	long long result = 1;
	for (; n >= 1; n--)
		result *= n;
	return result;
}

long long fRec(long long n)
{
	if (n == 0)
		return 1;
	return n*fRec(n - 1);
}

using namespace std;

int main()
{
	int number;
	cout << "input the number to factorial" << endl;
	cin >> number;

	cout << fRec(number) << " - recursion" << endl;
	cout << fItt(number) << " - itteration" << endl;

	cin.get();
	cin.get();
    return 0;
}

