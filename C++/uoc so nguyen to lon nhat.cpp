#include<bits/stdc++.h>
using namespace std ;
bool IsPrime( long long  n)
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
        long long n ;
        cin >> n ;
        long long  multi ;
        for( long long i = 2 ; i <= sqrt(n) ; i++)
        {
            if( n % i == 0 && IsPrime(i))
            {
                multi = i ;
                while(n % i == 0)
                {
                    n /= i ;
                }
            }
        }
        if( n > 1)
        {
            multi = n ;
        }
        cout << multi << endl ;
    }
}
