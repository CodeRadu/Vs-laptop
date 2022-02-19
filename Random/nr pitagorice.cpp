#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b;
    int c;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        for(int j=i+1;j<=b;j++)
        {
            c=sqrt(i*i+j*j);
            if(c*c==i*i+j*j)
                cout<<i<<" "<<j<<" "<<c<<endl;
        }
    }
}
