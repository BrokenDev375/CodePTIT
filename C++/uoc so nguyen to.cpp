#include<bits/stdc++.h>
using namespace std ;
bool prime( long long  n)
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
        int check = 0 ;
        for( long long i = 1 ; i <= sqrt(n) ; i++)
        {
            if( prime(i) && n % i == 0)
            {
                while( n % i == 0)
                {
                    n /= i;
                    cout << i << " " ;
                }
            }
        }
        if(n > 1)
        {
            cout << n ;
        }
        cout << endl ;
    }
}
