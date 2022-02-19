#include <iostream>
#include <limits>
using namespace std;
struct interval
{
	float a, b;
};
int main()
{
	int n;
	cin >> n;
	interval I[100],IN={-FLT_MAX,FLT_MAX};
	for (int i = 0; i <= n-1; i++)
	{
		cin >> I[i].a >> I[i].b;
		if (I[i].a > IN.a)
			IN.a = I[i].a;
		if (I[i].b <IN.b)
			IN.b= I[i].b;
	}
	cout << "[" << IN.a << "," <<IN.b << "]";
}