#include<bits/stdc++.h>
using namespace std ;
long long f[83] ;
void fibo()
{
    f[0] = 0 ;
    f[1] = 1 ;
    for( int i = 2 ; i <= 92 ; i++)
    {
        f[i] = f[i - 1] + f[ i - 2 ] ;
    }
}
int main()
{
    int t ;
    cin >> t ;
    fibo() ;
    while(t--)
    {
        int n ;
        cin >> n ;
        cout << f[n] << endl ;
    }
}
