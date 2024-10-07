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
        multiset<int> se ;
        for( int i = 0 ; i < n ; i++)
        {
            int tmp ;
            cin >> tmp ;
            se.insert(tmp) ;
        }
        auto it = se.begin() ;
        advance(it , k - 1) ;
        cout << *it << endl ;
    }
}
