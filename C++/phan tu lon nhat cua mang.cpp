#include<bits/stdc++.h>
using namespace std ;
int a[10000000] ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int max_a = -1e6;
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[i]  ;
            max_a = max(max_a, a[i]) ;
        }
        cout << max_a << endl ;
    }
    }
}
