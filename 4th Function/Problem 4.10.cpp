// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int Input()
{
	int n;
	cin >> n;
	return n;
}

int sum_even_divisor(int n)
{
	long S = 0;	
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i % 2 == 0)
				S = S + i;	
		}
	}
	if (S > 0)
		return S;
	else
		return -1;
}

int main()
{
	int n;
	n = Input();
	cout << sum_even_divisor(n);
}

