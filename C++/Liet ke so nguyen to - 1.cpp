#include<bits/stdc++.h>
using namespace std ;
bool prime( int n)
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
    int l , r ;
    cin >> l >> r ;
    if(l > r)
    {
        swap(l , r) ;
    }
    for( int i = l  ; i <= r ; i++)
    {
        if(prime(i))
        {
            cout << i << " " ;
        }
    }
}
