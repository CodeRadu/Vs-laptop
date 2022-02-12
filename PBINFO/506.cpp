#include <iostream>
using namespace std;
int prim(int x)
{   if (x <2) return 0;
    for (int d = 2 ; d* d <=x ; d++) {
        if (x%d == 0) return 0;
    }
    return 1;
}
int main ()
{
    int v[1001], ct =0,n;
    cin >> n;
    for (int i =1 ; i<=n;i++) {
        cin >> v[i];
    }
    for (int i =1 ; i<=n;i++) {
        if(prim(v[i]))ct++; }
        if (ct>0) cout << "DA";
        else cout << "NU";
    
}