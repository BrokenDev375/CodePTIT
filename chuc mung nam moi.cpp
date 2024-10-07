`#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    cin.ignore(1) ;
    set<string> se ;
    for( int i = 0 ; i < n ;i++)
    {
        string s ;
        getline(cin,s) ;
        se.insert(s) ;
    }
    cout << se.size() ;
}
