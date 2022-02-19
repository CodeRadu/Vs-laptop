#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
# include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
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
    int maxi;
    for(int i=1;i<=n;i++)
    {
         cin>>x;
         if(cif1(x))
            k++;
         else 
        {
            maxi=k;
            k=0;
        }

    }
    cout<<maxi;

}