#include<bits/stdc++.h.>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int mode ;
        cin >> mode ;
        cin.ignore() ;
        string s ;
        getline(cin , s) ;
        stringstream ss(s) ;
        string word ;
        vector<string> v ;
        while(ss >> word)
        {
            v.push_back(word) ;
        }
        for(int i = 0 ; i < v.size() ; i++)
        {
            v[i][0] = toupper(v[i][0]) ;
            for(int j = 1 ; j < v[i].size() ; j++)
            {
                v[i][j] = tolower(v[i][j]) ;
            }
        }
        if(mode == 1)
        {
            cout << v[v.size() - 1] << " " ;
            for( int i = 0 ; i < v.size() - 1; i++)
            {
                cout << v[i] << " " ;
            }
        }
        else
        {
            for( int i = 1 ; i < v.size() ; i++)
            {
                cout << v[i] << " " ;
            }
            cout << v[0] ;
        }
        cout << endl ;
    }
}
