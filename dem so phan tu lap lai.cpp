#include<bits/stdc++.h>
using namespace std ;
int mdd[10000000] ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , sum = 0 ;
        cin >> n ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            mdd[a[i]]++ ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            if(mdd[a[i]] > 1 )
            {
                sum++ ;
            }
        }
        cout << sum << endl;
        memset(mdd , 0 , sizeof(mdd)) ;
    }
}
