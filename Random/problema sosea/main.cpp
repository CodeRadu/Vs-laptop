#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sosea.in");
ofstream fout("sosea.out");

int main()
{
    int n;
    fin>>n;
    int start;
    int finish;
    int sosea[500]={0};
    for(int i=1;i<=n;i++)
    {
        fin>>start;
        fin>>finish;
        cout<<start<<" ";
        cout<<finish<<endl;
        start=start-65000;
        finish=finish-65000;
        for(int j=start;j<=finish;j++)
        {
            sosea[j]++;
        }

    }
    cout<<endl;
    cout<<endl;
    int capat_stanga;
    int capat_dreapta;
    int q;
    for(int i=0;i<501;i++)
    {
        if(sosea[i]==0)
        {
            capat_stanga=q=i;
            while(sosea[q]==0)
            {
                q++;
            }
            capat_dreapta=q-1;
            i=capat_dreapta;
            cout<<capat_stanga+65000<<" "<<capat_dreapta+65000<<endl;
        }

    }


    return 0;
}
