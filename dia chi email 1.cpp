#include<bits/stdc++.h>
using namespace std ;
char a[100][100] ;
int main()
{
    string s ;
    getline(cin , s) ;
    for( int i = 0 ; i < s.size() ; i++)
    {
        s[i] = tolower(s[i]) ;
    }
    stringstream ss(s) ;
    string word , email ;
    vector<string> v ;
    while(ss  >> word)
    {
        v.push_back(word) ;
    }
    email = v[v.size() - 1] ;
    for( int i = 0 ; i < v.size() - 1 ; i++)
    {
        email += v[i][0] ;
    }
    email +="@ptit.edu.vn" ;
    cout << email ;
}
