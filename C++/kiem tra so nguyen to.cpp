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
    int n ;
    cin >> n ;
    if(prime(n))
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}
