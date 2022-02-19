#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int putere1=0;
    int putere2=0;
    int factor=2;
    int k=0;
    while(a>1&&b>1)
    {
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

        if(putere1==putere2&&putere1)
        {
            cout<<factor<<" la puterea "<<putere1;
            cout<<endl;
            k++;
        }
        factor++;
        putere1=putere2=0;
    }
    if(k==0)
        cout<<"Nu avem factori primi comuni la aceeasi putere";
}
/***
120
45
=====
26
15
*/

