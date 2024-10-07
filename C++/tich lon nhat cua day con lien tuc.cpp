#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int a[n] ;
        long long multi = 1 , maxx = -1e9;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            multi *= a[i] ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            multi = 1 ;
            for( int j = i ; j < n ; j++)
            {
                multi *= a[j] ;
                maxx = max(maxx , multi) ;
            }
        }
        cout << maxx << endl ;
    }
}
