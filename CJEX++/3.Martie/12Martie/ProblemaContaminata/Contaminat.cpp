#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>
using namespace std;
//  😀👍 ⚠️
// @Titus

int main()
{
    char A[101][101];
    int i, j;
    int m, n;
    cin >> m >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> A[i][j];
        }
    }

    for (i = 1; i <= n; i++)
    {
        cout << endl;
        for (j = 1; j <= m; j++)
        {
            // cout << A[i][j] << " ";
        }
    }

    bool conditie = true;

    while (conditie)
    {
        conditie = false;
        for (i = 1; i <= n; i = i + 2)
        {
            for (j = 1; j <= m; j = j + 2)
            {

                if (A[i][j] == 'C')
                {
                    if (A[i][j - 1] == 'W')
                    {
                        A[i][j - 1] = 'C';
                        conditie = true;
                    }

                    if (A[i][j + 1] == 'W')
                    {
                        A[i][j + 1] = 'C';
                        conditie = true;
                    }

                    if (A[i + 1][j] == 'W')
                    {
                        A[i + 1][j] = 'C';
                        conditie = true;
                    }
                    if (A[i - 1][j] == 'W')
                    {
                        A[i - 1][j] = 'C';
                        conditie = true;
                    }
                }

                if (A[i][j] == 'W' && ( A[i - 1][j] == 'C' || A[i + 1][j] == 'C' || A[i][j - 1] == 'C' || A[i][j + 1] == 'C') )
                {
                    A[i][j] = 'C';
                }
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        cout << endl;
        for (j = 1; j <= m; j++)
        {
            cout << A[i][j] << " ";
        }
    }
}

/*
5 5
WWWRW
CRRRR
RWWRW
WWWRR
WRRWC
*/