
/*


#include <iostream>
using namespace std;
int main()
{

	int v[100];
	int n;
	cin >> n;
	int i;
	for (i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	for (i = 1; i <= n-1; i++)
	{
		for (int j = i + 1; j <= n ; j++)
			if (v[j] < v[i])
				swap(v[i], v[j]);
	}
	for (i = 1; i <= n; i++)
	{
		cout << v[i] << " ";
	}
}
/*
4
 1 4 3 2


 1 4 3 2

*/


/*

#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	int k=0;

	cin >> a >> b;
	cin >> c >> d;

	int maxi = min(b, d);
	int mini = max(a, c);
	int v[1000];

	for (int i = mini; i <= maxi; i++)
	{
		if (i <= b && i <= d)
		{
			cout << i<<" ";
			k++;
		}

	}
	if (k == 0)
		cout << "nu exista elemente comune";

}

*/
///cout<<i<<" ";

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cifra;
	int p = 1;
	int k;
	cin >> k;
	int nou = 0;
	while (n)
	{
		cifra = n % 10;
		if (cifra >= k)
		{
			nou = nou + cifra * p;
			p = p * 10;
		}
		
		n = n / 10;
	}
	cout << nou;



}