#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s1 ;
    string s2 ;
    string word ;
    getline(cin , s1) ;
    stringstream ss(s1) ;
    getline(cin , s2) ;
    while(ss >> word)
    {
        if(word != s2)
        {
            cout << word << " " ;
        }
    }
}
