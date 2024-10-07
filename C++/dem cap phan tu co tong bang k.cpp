#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , k , cnt = 0;
        set<int> se ;
        cin >> n >> k ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            for( int j = i + 1 ; j < n ; j++)
            {
                if(a[i] + a[j] == k)
                {
                    cnt++ ;
                }
            }
        }
        cout << cnt << endl ;
    }
}
