// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cmath>
using namespace std;

int sum_common_prime(int a, int b)
{
	int tong = 0;
	if (a < 2000000000 && b < 2000000000 && a>00 && b>0) {
		//tinh uoc cac so lon
		if (a > 10 && b > 10) {
			for (int i = 3; i <= min(a, b) / 2; i += 2)
				if (min(a, b) % i == 0 && max(a, b) % i == 0)
				{
					bool inguyento = true;
					for (int j = 2; j <= sqrt(i); j++) if (i % j == 0) { inguyento = false; }
					if (inguyento) tong += i;
				}
			if (min(a, b) % 2 == 0 && max(a, b) % 2 == 0) tong += 2;
			if (max(a, b) % min(a, b) == 0) //check min cua a va b co phai so nguyen to
			{
				bool inguyento = true;
				for (int j = 2; j <= sqrt(min(a, b)); j++) if (min(a, b) % j == 0) { inguyento = false; }
				if (inguyento) tong += min(a, b);
			}
		}
		//uoc so nho
		else {
			for (int i = 2; i <= min(a, b); i++)
				if (min(a, b) % i == 0 && max(a, b) % i == 0)
				{
					bool inguyento = true;
					for (int j = 2; j <= sqrt(i); j++) if (i % j == 0) { inguyento = false; }
					if (inguyento) tong += i;
				}
		}
		if (tong > 1) {}
		else tong = -1;
	}
	return tong;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}

