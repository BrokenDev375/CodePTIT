#include<bits/stdc++.h>
using namespace std ;
int a[105][105] ;
void dfs(int i , int j , int m , int n)
{
    if(i == -1 || j == -1 || i == m || j == n )
    {
        return ;
    }
    if(a[i][j] == 0)
    {
        return ;
    }
    a[i][j] = 0 ;
    dfs(i + 1 , j, m , n) ;
    dfs(i + 1 , j + 1 , m , n) ;
    dfs( i + 1 , j - 1 , m , n) ;
    dfs(i ,j + 1, m , n) ;
    dfs( i , j - 1 , m , n) ;
    dfs(i - 1 , j - 1 , m , n) ;
    dfs(i - 1 , j , m , n) ;
    dfs(i - 1 , j + 1 , m , n) ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int m , n , sum = 0;
        cin >> m >> n ;
        for( int i = 0 ; i < m ; i++)
        {
            for( int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j] ;
            }
        }
        for( int i = 0 ; i < m ; i++)
        {
            for( int j = 0 ; j < m ; j++)
            {
                if(a[i][j] == 1 )
                {
                    sum++;
                    dfs(i , j , m , n) ;
                }
            }
        }
        cout << sum << endl ;
    }
}
