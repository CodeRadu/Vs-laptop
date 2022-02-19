#include <iostream>
using namespace std;
void cel_mai_mare_nr_mai_mic_ca_n(int &n)
#include "transformari in baza 2.cpp";
{
    int e = -1;
    long long p=1;
    while (p <= n)
    {
        p = p * 2;
        e++;
    }
    cout<<"2^"<<e<<" + ";
    n=n-p/2;
    if(n>0)
    cel_mai_mare_nr_mai_mic_ca_n(n);


}
int main()
{
    int n;
    cin>>n;
    cel_mai_mare_nr_mai_mic_ca_n(n);
    cout<<'\b\b  ';
    long long  q=100;
    while(q)
    {
           cout<<"\a";
           q--;
    }


}
