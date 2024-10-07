#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    cin.ignore() ;
    while(t--)
    {
        string s ;
        getline(cin , s) ;
        stringstream ss(s) ;
        string word ;
        vector<string> sentence ;
        while(ss >> word)
        {
            sentence.push_back(word) ;
        }
        reverse(sentence.begin() , sentence.end()) ;
        for( auto it = sentence.begin() ; it != sentence.end() ; ++it)
        {
            cout << *it << " " ;
        }
        cout << endl ;
    }
}
