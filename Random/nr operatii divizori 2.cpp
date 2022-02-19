#include <iostream>
using namespace std;
int main()
{
    int nr;
    cin>>nr;
    int factor=2;
    int putere=0;
    int k=0;
    int max=-1;int nroperatii=0;
    int nrdiv=1;
    while(nr>1)
    {

        while(nr%factor==0)
        {
            nroperatii++;
            nr=nr/factor;
            putere++;
        }
        if(putere%2==1)
            k++;
        if(putere>max)
            max=putere;
        if(putere!=0)
            nrdiv=nrdiv*(putere+1);

        putere=0;
        factor++;
    }
    cout<<nrdiv<<endl<<nroperatii;
}

