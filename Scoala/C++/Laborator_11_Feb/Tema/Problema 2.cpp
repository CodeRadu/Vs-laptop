#include <iostream>
#include <climits>
using namespace std;


int main()
{
    int n, v[1000], i, mini= FLT_MAX , maxi = FLT_MIN, d=0;
    cin>>n;
    cout << endl;
    for (i=1; i<=n; i++)
        cin>>v[i];

    for (i=1; i<=n; i++) {
        if (v[i] > maxi) maxi = v[i];

        if (v[i] < mini ) mini = v[i];

    }
    d = maxi - mini;


    for (i=1; i<=n; i++) {
        if (v[i] == d) cout << v[i] << " ";
    }

}