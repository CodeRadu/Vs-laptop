#include <iostream>
using namespace std;
//  😀👍 ⚠️

int UltimaCifPara(int n)
{
    int aux, cpar = -1;
    while (n)
    {
        aux = n % 10;
        n /= 10;
        if (aux % 2 == 0)
        {
            cpar = aux;
            break;
        }
    }
    return cpar;
}

int main()
{
    int n;
    cin >> n;
    cout << UltimaCifPara(n);
}