#include <iostream>
using namespace std;

int prima_cifra (int x) {
    while (x > 9) {
        x = x / 10;
    }
    return x;
}


int main()
{
    int n, v[1000], i,ct=0;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>v[i];

    for(i=1; i<=n/2; i++)
        {
        if(prima_cifra(v[i]) != prima_cifra(v[n+1-i]))
            ct++;
        }
cout << ct;
}