#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int w , h , n ;
        cin >> w >> h >> n ;
        int res = 1 ;
        while( w % 2 == 0 || h % 2 == 0)
        {
            if(w % 2 == 0)
            {
                w /= 2 ;
                res *= 2 ;
            }
            if(h % 2 == 0)
            {
                h /= 2 ;
                res *= 2 ;
            }
        }
        if(res >= n )
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
