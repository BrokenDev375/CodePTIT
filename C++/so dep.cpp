#include<bits/stdc++.h>
using namespace std ;
bool IsPalindrome(string s)
{
    for( int i = 0 ; i < s.size() / 2 - 1; i++)
    {
        if(s[i] != s[s.size() - 1 - i])
        {
            return false ;
        }
    }
    return true ;
}
bool IsEven(string s)
{
    for( int i = 0  ; i < s.size() ; i++)
    {
        if(s[i] != '2' && s[i] != '0' && s[i] != '4' && s[i] != '6' && s[i] != '8')
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
    cin.ignore(1) ;
    while(t--)
    {
        string s ;
        getline(cin , s) ;
        if(IsPalindrome(s) && IsEven(s))
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
