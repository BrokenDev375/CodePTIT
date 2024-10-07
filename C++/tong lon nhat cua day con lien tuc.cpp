#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n  ;
        long long s = 0 , solve = -1e9 ;
        cin >> n ;
        int a[n] , mdd[n] = {} ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            s += a[i] ;
            solve = max(solve , s) ;
            if(s < 0)
            {
                s = 0 ;
            }
        }
        cout << solve << endl ;
    }
}
