#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n , min_a = 1e9 , min_se_a = 0;
        cin >> n ;
        int a[n] ;
        set<int> se ;
        cin >> a[0] ;
        min_a = a[0] ;
        min_se_a = a[0] ;
        for( int i = 1 ;i < n ; i++)
        {
            cin >> a[i] ;
            se.insert(a[i]) ;
        }
        if(se.size() < 2 )
        {
            cout << -1 << endl ;
        }
        else
        {
            set<int> :: iterator it = se.begin() ;
            cout << *it << " " ;
            it++ ;
            cout << *it << endl ;
        }
    }
}
