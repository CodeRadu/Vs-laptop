/**oricare 2 elemente ale sirului sunt diferite
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned A[501];
    int i,j=0,n;
    int flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]==A[j])
            {
                flag=1;
            }
        }
    }

    if(flag==1) cout<<"NU";
    else cout<<"DA";
}
