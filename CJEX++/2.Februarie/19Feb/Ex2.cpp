#include <iostream>
using namespace std;
int cif1(int nr)
{
    while(nr)
    {
        if( (nr & 1) == 0)
            return 0;
        nr = nr >> 1;
    }
    return 1;
}
int main()
{
    int n;  
    cin >> n;
    int x;
    int k=0;
    int maxi=0;
    for(int i=1;i<=n;i++)
    {
         cin>>x;
         if(cif1(x))
            k++;
         else 
        {
            if(k>maxi)
            maxi=k;
            k=0;
        } 
    }
    ///verificam ultima secventa
    cout<<max(k,maxi);
}