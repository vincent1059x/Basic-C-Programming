// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int input(int& b)
{
	cin >> b;
	return b;
}
int input()
{
	int a;
	cin >> a;
	return a;
}
int TongUocChung(int a, int b)
{
	int count = 0;
	int sum = 0;

	if (a >= b)
	{
		for (int i = 1; i <= b; i++)
		{
			if (a%i == 0 && b%i == 0)
			{
				count++;
				sum = sum + i;
			}
		}
		if (count >= 1)
			return sum;
	}
	else
	{
		for (int i = 1; i <= a; i++)
		{
			if (a%i == 0 && b%i == 0)
			{
				count++;
				sum = sum + i;
			}
		}
		if (count >= 1)
			return sum;
	}
}

int main() {
	int a, b;
	a = input();
	input(b);
	std::cout << TongUocChung(a, b);
	return 0;
}

