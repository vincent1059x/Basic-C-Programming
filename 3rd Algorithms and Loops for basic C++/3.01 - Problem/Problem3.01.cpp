// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x;
	int tongsocap = 0;
	int KT = 1;
	cin >> x;
	for (int m = 3; m < x - 2; m++)
		for (int n = 2; n*n <= m; n++)
		{

			if (m%n == 0)
			{
				KT = 0;
				break;
			}

			else if (n + 1 > sqrt(m))
			{
				int t = m - 2;
				for (int p = 2; p <t; p++)
				{

					if (t%p == 0)
					{
						KT = 0;
						break;
					}
					else if (p + 2>t)
					{
						cout << t << ", " << m << endl;
						tongsocap++;
					}

				}

			}
		}
	cout << "Tong: " << tongsocap << " cap so sinh doi < " << x;
	return 0;
}

