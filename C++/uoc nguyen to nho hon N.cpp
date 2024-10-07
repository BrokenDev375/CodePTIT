#include<bits/stdc++.h>
using namespace std ;
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
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        for( int i = 2 ; i <= n ; i++)
        {
            if( IsPrime(i))
            {
                cout << i << " " ;
            }
        }
        cout << endl ;
    }
}
