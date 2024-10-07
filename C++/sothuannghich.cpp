#include<bits/stdc++.h>
using namespace std ;
bool isPalindromic(string s)
{
    for( int i = 0 ; i < s.size() / 2 ; i++)
    {
        if(s[i] != s[s.size() - 1 -i])
        {
            return false ;
        }
    }
    return true ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        if(isPalindromic(s))
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
