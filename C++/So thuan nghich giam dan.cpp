#include<bits/stdc++.h>
using namespace std ;
bool IsPalindrome(string s)
{
    if(s.size() == 1)
    {
        return false ;
    }
    for( int i = 0 ; i < s.size() / 2 ; i++)
    {
        if(s[i] != s[s.size() - 1 - i])
        {
            return false ;
        }
    }
    return true ;
}
bool cmp( pair<string , int > a , pair<string , int > b)
{
    if(a.first.size() == b.first.size())
    {
        return a.first > b.first ;
    }
    return a.first.size() > b.first.size() ;
}
int main()
{
    string s ;
    map<string , int> mp ;
    while(cin >> s)
    {
        if(IsPalindrome(s))
        {
            mp[s]++ ;
        }
    }
    vector<pair<string,int>> v (mp.begin() , mp.end()) ;
    sort(v.begin() , v.end() , cmp) ;
    for( auto x : v)
    {
        cout << x.first << " " << x.second << endl ;
    }
}
