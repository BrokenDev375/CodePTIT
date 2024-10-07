#include<bits/stdc++.h>
using namespace std ;
int mdd[26] ;
int main()
{
    int t ;
    cin >> t;
    cin.ignore() ;
    while(t--)
    {
        string s ;
        getline(cin  , s) ;
        int cnt = 0;
        for( int i = 0 ; i < s.size() ; i++)
        {
            int tmp = s[i] - 'a' ;
            mdd[tmp]++ ;
        }
        cnt = s.size() ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            int tmp = s[i] - 'a' ;
            cnt += mdd[tmp] * (mdd[tmp] - 1) / 2 ;
            mdd[tmp] = 0 ;
        }
        cout << cnt << endl;
        memset(mdd , 0 , sizeof(mdd));
    }
}
