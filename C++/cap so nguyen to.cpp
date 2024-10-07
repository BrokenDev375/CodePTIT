#include<bits/stdc++.h>
using namespace std ;
int a[10000000] ;
bool IsPrime( int  n)
{
    for( int i = 2 ; i <= sqrt(n) ; i++)
    {
        if( n % i == 0)
        {
            return false ;
        }
    }
    return n >= 2 ;
}
int main()
{
    int  t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        for( int i = 0 ; i <= n / 2 ; i++)
        {
            if(IsPrime(i) && IsPrime(n - i))
            {
                cout << i << " " << n - i ;
                break ;
            }
        }
        cout << endl ;
    }
}
