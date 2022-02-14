#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, v[100],mini =FLT_MAX , maxi = FLT_MIN,ct=0,diff;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (v[i] < mini) mini = v[i];

        if (v[i] > maxi) maxi = v[i];
    }
    diff = maxi - mini;
    for (int i = 1; i <= n; i++) {
        if (v[i] == diff) ct++;
    }

    cout << ct;
}