#include<bits/stdc++.h>
using namespace std ;
bool check( int x , int a[] , int n )
{
    int res = a[0] % x ;
    for( int i = 1 ; i < n ; i++)
    {
        if(a[i] % x != res)
        {
            return false ;
        }
    }
    return true ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , res = 0 ;
        cin >> n ;
        int a[n] ;
        for( int i = 0 ;i < n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a , a + n ) ;
        int b = a[n - 1] - a[0] ;
        set<int> se ;
        for( int i = 1 ; i <= b ; i++)
        {
            if(b % i == 0)
            {
                se.insert(i) ;
                se.insert(b / i) ;
            }
        }
        for( auto i : se)
        {
            if(check(i , a , n))
            {
                res++ ;
            }
        }
        cout << res << endl ;
    }
}
