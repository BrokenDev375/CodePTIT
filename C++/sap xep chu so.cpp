#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        set<long long> se ;
        for( int i = 0 ; i < n ; i++)
        { ;
            int tmp ;
            cin >> tmp ;
            while(tmp > 0)
            {
                se.insert(tmp % 10) ;
                tmp /= 10 ;
            }
        }
        for( set<long long> :: iterator it = se.begin() ; it != se.end() ; ++it)
        {
            cout << *it << " " ;
        }
        cout << endl ;
    }
}
