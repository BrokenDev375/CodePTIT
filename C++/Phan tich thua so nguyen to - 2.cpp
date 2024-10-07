#include<bits/stdc++.h>
using namespace std ;
bool prime( long long n)
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
    long long n ;
    cin >> n ;
    for( long long i = 2 ; i <= sqrt(n) ; i++)
    {
        if(prime(i) && n % i ==0)
        {
            int  cnt = 0 ;
            while( n % i == 0)
            {
                cnt++ ;
                n /= i ;
            }
            cout << i << " " << cnt << endl ;
        }
    }
    if( n > 1)
    {
        cout << n << " 1" ;
    }
}
