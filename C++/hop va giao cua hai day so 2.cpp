#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , m ;
        cin >> n >> m ;
        set<int> a , b , se ;
        int ma[100000] = {} ;
        for( int i = 0 ; i < n ; i++)
        {
            int tmp ;
            cin >> tmp ;
            a.insert(tmp) ;
            se.insert(tmp) ;
            ma[tmp]++ ;
        }
        for( int i = 0 ; i < m ; i++)
        {
            int tmp ;
            cin >> tmp ;
            b.insert(tmp) ;
            se.insert(tmp) ;
            ma[tmp]++ ;
        }
        for( auto x : se)
        {
            cout << x << " " ;
        }
        cout << endl ;
        for( auto x : a)
        {
 ;            if(ma[x] >= 2)
            {
                cout << x << " " ;
            }
        }
        cout << endl ;
    }
}
