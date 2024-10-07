#include<bits/stdc++.h>
using namespace std ;
bool check( string s , set<string> se2 )
{
    for( auto x : se2)
    {
        if(s == x)
        {
            return false ;
        }
    }
    return true ;
}
int main()
{
    int t ;
    cin >> t;
    cin.ignore() ;
    while(t--)
    {
        set<string> se1 ;
        set<string> se2 ;
        string s1 , s2 ;
        getline(cin ,s1) ;
        stringstream ss1(s1) ;
        getline(cin , s2) ;
        stringstream ss2(s2) ;
        string word ;
        while(ss1 >> word)
        {
            se1.insert(word) ;
        }
        while(ss2 >> word)
        {
            se2.insert(word) ;
        }
        for( auto x : se1)
        {
            if(check(x , se2) )
            {
                cout << x << " " ;
            }
        }
        cout << endl ;
    }
}
