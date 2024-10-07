#include<bits/stdc++.h>
using namespace std ;
int res(int i , int j , vector<vector<int>> v , int k , int n , int sum )
{
    if(i >= n || j >= n)
    {
        return 0 ;
    }
    sum += v[i][j] ;
    if(sum > k )
    {
        return 0 ;
    }
    if(i == n - 1 && j == n - 1)
    {
        if(sum == k)
        {
            return 1 ;
        }
        else
        {
            return 0 ;
        }
    }
    int quantity = res(i + 1 , j , v , k , n , sum) + res( i , j + 1 , v , k , n , sum) ;
    return quantity ;
}
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n , k ;
        cin >> n >> k ;
        vector<vector<int>> v(n ,vector<int>(n)) ;
        for( int i = 0 ; i < n ; i++)
        {
            for( int j = 0 ; j < n ; j++)
            {
                cin >> v[i][j] ;
            }
        }
        cout << res(0 , 0 , v , k , n , 0) << endl ;
    }
}
