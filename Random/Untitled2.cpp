/**
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int rest;
    int op=0;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
            op++;
        }
        else
        {
            b=b-a;
            op++;
        }
    }
    cout<<"cmmdc="<<a;
    cout<<endl<<"nr de operatii:"<<op;


}
*/
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int rest;
    int op=0;
    while(b!=0)
    {
        rest=a%b;
        a=b;
        b=rest;
        op++;
    }
    cout<<"cmmdc="<<a;
    cout<<endl<<"nr de operatii:"<<op;
}
