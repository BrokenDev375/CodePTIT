#include<bits/stdc++.h>
using namespace std ;
bool IsIncreasing(string s)
{
    int i = 6 ;
    s.erase( 8 , 1) ;
    while( i < s.size())
    {
        if(s[i - 1]  >=  s[i])
        {
            return false ;
        }
        i++ ;
    }
    return true ;
}
bool IsEqual_1(string s )
{
    int i = 6 ;
    s.erase( 8 , 1) ;
    while( i < s.size())
    {
        if(s[i - 1]  != s[i])
        {
            return false ;
        }
        i++ ;
    }
    return true ;
}
bool IsEqual_2(string s)
{
    int i = 6 ;
    while( i < 8 )
    {
        if(s[i - 1]  != s[i])
        {
            return false ;
        }
        i++ ;
    }
    i += 2   ;
    while(i < s.size())
    {
        if(s[i - 1]  != s[i])
        {
            return false ;
        }
        i++ ;
    }
    return true ;
}
bool LocPhat(string s)
{
    int i = 5 ;
    s.erase( 8 , 1) ;
    while( i < s.size())
    {
        if(s[i] != '6' && s[i] != '8')
        {
            return false ;
        }
        i++ ;
    }
    return true ;
}
int main()
{
    int t ;
    cin >> t ;
    cin.ignore() ;
    while(t--)
    {
        string s ;
        getline(cin , s ) ;
        if(IsIncreasing(s) || IsEqual_1(s) || IsEqual_2(s) || LocPhat(s))
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
