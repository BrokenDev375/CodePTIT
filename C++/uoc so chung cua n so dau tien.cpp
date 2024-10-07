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
    long t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        long long multi = 1;
        for( int i = 2 ; i <= n ; i++)
        {
            if( prime(i))
            {
                long long tmp = i  ;
                while( tmp <= n )
                {
                    multi *= i ;
                    tmp *= i ;
                }
            }
        }
        cout << multi << endl ;
    }
}
