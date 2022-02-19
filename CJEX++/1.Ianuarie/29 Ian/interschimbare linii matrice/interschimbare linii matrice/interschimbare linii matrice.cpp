#include <iostream>
using namespace std;

void schimbarelinii(int A[][20],int lin, int col, int l1, int l2)
{
	int j;
	for (j = 1; j <= col; j++)
		swap(A[l1][j], A[l2][j]);
}
void schimbarecoloane(int A[][20], int lin, int col, int c1, int c2)
{
	int i;
	for (i = 1; i <= lin; i++)
		swap(A[i][c1], A[i][c2]);

}

int main()
{
	int A[20][20];
	int lin, col, l1, l2, c1, c2, i, j;
	//l1,l2,c1,c2 liniile/coloanele pe care vreau sa le schimb
	cout << "liniile pe care doriti sa le schimbati:"<<endl;
	cin >> l1 >> l2;
	cout << "coloanele pe care doriti sa le schimbati:"<<endl;
	cin >> c1 >> c2;
	cout << "nr de linii si coloane:"<<endl;
	cin >> lin >> col;
	cout << endl;
	for (i = 1; i <= lin; i++)
	{
		for (j = 1; j <= col; j++)
			cin >> A[i][j];
	}
	cout << endl;
	
	

	schimbarelinii(A, lin, col, l1, l2);
	cout << "schimbare linii:"<<endl;
	for (i = 1; i <= lin; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (A[i][j] < 10)//ca sa arate frumos:)
				cout << A[i][j] << "  ";
			else cout<< A[i][j] << " ";
		}
			
		cout << endl;
	}

	cout << endl;
	schimbarecoloane(A, lin, col, c1, c2);
	cout << "schimbare coloane:"<<endl;
	for (i = 1; i <= lin; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (A[i][j] < 10)
				cout << A[i][j] << "  ";
			else cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

