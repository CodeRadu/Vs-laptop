#include <iostream>
using namespace std;
void sterglin(int A[][20], int& lin, int col, int k)
{
	lin++;
	for(int i = lin; i >k; i--)
		for (int j = 0; j < col; j++)
			A[i][j] = A[i-1][j];
	
}
void schimbarelinii(int A[][20], int lin, int col, int l1, int l2)
{
	int j;
	for (j = 0; j <col; j++)
		swap(A[l1][j], A[l2][j]);
}
int main()
{
	int A[20][20];
	int lin, col;
	int i, j;
	int k;
	int x;
	


	cin >> lin >> col;
	cin >> k;
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
			cin >> A[i][j];
	}
	cout << endl;
	sterglin(A,lin,col,k);
	for(i=0;i<lin-1;i++)
		if (i == k)
		{
			for (j = 0; j < col; j++)
				cin >> A[i][j];
		}
	schimbarelinii(A,lin,col,k,k-1);
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
			cout << A[i][j]<<" ";
		cout << endl;
	}

}

