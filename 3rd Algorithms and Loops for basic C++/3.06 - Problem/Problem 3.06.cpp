/*
Viết chương trình tính 3 tổng sau:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double s1 = 0, s2 = 1, S2 = 0;
	float s3 = 0;
	int m = 0;
	int mu = 1;
	for (int i = 1; i <= n; i++)
	{
		s1 = s1 + pow(i, mu);
		mu++;

		s2 = s2*i;
		S2 = S2 + s2;

		m = m + i;
		s3 = s3 + 1.0 / m;
	}

	cout << s1 << "\n";
	cout << S2 << "\n";
	cout << s3 << "\n";

	return 0;
}




