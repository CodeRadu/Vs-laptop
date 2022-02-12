#include <iostream>
using namespace std;


int main()
{
    int n, v[1000], i,s = 0, aux,copie;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>v[i];
    cout << endl;
    
    for (i=1; i<=n; i++) {
        copie = v[i];
        
        while (copie) {
            aux = copie % 10;
            copie = / 10;
            s = s + aux
        }

        if (s % 2 == 0) cout << v[i] << " ";

    }
}