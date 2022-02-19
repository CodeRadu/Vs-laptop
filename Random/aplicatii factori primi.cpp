#include <iostream>
using namespace std;
int efactor(int nr,int fact)
{
    int p;
    int factor=2;
    while(nr>1)
    {
        p=0;
        while(nr%factor==0)
        {
            nr=nr/factor;
            p++;
        }
        if(p)
            if(factor==fact)
                return 1;
        factor++;
    }
    return 0;
}
int main()
{
    int a,b;
    int x;
    cin>>a>>b>>x;
    if(efactor(a,x)&&efactor(b,x))
        cout<<"DA";
    else
        cout<<"NU";
}
