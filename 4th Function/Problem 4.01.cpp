// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int gcd(int a, int b)
{
	if (a == 0 || b == 0) 
	{
		return a + b;
	}
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << int gcd(a, b);
}
