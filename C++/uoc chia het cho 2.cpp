#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , cnt = 0;
        cin >> n ;
        if( n % 2 == 0)
        {
            cnt++ ;
            for( int i = 2 ; i < sqrt(n) ; i +=2 )
            {
                if( n % i == 0)
                {
                    cnt++ ;
                    cout << i << " " ;
                    if( (n / i) % 2 == 0)
                    {
                        cout << n / i << " " ;
                        cnt++ ;
                    }
                }
            }
        }
        int tmp = sqrt(n) ;
        if(tmp * tmp == n && tmp % 2 == 0)
        {
            cnt ++ ;
        }
        cout << cnt << endl ;
    }
}
