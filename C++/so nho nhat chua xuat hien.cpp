#include<bits/stdc++.h>
using namespace std ;
int a[1000005] ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a, a + n) ;
        int res = 1 ;
        for( int i = 0 ; i < n ; i++)
        {
            if(a[i] == res)
            {
                res++ ;
            }
        }
        cout << res << endl ;
    }
}
