#include<bits/stdc++.h>
using namespace std ;
int pluss(int n)
{
    int res = 0 ;
    while(n > 0)
    {
        if(n % 2 == 0)
        {
            n /= 2 ;
        }
        else
        {
            n-- ;
            res++ ;
        }
    }
    return res ;
}
int multi( int n )
{
    int res = 0 ;
    while(n > 0)
    {
        if(n % 2 == 0)
        {
            n /= 2 ;
            res++ ;
        }
        else
        {
            n-- ;
        }
    }
    return res ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int a[n] ;
        int res = 0 ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a , a + n) ;
        res += multi(a[n - 1])  ;
        for( int i = 0 ; i < n ; i++)
        {
            res += pluss(a[i]) ;
        }
        cout << res << endl ;
    }
}
