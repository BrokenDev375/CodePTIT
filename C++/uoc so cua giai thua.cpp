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
        int res = 0 ;
        int limit = n / k ;
        for( int i = 1 ; i <= limit; i++)
        {
            res++ ;
            if(i % k == 0 )
            {
                int tmp = i ;
                while(tmp % k == 0)
                {
                    res++ ;
                    tmp /= k ;
                }
            }
        }
        cout << res << endl ;
    }
}
