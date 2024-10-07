#include<bits/stdc++.h>
using namespace std ;
bool IsPrime(int n)
{
    for( int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            return false ;
        }
    }
    return n > 1 ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int x = 0 ;
        for( int i = 1 ; i <= n ; i++)
        {
            if(__gcd(n , i) == 1)
            {
                x++ ;
            }
        }
        if((IsPrime(x)))
        {
            cout << 1 << endl ;
        }
        else
        {
            cout << 0 << endl ;
        }
    }
}
