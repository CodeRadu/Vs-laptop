/*
    functie care modifica elem unui vector
    se citeste un vector de n numere intregi
    sa se modifice fiecre numar par din sir prin impartire la 2
    ex
    n=4
    1 2 3 4

    1 1 3 2

*/
#include <iostream>
using namespace std;
void pare(int v[], int n)
{
    int i;
    for (i = 0; i < n;i++)
        if(v[i]%2 == 0)
            v[i] = v[i] / 2;
}
int main()
{
    int sir[100], n, i;
    cin >> n;
    for (i = 0; i < n;i++)
        cin >> sir[i];

    pare(sir, n);
 
    for (i = 0; i < n;i++)
        cout << sir[i] << ' ';
    return 0;
}