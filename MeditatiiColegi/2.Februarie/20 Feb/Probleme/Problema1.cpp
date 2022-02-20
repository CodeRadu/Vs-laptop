#include <iostream>
using namespace std;
//  😀👍 ⚠️     
int nr_cif_zero(int n)
{
    int cif, ct=0;
    while(n)
    {
        cif=n%10;
        if(cif==0)
            ct++;
        n/=10;
    }
    return ct;
}

int main () {
    int n;
    cin >> n;
    cout << nr_cif_zero(n);
}
