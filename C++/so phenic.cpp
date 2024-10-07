#include<bits/stdc++.h>
using namespace std ;
bool IsPrime( int n )
{
    for( int i = 2 ;i <= sqrt(n) ; i++)
    {
        if(  n % i == 0)
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
        int n , check = 0 ;
        cin >> n ;
        int cnt = 0 ;
        for( int i = 2 ; i <= sqrt(n) ; i++)
        {
            if(n % i == 0)
            {
                n /= i ;
                cnt++ ;
                if(n % i == 0)
                {
                    cout << 0 << endl ;
                    check = 1 ;
                    break ;
                }
            }
        }
        if(n > 1 )
        {
            cnt++ ;
        }
        if(cnt == 3 && check == 0)
        {
            cout << 1 << endl ;
        }
        else if( cnt != 3 && check == 0)
        {
            cout << 0 << endl ;
        }
    }
}
