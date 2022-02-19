///3933 zero unu
/**#include <iostream>
using namespace std;
int main()
{
    int n,cif;
    cin>>n;
    int u,z,flag;
    u=z=flag=0;
    while(n&&flag==0)
    {
        cif=n%10;
        if(cif==0)
            z++;
        else if(cif==1)
            u++;
        else flag=1;

        n=n/10;
    }
    if(u>=1&&z>=1&&flag==0)cout<<"da";
    else cout<<"nu";

}
*/


///2872 easy pow
/**
#include <iostream>

using namespace std;

int main()
{

/**1
0
1
0
1
1

1=0*10+1
11=1*10+1
110=11*10+0
1101=110*10+1
11010
110101


    int n;
    cin>>n;
    int i=1;
    int cif;
    int P=1;
    int aux=0,j=1;
    while(i<=n)
    {
        P=P*2;
        i++;
    }

    while(P!0)
    {
        cif=P%2;
        aux=aux*j+cif;
        j=j*10;
        P=P/2;
    }
    cout <<aux;

}*/
///654
#include <iostream>
using namespace std;
int main()
{

    int n,k=0;
    cin>>n;
    while(n>1)
    {
        if(n%2==0)
        {
            n=n/2;
            k++;
        }
        else
        {
            n=3*n+1;
            k++;
        }
    }
    cout<<k+1;
}
