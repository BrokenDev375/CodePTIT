#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , x , check = 0 ;
        cin >> n >> x ;
        set<int> se ;
        for( int i = 0 ; i < n ; i++)
        {
            int tmp ;
            cin >> tmp ;
            se.insert(tmp) ;
        }
        for( auto i : se)
        {
            if(se.find(i + x) != se.end())
            {
                cout << 1 << endl ;
                check = 1 ;
                break ;
            }
        }
        if(!check)
        {
            cout << -1 << endl ;
        }
    }
}
