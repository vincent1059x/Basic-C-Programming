/*
Giếng ma thuật
Bạn đang đứng trước một cái giếng ma thuật, trên đó có ghi 2 số nguyên dương a và b. 
Mỗi lần ném một viên sỏi xuống giếng, nó sẽ trả về cho bạn a*b đồng tiền vàng, sau đó a và b sẽ tăng lên 1. 
Vậy nếu bạn có n viên sỏi thì sẽ kiếm được bao nhiêu đồng tiền vàng?
Ví dụ: Cho a = 1, b = 2 và n = 2, output của bài toán là 8, vì sau khi ném viên sỏi thứ nhất bạn sẽ có được 2 đồng tiền vàng, 
sau đó a tăng lên là 2 và b tăng lên là 3, khi ném đến viên thứ 2 thì cái giếng sẽ trả về cho bạn thêm 6 đồng tiền vàng nữa, 
như vậy cả thảy sẽ được 8 đồng.

*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, n;
	cin >> a >> b;
	cin >> n;
	int tong = 0;

	for (int i = 1; i <= n; i++)
	{
		tong = tong + a*b;
		a++;
		b++;
	}

	cout << tong << "\n";

}





