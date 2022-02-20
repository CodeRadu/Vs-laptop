#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
# include "C:\Users\Ticusan Titus\Desktop\Deale Mele\Vs code\New folder\Scoala\C++\AA - Main\Function.cpp"
using namespace std;
//  😀👍 ⚠️    
 
int Verif_Prim (int k) 
{
    if (k < 2) 
    {
        return 0;
    }
    else {
        if (k!=2 && k% 2 ==0)
        {return 0;
        }
        else {
            for (int d = 3; d*d <= k; d=d+2) 
            {
                if (k % d == 0) 
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int Aproape_Prim (int k) {
    for (int i = 2; i <= k / 2; i++) {
        if (k % i == 0) {
            int a , b;
            a = i;
            b = k / i;
            if (Verif_Prim(a) && Verif_Prim(b)){
                return a , b;
            }

        }
    }
}
