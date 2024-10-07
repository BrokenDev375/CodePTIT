#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    cin.ignore() ;
    vector<string> info ;
    while(t--)
    {
        string s ;
        getline(cin , s) ;
        stringstream ss(s) ;
        string word ;
        string res = {} ;
        vector<string> v ;
        while(ss >> word)
        {
            v.push_back(word) ;
        }
        for( int i = 0 ; i < v[v.size() - 1].size() ; i++)
        {
            v[v.size() - 1][i] = tolower(v[v.size() - 1][i]) ;
            res += v[v.size() - 1][i] ;
        }
        for( int i = 0 ; i < v. size()  - 1; i++)
        {
            v[i][0] = tolower(v[i][0]) ;
            res += v[i][0] ;
        }
        int cnt = 1 ;
        for(int i = 0 ; i < info.size() ; i++)
        {
            if(res == info[i])
            {
                cnt++ ;
            }
        }
        cout << res ;
        if(cnt > 1 )
        {
            cout << cnt ;
        }
        cout << "@ptit.edu.vn" << endl ;
        info.push_back(res) ;
    }
}
