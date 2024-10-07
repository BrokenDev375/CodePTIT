#include<bits/stdc++.h>
using namespace std ;
void print(int a[] , int n)
{
    for( int i = 0 ; i < n ; i++)
    {
        cout << a[i] ;
    }
    cout << " " ;
}
void solve(int a[] , int n )
{
    do
    {
        print(a , n) ;
    }
    while(next_permutation(a , a + n)) ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int  n ;
        cin >> n ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            a[i] = i + 1;
        }
        solve(a , n) ;
        cout << endl ;
    }
}
