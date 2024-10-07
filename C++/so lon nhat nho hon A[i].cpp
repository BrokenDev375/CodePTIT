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
        vector<int> v1 , v2 ;
        for( int i = 0 ; i < n ; i++)
        {
            int tmp ;
            cin >> tmp ;
            v1.push_back(tmp) ;
            v2.push_back(tmp) ;
        }
        sort(v2.begin() , v2.end()) ;
        map<int , int> mp ;
        for( int i = 1 ; i < n  ; i++)
        {
            mp[v2[i]] = v2[i - 1] ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            if(v1[i] == v2[n - 1])
            {
                cout << "_ " ;
            }
            else
            {
                cout << mp[v1[i]] << " " ;
            }
        }
        cout << endl ;
    }
}
