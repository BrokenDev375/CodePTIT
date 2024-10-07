#include<bits/stdc++.h>
using namespace std ;
int solve(int a[] , int n)
{
    int res = -1e9;
    for( int i = 0 ; i < n ; i++)
    {
        for( int j = n - 1 ; j >= i ; j--)
        {
            if(a[i] <= a[j])
            {
                res = max(res , j - i) ;
                break ;
            }
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
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        cout << solve(a , n) << endl ;
    }
}
