#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    cin.ignore() ;
    while(t--)
    {
        int n ;
        cin >> n ;
        cin.ignore() ;
        string a ;
        cin >> a ;
        string res = {} ;
        for( int i = 0 ; i < n ; i++)
        {
            if(a[i] == '0' || a[i] == '1')
             {
                 continue ;
             }
             else if(a[i] == '2')
             {
                 res += "2" ;
             }
             else if(a[i] == '3')
             {
                 res += "3" ;
             }
             else if(a[i] == '4')
             {
                 res += "232" ;
             }
             else if(a[i] == '5')
             {
                 res += "5" ;
             }
             else if( a[i] == '6')
             {
                 res += "35" ;
             }
             else if( a[i] == '7')
             {
                 res += "7" ;
             }
             else if( a[i] == '8')
             {
                 res += "2227" ;
             }
             else if( a[i] == '9')
             {
                 res +="3327" ;
             }
        }
        sort(res.begin() , res.end() , greater<char>()) ;
        cout << res << endl;
    }
}
