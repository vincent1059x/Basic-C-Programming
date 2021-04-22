// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int sum_all_square(int n)
{
	int s = 0;

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= i; j++)
		{
			if (j*j == i && n%i==0)
				s = s + i;
		}
	}
	return s;
}

int main() {
	int n;
	cin >> n;
	cout << sum_all_square(n);
}

