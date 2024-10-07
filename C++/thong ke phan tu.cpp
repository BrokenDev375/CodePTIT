#include<bits/stdc++.h>
using namespace std ;
int a[10000000] ;
int main()
{
    unordered_map <int , int> mp ;
    vector <int> v ;
    int tmp ;
    while(cin >> tmp)
    {
        if(mp.find(tmp) == mp.end())
        {
            v.push_back(tmp);
        }
        mp[tmp]++ ;
    }
    for( int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i] << " " << mp[v[i]]  << endl ;
    }
}
