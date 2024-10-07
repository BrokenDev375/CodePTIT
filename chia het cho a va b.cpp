#include<bits/stdc++.h>
using namespace std ;
int lcm( int a , int b)
{
    return a /__gcd(a , b) * b;
}
int res( int m , int n , int a)
{
    int l , r ;
    if( m % a == 0 )
    {
        l = m ;
    }
    else
    {
        l = ( m / a + 1) * a ;
    }
    if( n % a == 0)
    {
        r = n ;
    }
    else
    {
        r = n / a * a;
    }
    return (r - l) / a + 1 ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int m , n , a , b , res1 = 0 ;
        cin >> m >> n >> a >>  b ;
        int tmp = lcm(a , b) ;
        res1 += res(m , n , a) ;
        res1 += res( m , n , b) ;
        res1 -= res( m , n , tmp) ;
        cout << res1 << endl ;
    }
}
