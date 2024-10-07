#include<bits/stdc++.h>
using namespace std ;
int mdd[10000000] ;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , x ;
        cin >> n >> x ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            mdd[a[i]]++ ;
        }
        if(mdd[x] == 0)
        {
            cout << -1 << endl ;
        }
        else
        {
            cout << mdd[x] << endl ;
        }
        memset(mdd , 0 ,sizeof(mdd)) ;
    }
}
