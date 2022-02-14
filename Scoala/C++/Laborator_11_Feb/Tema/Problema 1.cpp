#include <iostream>
using namespace std;

int Suma_Cif_e_para (int k) {

    int suma = 0 , aux;

    while (k) {
        aux = k% 10;
        k /=10;
        s = s + aux;
    }     

    if (s % 2 == 0) return 1;
    else return 0;
}


int main()
{
    int n, v[1000], i;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>v[i];

    cout << endl;

    for (i=1; i<=n; i++) {
        if (Suma_Cif_e_para(v[i])) {
            cout << v[i] << " ";
        }
    }
}