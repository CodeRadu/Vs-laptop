#include <iostream>
using namespace std;
int main()
{

    long long n;
    cin>>n;
    int v[100];
    int i=1;
    while(n)
    {
        v[i]=n%10;
        i++;
        n=n/10;
    }
    i=i-1;
    cout<<"i ="<<i<<endl;

    for(int j=1;j<=i;j++)
        cout<<v[j];
    cout<<endl;




    for(int j=1;j<=i-1;j++)
        for(int k=j+1;k<=i;k++)
        if(v[j]<v[k])
            swap(v[k],v[j]);

    for(int j=1;j<=i;j++)
        cout<<v[j];
    cout<<endl;



   int a=i;
   int y=0;
   int p=10000000;
   int q=1;
    for(int t=1;t<=i;t=t+2)
    {
        y=y+p*v[t]+q*v[t+1];
        a--;
        q=q*10;
        p=p/10;
       cout<<y<<endl;

    }
    cout<<y;


}
