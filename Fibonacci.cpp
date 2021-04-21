// ConsoleApplication22.cpp : Defines the entry point for the console application.
//
/*
Viết chương trình nhập vào số nguyên x sao cho 1 ≤ x ≤ 30. 
Nếu x không thỏa điều kiện, chương trình xuất ra màn hình thông báo “So <x> khong nam trong khoang [1,30].”. 
Nếu x nằm trong khoảng [1,30], chương trình xuất ra màn hình số Fibonacci thứ x.
*/

//Cách 1: Sử dụng hàm

#include "stdafx.h"
#include <iostream>
using namespace std;

int Fibonacci(int n)
{
	int a1 = 1, a2 = 1;
	if (n == 1 || n == 2)
		return 1;
	int a;
	for (int i=3; i <= n; i++)
	{
		a = a1 + a2;
		a1 = a2;
		a2 = a;
	}
	return a;
}
int main()
{
	int n;
	cin >> n;
	if (n < 1 || n>30)
		cout << "So " << n << " khong nam trong khoang[1,30].";
	else
		cout << "So Fibonacci thu " << n << " la: " << Fibonacci(n);
	return 1;
}





