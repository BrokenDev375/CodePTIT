#include<bits/stdc++.h>
using namespace std ;
bool IsPrime( int n)
{
    for( int i = 2 ; i <= sqrt(n) ; i++)
    {
        if( n % i == 0)
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
        int l , r , cnt = 0 ;
        cin >> l >> r ;
        for( int i = l ; i <= r ; i++)
        {
            if(IsPrime(i))
            {
                cnt++ ;
            }
        }
        cout << cnt << endl ;
    }
}
