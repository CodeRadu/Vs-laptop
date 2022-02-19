#include <iostream>
using namespace std;
struct punct
{
	float Ox;
	float Oy;
};
int main()
{
	punct A;
	cin >> A.Ox;
	cin >> A.Oy;
	if (A.Ox > 0)
	{
		if (A.Oy > 0)
			cout << "C I";
		else
			cout << "C IV";
	}
	else
	{
		if (A.Oy > 0)
			cout << "C II";
		else
			cout << "C III";
	}
	cout << endl << "=========================="<<endl;
	int n;
	cin >> n;
	punct p[100];
	int c1, c2, c3, c4;
	c1 = c2 = c3 = c4 = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i].Ox;
		cin >> p[i].Oy;
	}
	for (int i = 1; i <= n; i++)
	{
		if (p[i].Ox > 0)
		{
			if (p[i].Oy > 0)
				c1++;
			else
				c4++;
		}
		else
		{
			if (p[i].Oy > 0)
				c2++;
			else
				c3++;
		}
	}
	cout << endl;
	cout <<"c1:"<<c1 << " "<<"c2:" << c2 << " "<<"c3:" << c3 << " "<<"c4:" << c4;
}