#include <iostream>
using namespace std;

void adaugareLinie(int A[20][20], int lin, int col, int k, int n)
{
	int i, j;
	for (i = lin; i > k; i--)
	{
		for (j = 0; j < col; j++)
			A[i][j-1] = A[i][j];
	}
}



int main()
{
	int A[20][20];
	int lin, col;
	int i, j;
	int k;
	cin >> lin >> col;
	cin >> k;
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
			cin >> A[i][j];
	}
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
			cout << A[i][j];
	}

}