#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , k ;
        cin >> n >> k ;
        int a[n] ;
        int sum = -1e9 , pos ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        for( int i = k - 1 ; i < n ; i++ )
        {
            int tmp  = 0 ;
            for(int j = i - k + 1 ; j <= i ; j++ )
            {

                tmp += a[j] ;
            }
            if(tmp > sum)
            {
                sum = tmp ;
                pos = i ;
            }
        }
        for( int i = pos - k + 1 ; i <= pos ; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl ;
    }
}
