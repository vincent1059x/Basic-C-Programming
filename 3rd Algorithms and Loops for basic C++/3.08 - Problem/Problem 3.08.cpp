/*
Viết chương trình tính tổng các ước số của một số nguyên dương.
*/

#include <iostream>
using namespace std;
int main()

{
	int n, souoc;
	souoc = 0;
	int tong = 0;
	int i1 = 0;
	cin >> n;
	for (int i = 1; i < n; i++)
		if (n%i == 0)
		{
			souoc++;
			tong = tong + i;
		}
	cout << tong;
}






