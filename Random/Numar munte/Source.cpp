#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		int copiex = x;
		int flag = 0;
		while (x > 9 && x % 10 < x / 10 % 10)
		{
			x = x / 10;
		}
		if (copiex == x||x<10)
			flag = 1;
		while (x > 9 && x % 10 > x / 10 % 10)
			x = x / 10;
		if (x > 9)
			flag = 1;
		if (flag == 1)
			cout << 0<<endl;
		else cout << 1<<endl;
	}
	
}