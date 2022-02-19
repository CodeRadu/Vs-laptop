/**
Se citesc n numere naturale, pentru fiecare numar
afisati cea mai mica cifra impara.Daca nu are cifre impare afisati "Nu are cifre impare"
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cmin=10;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        cmin=10;
        while(x)
        {
            int uc=x%10;
            if(uc<cmin&&uc%2==1)
                cmin=uc;
            x=x/10;
        }
         if(cmin==10)
        cout<<"Nu are cifre impare"<<endl;
        else  cout<<cmin;
    }
}
