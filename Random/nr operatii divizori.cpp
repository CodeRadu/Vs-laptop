#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int nroperatii=0;
    int nrdiv=2;
    for(int d=2; d<=x/2; d++)
    {
        nroperatii++;
        if(x%d==0)
        {
            nrdiv++;
            nroperatii++;
        }

    }
    cout<<nrdiv<<endl;
    cout<<nroperatii;



}
