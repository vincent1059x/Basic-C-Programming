/*
Viết chương trình kiểm tra số đối xứng (palindrome). 
Định nghĩa: Số đối xứng là một số tự nhiên mà khi đảo ngược các chữ số vẫn không thay đổi, ví dụ: số 16461 là số đối xứng.
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int temp = x;
	int count = 0;

	while (temp != 0)
	{
		temp = temp / 10;
		count++;
	}
	count--;
	temp = x;
	int tachso = 0;
	int sodao = 0;

	while (temp != 0)
	{
		tachso = temp % 10;
		sodao = sodao + tachso*pow(10, count);
		temp = temp / 10;
		count--;
	}
	if (sodao == x)
		cout << "true";
	else
		cout << "false";
}

