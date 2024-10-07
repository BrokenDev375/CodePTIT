#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        vector<int> v(n) , in(n , 1 ) , de( n , 1) ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> v[i] ;
        }
        for(int i = 0 ; i < n ; i++)
        {
            for( int j = 0 ; j < i ; j++)
            {
                if(v[i] > v[j])
                {
                    in[i] = max(in[i] , in[j] + 1) ;
                }
            }
        }
        for( int i = n - 2 ; i >= 0 ; i--)
        {
            for( int j = n - 1 ; j > i ; j--)
            {
                if(v[i] > v[j])
                {
                    de[i] = max(de[i] , de[j] + 1) ;
                }
            }
        }
        int maxa = 0 ;
        for( int i = 0 ; i < n ; i++)
        {
            maxa = max(maxa , in[i] + de[i] - 1) ;
        }
        cout << maxa << endl ;
    }
}
