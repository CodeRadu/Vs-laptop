#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    int factor=2;
    int putere1;
    int putere2;
    putere1=putere2=0;
    int factor_max=-1;
    int putere_max=-1;
    while(a>1||b>1)
    {
        putere1=putere2=0;
        while(a%factor==0)
        {
            a=a/factor;
            putere1++;
        }
        while(b%factor==0)
        {
            b=b/factor;
            putere2++;
        }
        if(putere1==putere2&&putere1&&putere2)
        {
            if(factor_max<factor)
                factor_max=factor;
                putere_max=putere1;
        }
        factor++;
    }
    if(factor_max==-1)
    {
        cout<<"Nu exista factori comuni";
    }
    else
        cout<<factor_max<<"^"<<putere_max;
}
