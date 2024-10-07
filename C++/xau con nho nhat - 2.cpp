#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        int quantity = 0 ;
        int cnt = 0 ;
        int left = 0 ;
        int minlen = INT_MAX ;
        vector<int>  cnts(256, 0) ,  windowslide(256 , 0) ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            if(cnts[s[i]] == 0)
            {
                quantity++ ;
                cnts[s[i]] = 1 ;
            }
        }
        for( int i = 0 ; i < s.size() ; i++)
        {
            windowslide[s[i]]++ ;
            if(windowslide[s[i]] == 1 )
            {
                cnt++ ;
            }
            if(cnt == quantity)
            {
                while(windowslide[s[left]] > 1)
                {
                    windowslide[s[left]]-- ;
                    left++ ;
                }
                int tmp = i - left + 1 ;
                minlen = min(minlen , tmp) ;
            }
        }
        cout << minlen << endl ;
    }
}
