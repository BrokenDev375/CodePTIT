#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long n , x , sum = 0;
        cin >> n >> x ;
        long long a[n] ;
        long long k = 1 ;
        for( int i = n - 1 ; i >= 0 ; i--)
        {
            cin >> a[i] ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            sum = (sum + a[i] * k) % (1000000007) ;
            k = (k * x) %( 1000000007) ;
        }
        cout << sum << endl ;
    }
}
