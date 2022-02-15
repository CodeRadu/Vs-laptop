int main()
{
    int n,v[101],i,ok=1;
         for (i=1;i<=n;i++)
    cin >> v[i];
    for(i=1;i<=n-1;i++)
    if(v[i]%2==v[i+1]%2)ok=0;
    if (ok==1)
        cout << "DA";
    else cout << "NU";
    return 0;
}