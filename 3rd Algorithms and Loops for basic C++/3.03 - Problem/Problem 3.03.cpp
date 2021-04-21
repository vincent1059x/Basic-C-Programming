/*
Tính tổng các chữ số của số nguyên dương n.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, tachso, tong(0);
	cin >> n;
	while (n != 0)
	{
		tachso = n % 10;
		n = n / 10;
		tong = tong + tachso;
	}
	cout << tong;
	return 0;
}

