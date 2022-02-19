#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=0;
    while(n%2==0)
    {
        n=n/2;
        p++;
    }
    if(p)
        cout<<2<<" la puterea "<<p<<endl;
    int factor=3;
    while(n>1)
    {
        p=0;
        while(n%factor==0)
        {
            n=n/factor;
            p++;
        }
        if(p)
            cout<<factor<<" la puterea "<<p<<endl;
        factor=factor+2;
        if(factor*factor>n)
            factor=n;
    }

}
