#include<bits/stdc++.h>
using namespace std ;
void print(int a[] , int k )
{
    for( int i = 1 ; i <= k ; i++)
    {
        cout << a[i] ;
    }
    cout << " " ;
}
void solve(int a[], int n , int k , int cnt)
{
    for( int i = a[cnt - 1] + 1  ; i <= n - k + cnt ; i++ )
    {
        a[cnt] = i ;
        if(cnt > k + 1 )
        {
            print(a , k) ;
            return ;
        }
        solve(a , n , k , cnt + 1) ;
    }
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , k ;
        cin >> n >> k ;
        int a[k + 1] ;
        fill_n(a , k + 1, 0) ;
        solve(a , n , k , 1) ;
        cout << endl ;
    }
}
