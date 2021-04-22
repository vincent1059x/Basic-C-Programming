// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int reverse(int n)
{
	int sodao, res = 0;
	while (n != 0)
	{
		sodao = n % 10;
		n = n / 10;
		res = res * 10 + sodao;
	}
	return res;


int main()
{
	int n;
	cin >> n;
	cout << reverse(n);
}
