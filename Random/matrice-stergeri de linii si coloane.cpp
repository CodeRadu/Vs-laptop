///jkbjkhj
/**
Pb 1

Se citeste o matrice A cu m linii si n coloane
cu elemente intregi. Se citeste un numar k
0<=k<=m
Sa se stearga linia k;



#include <iostream>
using namespace std;
int main()
{
    int i,j,m,n,k;
    int A[100][100];
    cin>>m>>n>>k;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }

    for(i=k+1;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           A[i-1][j]=A[i][j];
        }
    }
    m=m-1;
    cout<<endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


}
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j,m,n,k;
    int A[100][100];
    cin>>m>>n>>k;
    k=k-1;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }

    for(i=k+1;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         	A[i-1][j]=A[i][j];
        }

	}
	m = m -1;
	cout << endl<< "Afisare "<< endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<A[i][j] << " ";
        }
        cout << endl;
    }


/*
3 3 1
1 2 3
4 5 6
7 8 9


*/

}
