#include<bits/stdc++.h>
using namespace std ;
string max_value( int n ,int s)
{
    string res(n , '0');
    for( int i = 0 ; i < n ; i++)
    {
        if(s >= 9)
        {
            res[i] = '9' ;
            s -= 9 ;
        }
        else
        {
            res[i] = s + '0' ;
            s = 0 ;
        }
    }
    return res ;
}
string min_value(int n , int s)
{
    string res(n, '0');
    for( int i = n - 1 ; i >= 0 ; i--)
    {
        if(s >= 9)
        {
            res[i] = '9' ;
            s -= 9 ;
        }
        else if(i != 0)
        {
            res[i] = (s - 1) + '0' ;
            while( i != 0)
            {
                res[i] = '0' ;
                i++ ;
            }
            res[i] = '1' ;
        }
        else if(i==0)
        {
            res[i] = s + '0' ;
        }
    }
    return res ;
}
int main()
{
    int m , s ;
    cin >> m >> s ;
    if(s == 0 || s > 9 * m)
    {
        cout << "-1 -1" << endl ;
    }
    else
    {
        cout << min_value(m , s) << " " << max_value(m , s) << endl ;
    }
}
