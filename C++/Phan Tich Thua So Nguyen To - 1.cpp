#include<bits/stdc++.h>
using namespace std ;
bool prime(int n)
{
    for( int i = 2; i * i <= n ; i++)
    {
        if( n % i ==0)
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
        int n ;
        cin >> n ;
        for( int i = 2 ; i <= sqrt (n) ; i++)
        {
            if( prime(i) && n % i == 0)
            {
                int cnt = 0 ;
                cout << i << " " ;

                while(n % i == 0)
                {
                    n /= i ;
                    cnt++ ;
                }
                cout << cnt << " " ;
            }
        }
        if(n > 1)
        {
            cout << n << " 1" << endl ;
        }
        else
        {
            cout << endl ;
        }
    }
}
