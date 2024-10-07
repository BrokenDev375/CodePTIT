#include<bits/stdc++.h>
using namespace std ;
int a[10000000] ;
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
        int n , k , cnt = 0 , check = 0 ;
        cin >> n >> k;
        for( int i = 2 ; i <= sqrt(n) ; i++)
        {
            if( IsPrime(i) && n % i == 0)
            {
                while( n % i == 0)
                {
                    cnt++ ;
                    if(cnt == k)
                    {
                        cout << i << endl;
                        check = 1 ;
                    }
                    n /= i ;
                }
            }
        }
        if(n > 1 )
        {
            cnt++ ;
            if( cnt == k )
            {
                cout << n << endl;
                check = 1 ;
            }
        }
        if( check == 0)
        {
            cout << "-1" << endl ;
        }
    }
}
