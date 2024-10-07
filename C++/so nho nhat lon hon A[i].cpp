#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        vector<int> v1 , v2 ;
        for( int i = 0 ; i < n ; i++)
        {
            int tmp ;
            cin >> tmp ;
            v1.push_back(tmp) ;
            v2.push_back(tmp) ;
        }
        sort(v2.begin() , v2.end()) ;
        for( int i = 0 ; i < n ; i++)
        {
            if(upper_bound(v2.begin() , v2.end() ,v1[i]) == v2.end())
            {
                cout << "_ " ;
            }
            else
            {
                auto it = upper_bound(v2.begin() , v2.end() ,v1[i]) ;
                cout << *it << " " ;
            }
        }
        cout << endl ;
    }
}
