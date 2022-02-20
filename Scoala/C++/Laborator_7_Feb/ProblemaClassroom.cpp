/*
1. Se citeste un numar n( n maxim 100) si apoi n numere reale. Sa se memoreze cele n numere intr-un tablou unidimensional.
a) Sa se afiseze numerele din tablou in ordinea citirii si apoi in ordine inversa.
b) Sa se calculeze si sa se afiseze suma elementelor tabloului
c) Sa se determine si sa se afiseze valoarea minima din tablou.
d) Sa se determine valoarea maxima si numarul de aparitii ale aceste valori
e) Sa se calculeze media aritmetica a numerelor pozitive din tablou si un mesaj daca nu exista elemente pozitive
*/
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, s = 0;
    float mini = INT_MAX, maxi = INT_MIN;
    int ct = 0, nrpoz = 0, spoz = 0;
    cin >> n;
    int v[101];

    for (int i = 1; i <= n; i++)
        cin >> v[i];
    cout << endl << "Afisare inversa ordinii citirii " <<   endl;
    for (int i = n; i >= 1; i--)
        cout << v[i] << " ";
    cout << endl << "================================";




        cout << endl << "Afisare in oridnea citirii " << endl;

    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl << "================================" << endl;





    for (int i = 1; i <= n; i++) {
        s = v[i] + s;
    }

    cout << "Suma este ";
    cout << s;
    cout << endl << "================================" << endl;





    for (int i = 1; i <= n; i++) {

        if (v[i] > maxi) {
            maxi = v[i];
        }
        if (v[i] < mini) {
            mini = v[i];
        }

    }

    for (int i = 1; i <= n; i++) {
        if (v[i] == maxi) ct++;
    }
    cout << "Minimul este " << mini;
    cout << endl << "================================" << endl;






    cout << "Maximul este " << maxi << " care se repeta de " << ct;
    cout << endl << "================================" << endl;




    for (int i = 1; i <= n; i++) {
        if (v[i] > 0) nrpoz++;
        spoz = spoz + v[i];
    }
    cout << "Media aritmetica a nr pozitive " << (float)(spoz / nrpoz);
    
}

/// 3 2 3 4
/*
pbinfo 289 486 506 633*/