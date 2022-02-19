#include <iostream>

using namespace std;
struct punct
{
	float ox;
	float oy;
	float m2;
	float md()
	{
		return((ox * ox + oy * oy));
	}	
};
int main()
{
	punct A;
	cin >> A.ox >> A.oy;
	A.m2 = A.md();
	punct B;
	cin >> B.ox >> B.oy;
	B.m2 = B.md();
	cout << "punctul situat cel mai aproape de origine are coordonatele:" << endl;
	if (A.m2 > B.m2)
		cout << B.ox << " " << B.oy << endl;
	else
		cout << A.ox << " " << A.oy << endl;
	cout << "==========================" << endl;
	int n;
	cin >> n;
	punct p[100];
	int maxi = 0;
	punct X;
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i].ox >> p[i].oy;
		p[i].m2 = p[i].md();
		if (p[i].m2 > maxi)
		{
			maxi = p[i].m2;
			X.ox = p[i].ox;
			X.oy = p[i].oy;
		}
	}
	cout << X.ox<<" "<<X.oy;



}