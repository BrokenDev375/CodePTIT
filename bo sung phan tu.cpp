#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , cnt = 0 ;
        cin >> n ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a , a + n) ;
        for( int i = 0 ; i < n - 1 ; i++)
        {
            if(a[i + 1] - a[i] > 1)
            {
                for( int j = a[i] + 1 ; j < a[i + 1] ;  j++)
                {
                    cnt++ ;
                }
            }
        }
        cout << cnt << endl ;
    }
}
