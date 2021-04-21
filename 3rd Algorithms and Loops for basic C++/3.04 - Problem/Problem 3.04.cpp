/*
Số pi (ký hiệu: π) là một hằng số toán học có giá trị bằng tỷ số giữa chu vi của một đường tròn với đường kính của đường tròn đó. 
Hằng số này có giá trị xấp xỉ bằng 3.1415926535897. Nó được biểu diễn bằng chữ cái Hy Lạp π từ giữa thế kỷ XVIII.
Số pi có thể được tính xấp xỉ bằng công thức như sau:
Viết chương trình dùng công thức này để tính giá trị gần đúng của pi.
*/

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float t = 0;
	float s = 0;

	for (int i = 0; i <= n; i++)
	{
		t = t + pow(-1, i) / (2.0 * i + 1);
		s = 4 * t;
	}
	cout << s << "\n";
}


