/*
Viết chương trình tính Kiểm tra một số có phải là số nguyên tố hay không. 
Số nguyên tố là số tự nhiên chỉ có hai ước số dương phân biệt là 1 và chính nó, nghĩa là chỉ chia hết cho 1 và chính nó. 
Các số có nhiều hơn 2 ước số dương được gọi là hợp số.
Do số 1 chỉ có một (1) ước số dương là chính nó, nên số 1 không phải là số nguyên tố và cũng không phải là hợp số.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int count = 0;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
			count++;
	}
	if (x == 1)
		cout << -1;
	if (count == 0)
		cout << 1;
	else
		cout << 0;
}





