#include <iostream>
using namespace std;

int main()
{
    int a[100], na, i;
    int b[100], nb, j;
    int c[200], nc, k;
    cin >> na;
    for (i = 0; i < na; i++)

        cin >> a[i];
    cin >> nb;
    for (j = 0; j < nb; j++)
        cin >> b[j];
    i = j = k = 0;
    while (i < na && j < nb)
    {
        int flag = 0;
        for (int t = 0; t < nb && flag == 0; t++)
        {
            if (a[i] == b[t])
                flag = 1;
        }
        if (flag == 1)
        {
            i++;
            continue;
        }
           
        else
        {
            if (a[i] < b[j])
            {
                c[k] = a[i];
                k++;
                i++;
            }
            else
            {
                c[k] = b[j];
                k++;
                j++;
            }
        }
    }
   
    // aici ajungem atunci cand ....
    // s-a terminat un sir
    while (i < na)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < nb)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    nc = k;

    for (i = 0; i < na; i++)
    {
        for (k = 0; k < nc; k++)
        {
            if (c[k] == a[i])
            {
                c[k] = a[i];
            }
        }
    }
    for (j = 0; j < nb; j++)
    {
        for (k = 0; k < nc; k++)
        {
            if (c[k] == b[j])
            {
                c[k] = b[j];
            }
        }
    }
    for (k = 0; k < nc; k++)
    {
        cout << c[k] << " ";
    }
}
/**
3 
1 2 3 
4 
2 3 4 5
*/

