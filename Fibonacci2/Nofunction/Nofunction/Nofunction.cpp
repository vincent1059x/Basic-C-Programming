// Nofunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 1 || n>30)
		cout << "So " << n << " khong nam trong khoang [1,30]." << "\n";
	else if (n == 1 || n == 2)
		cout << 1;
	else
	{
		int a1 = 1, a2 = 1, a;
		for (int i = 3; i <= n; i++)
		{
			a = a1 + a2;
			a1 = a2;
			a2 = a;
		}
		cout << a;
	}
	return 0;
}


