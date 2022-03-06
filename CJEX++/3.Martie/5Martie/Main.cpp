#include <iostream>
#include <fstream>
using namespace std;
 
ifstream fin ("bac.txt");
 
int main ()
{
    bool ok = 0;
    int x, y, S=0, smax=-1;
    fin >> y;
    while (fin >> x)
    {
        ok = 1;
        if (x % 2 == y % 2)
        {
            S += y;
            if (S > smax)
                smax = S;
 
        }
        else
        {
            S += y;
            if (S > smax)
                smax = S;
            S = 0;
        }
        y = x;
    }
    if (ok == 1)
    {
        if (x % 2 == y % 2)
        {
            S += x;
            if (S > smax)
                smax = S;
        }
        else
            if (x > smax)
                smax = x;
        cout << smax;
    }
    else
        cout << y;
 
 
 
    return 0;
}
 

