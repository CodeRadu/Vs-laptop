#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



/*
 std::ifstream fin(".in")
 std::ofstream fout (".out")
*/



// *************************
// Definiri 

double pi = 3.1415926;
double Euler_number = 2.71828;
double golden_ratio = 1.61803398875;
double avocado = 6.0221515 * pow(10, 23);

// ***************************
// functii



int Suma_Cif_Impare(int n) {
    int s =0;
    while (n) {
        if (n%2 == 1) {
            s = s + n % 10;
        }
        n/=10;
    }
    return s;
}

int Media_Aritmetica_A_Cif(int n) {
    int aux,nrcif=0,s=0;
    while(n) {
        aux = n % 10;
        nrcif++;
        s = s + aux;
        n /=10;
    }
    return (float)s / nrcif;
}

bool Verificare_Cifre_Ientice(int x)
{
    int uc=x%10;
    x=x/10;
    while(x)
    {
        if(x%10!=uc)
            return 0;
        x/=10;
    }
    return 1;
}

int Verificare_Toate_Cifrele_Impare(int x)
{
    int cif;
    while(x)
    {
        cif=x%10;
        if(cif%2==0)
            return 0;
        x/=10;
    }
    return 1;
}

int Produsul_Divizorilor_Proprii(int x)
{
    int d,p=1;
    for(d=2; d<=x/2; d++)
    {
        if(x%d==0)
            p=p*d;
    }
    return p;
}

int Afisare_al_N_Lea_Termen_Fibonacci(int n)
{
    int T;
    if (n==1||n==2)
        return 1;
    else
    {
        int t1=1,t2=1;
        int T;
        for(int i=3;i<=n;i++)
          {
              T=t1+t2;
              t1=t2;
              t2=T;
          }

    }
    return T;
}

void Afisare_Primii_n_Termani_Fibonacci (int n)
{
    int T;
    if(n==1)
        cout<<1;
    else
        if(n>2)
    {
        cout<<1<<' '<<1;
        int t1=1,t2=1;T;
        for(int i=1;i<=n;i++)
        {
            T=t1+t2;
            cout<<' '<<T;
            t1=t2;
            t2=T;
        }
    }
}

void Verificare_Daca_X_Apartine_Fibonacci (int n)
{
    int T;
    if(n==1)
        cout<<1;
    else
        if(n>2)
    {
        cout<<1<<' '<<1;
        int t1=1,t2=1;T;
        for(int i=1;i<=n;i++)
        {
            T=t1+t2;
            cout<<' '<<T;
            t1=t2;
            t2=T;
        }
    }
}



int to_binary (int x)
{
    if (x == 0) return 0;
    return x % 2 + 10 * to_binary (x/2);
}
// 13 = 1 + 10 * [  to_binary(13/2=6)  ] 1 + 10 * 110 = 1 + 1100 = 1101
//  6 = 0 + 10 * [  to_binary(6/2=3)  ] 0 + 10 * 11 = 110
//  3 = 1 + 10 * [  to_binary(3/2=1)  ] 1 + 10 * 1 = 11
//  1 = 1 + 10 * [  to_binary(1/2=0)  ] 1 + 10 * 0 = 1
//  0 = 0
 
int to_binary_2 (int x)
{
    while (x > 0){
    int p = 1, k=0;
    while (p <= x)
    {
        p *= 2;
        k++;
    }
    cout << "2 ^ " << k-1 << " + ";
    x-=p/2;
    }
    cout << "\b\b  ";
}
 
int Oglindit(int k) 
{
    int ogli = 0;
    while (k) 
    {
        ogli = ogli * 10 + k % 10;
        k/=10;
    }
    return ogli;
}


int Verif_Patrat_Perfent(int k) 
{
    if (sqrt(k) == (float)sqrt(k)) return 1;
    else return 0;
}

int Afisare_Numar_Divizori (int k) 
{
    int ct = 0;
    for (int i = 1; i<=k/2 ; i++) 
    {
        if (k % i == 0) 
        {
            ct++;
        }
    }
    return ct;
}

int Afisare_Suma_Divizori (int k) 
{
    int ct = 0;
    for (int i = 1; i<=k ; i++) 
    {
        if (k % i == 0) 
        {
            ct += i;
        }
    }
    return ct;
}


int Afisare_Prima_Cifra (int k) 
{
    while (k>10) 
    {
        k/=10;
    }
    return k;
}

int Afisare_Cif_Min (int k) 
{
    int ct = 10,aux;
    while (k) 
    {
        aux = k % 10;
        k/=10;
        if (ct > aux) 
        {
            ct = aux;
        }
    }
    return ct;
}

int Afisare_Cif_Max (int k) 
{
    int ct = -1,aux;
    while (k) 
    {
        aux = k % 10;
        k/=10;
        if (ct < aux) 
        {
            ct = aux;
        }
    }
    return ct;
}
int Cel_Mai_Mare_Div_Comun(int a, int b) 
{
int r;
while (b) 
{
    r = a % b;
    a = b;
    b = r;
}
return a;
}

int Cel_Mai_Mic_Multiplu_Comun (int a, int b) 
{
int cmmc;
cmmc = a * b / Cel_Mai_Mare_Div_Comun(a,b);
return cmmc;
}


void Citire_Vector(int & n, int x[])
{
    cin  >> n;  
    for(int i = 0 ; i < n ; ++ i)
        cin >> x[i];
}

void Afisare_Vector(int n, int x[])
{
    for(int i = 0 ; i < n ; ++ i)
        cout << x[i] << " ";
}

void Schimbare_Linii(int A[][20], int lin, int col, int l1, int l2)
{
	int j;
	for (j = 0; j <col; j++)
		swap(A[l1][j], A[l2][j]);
}


void Sterge_Lin(int A[][20], int& lin, int col, int k)
{
	lin++;
	for (int i = lin; i >k; i--)
		for (int j = 0; j < col; j++)
			A[i][j] = A[i-1][j];
	
}

void Schimbare_Coloane(int A[][20], int lin, int col, int c1, int c2)
{
	int i;
	for (i = 1; i <= lin; i++)
		swap(A[i][c1], A[i][c2]);

}


void Rama_vector_bidi (int A[100][100], int l1, int c1, int lx , int cx) 
{

for (int j = c1; j <cx; j++) 
{
    cout << A[l1][j];
}
for (int i=l1; i < lx ; i++) 
{
    cout <<A[i][cx];
}
for (int j = cx ; j>c1; j--) 
{
    cout << A[lx][j];
}
for (int i = lx; i> l1; i--) 
{
    cout << A[i][c1];
}

}


/**
void Citire_Vector_bidi (int A, int i , int j,int lin , int col ) 
{
    	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++) 
        {
			cin >> A[i][j]; 
        }
	}
}

void Afisare_Vector_bidi (int A[100], int i , int j,int lin , int col ) 
{

    	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
        {
			cout << A[i][j];
        }
	}
}



void Stergere_Vector_Element(int A[100], int n , int p) 
{
    int i = p;
    for(i; i < n - 1; i ++)
    A[i] = A[i+1];
    n --;
}
*/