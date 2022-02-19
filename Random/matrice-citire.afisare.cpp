#include <iostream>
using namespace std;
int main()
{
    int A[100][100];
    int n,m;
    int i,j;
    cin>>m;
    cin>>n;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<endl;
    cout<<"////Afisare normala"<<endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"//////////////parcurgere pe coloane"<<endl;
    for(j=0; j<n; j++)
    {
        for(i=0; i<m; i++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"////////////////////PSSL serpuita"<<endl;
    for(i=0; i<m; i++)
    {
        if(i%2==0)
        {
            for(j=0; j<n; j++)
            {
                cout<<A[i][j]<<" ";
            }
        }
        else
            for(j=n-1; j>=0; j--)
            {
                cout<<A[i][j]<<" ";
            }
        cout<<endl;
    }
    cout<<"////////////////////PSSL serpuita inversa"<<endl;
    for(i=m-1;i>=0;i--)
    {
        if(i%2==0)
        {
            for(j=n-1;j>=0;j--)
             cout<<A[i][j]<<" ";
        }
        else
            for(j=0;j<n;j++)
             cout<<A[i][j]<<" ";
    }




}
