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
        int a[n] ;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            if(i == 0)
            {
                long long tmp = a[i] * a[i + 1] ;
                cout << tmp << " " ;
            }
            else if(i == n - 1)
            {
                long long tmp = a[i] * a[i - 1] ;
                cout << tmp << " " ;
            }
            else
            {
                long long tmp = a[i - 1] * a[i + 1] ;
                cout << tmp << " " ;
            }
        }
        cout << endl ;
    }
}
