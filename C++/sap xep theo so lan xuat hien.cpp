#include<bits/stdc++.h>
using namespace std ;
bool cmp(pair<int , int> a , pair<int ,int> b )
{
    if(a.second == b.second)
    {
        return a.first < b.first ;
    }
    return a.second > b.second ;
}
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        unordered_map <int , int> mp ;
        for( int i = 0 ; i < n ; i++)
        {
            int tmp ;
            cin >> tmp ;
            mp[tmp]++ ;
        }
        vector<pair <int , int >> v (mp.begin() , mp.end()) ;
        sort(v.begin() , v.end() , cmp) ;
        for( int i = 0 ; i < v.size() ; i++)
        {
            while(v[i].second --)
            {
                cout << v[i].first << " " ;
            }
        }
        cout << endl ;
    }
}
