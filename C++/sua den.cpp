#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , k , b ;
    cin >> n >> k >> b ;
    int a[n] = {};
    for( int i = 0 ; i < b ; i++)
    {
        int tmp ;
        cin >> tmp ;
        a[tmp - 1] = 1 ;
    }
    int c[n - k + 1] = {};
    for( int i = 0 ; i < k ; i++)
    {
        if(a[i] == 0)
        {
            c[0]++ ;
        }
    }
    for( int i = k ; i < n ; i++)
    {
        int tmp = c[i - k] ;
        if(a[i - k] == 0)
        {
            tmp-- ;
        }
        if(a[i] == 0)
        {
            tmp++ ;
        }
        c[i - k + 1] = tmp ;
    }
    sort(c , c + n - k + 1 , greater<int>()) ;
    cout << k - c[0] << endl ;
}
