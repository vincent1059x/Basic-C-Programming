// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

float calculate(int n)
{
	float s = 0;
	for (int i=1; i<=n; i++)
	{
	s = 1.0*sqrt(i + s);
	}
	return s;
}
int main()
{
	int i, n;
	cin >> n;
	cout << setprecision(3) << calculate(n);
}
