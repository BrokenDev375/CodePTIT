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
        vector<string> v ;
        while(ss >> word)
        {
            v.push_back(word) ;
        }
        int odd = 0 , even = 0 ;
        for( int i = 0 ; i < v.size() ; i++)
        {
            if( (v[i][ v[i].size() - 1] - '0') % 2 == 0)
            {
                even++ ;
            }
            else
            {
                odd++ ;
            }
        }
        if((even > odd && v.size() % 2 == 0 ) || (odd > even && v.size() % 2 == 1))
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
