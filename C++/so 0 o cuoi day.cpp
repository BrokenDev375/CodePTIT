#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , cnt = 0;
        cin >> n ;
        long long a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            if(a[i] != 0)
            {
                cout << a[i] << " " ;
            }
            else
            {
                cnt++ ;
            }
        }
        while(cnt--)
        {
            cout << "0 " ;
        }
        cout << endl ;
    }
}
