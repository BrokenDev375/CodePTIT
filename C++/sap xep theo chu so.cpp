#include<bits/stdc++.h>
using namespace std ;
bool cmp(string a , string b)
{
    string s1 = a + b ;
    string s2 = b + a ;
    return s1 > s2 ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        vector <string> v ;
        string s = {} ;
        for( int i = 0 ; i < n ; i++)
        {
            string tmp ;
            cin >> tmp ;
            v.push_back(tmp) ;
        }
        sort(v.begin() , v.end() , cmp) ;
        for(int i = 0 ; i < n ; i++)
        {
            cout << v[i] ;
        }
        cout << endl ;
    }
}
