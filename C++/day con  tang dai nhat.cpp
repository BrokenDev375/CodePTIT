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
        int a[n] , b[n];
        fill_n(b , n , 1) ;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            for(int j = 0 ; j < i ; j++)
            {
                if(a[j] < a[i] && b[i] < b[j] + 1)
                {
                    b[i] = b[j] + 1 ;
                }
            }
        }
        sort(b , b + n) ;
        cout << b[n - 1] << endl ;
    }
}
