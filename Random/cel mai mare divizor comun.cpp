#include <iostream>
using namespace std;
int main()
{
    int a,b,r;
    cin>>a>>b;
    cout<<endl;

    while(a%b!=0)
    {

        r=a%b;
        cout<<"r"<<r<<endl;
        a=b;
        cout<<"a"<<a<<endl;
        b=r;
        cout<<"b"<<b<<endl;
        cout<<"/////////";
    }
    cout<<b;
}
