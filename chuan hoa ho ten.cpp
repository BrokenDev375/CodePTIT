#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s;
    getline(cin, s) ;
    for( int i = 0 ; i < s.size() ; i++)
    {
        s[i]  = tolower(s[i]) ;
    }
    vector<string> v ;
    stringstream ss(s) ;
    string word , fullname ;
    while(ss >> word)
    {
        v.push_back(word) ;
    }
    for( int i =0 ; i < v.size() - 1 ; i++)
    {
        v[i][0] = toupper(v[i][0]) ;
    }
    for( int i = 0 ; i < v[v.size() - 1].size() ; i++)
    {
        v[v.size() - 1][i] = toupper(v[v.size() - 1][i]) ;
    }
    for( int i = 0 ; i < v.size() - 1 ; i++)
    {
        fullname += v[i] ;
        fullname += " " ;
    }
    fullname.pop_back() ;
    fullname += ", " ;
    fullname += v[v.size() - 1] ;
    cout << fullname ;
}
