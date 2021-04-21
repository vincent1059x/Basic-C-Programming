/*
Viết chương trình tính 3 tổng sau:
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
	int x, n;
	cin >> n;
	cin >> x;


	int lt = 1;
	double s = 1;
	double lt1 = 1;
	double s1 = 1;
	float s2 = 1, T2 = 1;


	for (int i = 1; i <= n; i++)
	{
		lt = lt*x;
		s = s + lt;

		lt1 = lt1*x*x;
		s1 = s1 + lt1;

		T2 = T2 * i;
		s2 = s2 + (float)lt / T2;
	}
	cout << s << "\n";
	cout << s1 << "\n";
	cout << s2 << "\n";
}



