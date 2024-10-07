#include<bits/stdc++.h>
using namespace std ;
bool check(int a[] , string s)
{
    if(s.size() % 2 == 1)
    {
        for( int i = 0 ; i < 26 ; i++)
        {
            if(a[i] > (s.size() / 2 + 1))
            {
                return false ;
            }
        }
    }
    else
    {
        for(int i = 0 ; i < 26 ; i++)
        {
            if(a[i] > s.size() / 2)
            {
                return false ;
            }
        }
    }
    return true ;
}
int main()
{
    int t ;
    cin >> t ;
    cin.ignore() ;
    while(t--)
    {
        int a[26] = {} ;
        string s ;
        getline(cin , s) ;
        for( int i = 0 ; i  <  s.size() ; i++)
        {
            int tmp = s[i] - 'a' ;
            a[tmp]++ ;
        }
        cout << check(a , s) << endl ;
    }
}
