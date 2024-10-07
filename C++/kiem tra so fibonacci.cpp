#include<bits/stdc++.h>
using namespace std ;
long long f[100] ;
void fibo()
{
    f[0] = 0 ;
    f[1] = 1 ;
    for( int i = 2 ; i <= 92 ; i++)
    {
        f[i] = f[i - 1 ] + f[i - 2] ;
    }
}
bool solve( long long n )
{
    for( int i = 0 ; i <= 92 ; i++)
    {
        if(f[i] == n)
        {
            return true ;
        }
    }
    return false ;
}
int main()
{
    fibo() ;
    int t ;
    cin >> t ;
    while(t--)
    {
        long long n ;
        cin >> n ;
        if( solve(n))
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
