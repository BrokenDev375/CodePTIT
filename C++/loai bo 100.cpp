#include<bits/stdc++.h>
using namespace std ;
bool check (string s)
{
    for( int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] != '0') ;
        return false ;
    }
    return true ;
}
int solve(string s)
{
    for( int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '1')
        {
            if(s[i + 1] == '0' && s[i + 2] == '0')
            {
                return i ;
            }
        }
    }
    return -1 ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int cnt = 0 ;
        string s ;
        cin >> s ;
        while(solve(s) != -1)
        {
            s.erase(solve(s) , 3) ;
            cnt +=3 ;
        }
        if( check(s))
        {
            cout << endl ;
        }
        else
        {
            cout << cnt << endl ;
        }
    }
}
