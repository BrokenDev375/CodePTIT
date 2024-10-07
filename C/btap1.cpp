#include<stdio.h>
void solve(  int m , int n , int k)
{	
	int a[m][n] ; 
	int b[10001] ;	
	for( int i = 0 ; i < m ; i++)
	{
		for( int j = 0 ; j < n ; j++)
		{
			scanf("%d", &a[i][j]) ; 	
		}	
	}
	int dem = 1 ;
	for( int i = 0 ; i < m ; i++)
	{
		for ( int j = 0 ; j < n ; j++)
		{
			b[dem] = a[i][j] ;
			dem++ ;
		}
	}
	int tmp ; 
	for( int i = 1; i <= m*n ; i++)
	{
		for( int j = i + 1; j <= m*n ; j++)
		{
			if( b[i] < b[j])
			{
				tmp = b[i];
				b[i] = b[j] ;
				b[j] = tmp ;
			}
			else if( b[i] == b[j])
			{
				b[j] = 0 ;
			}
		}
	}
		printf("%d\n", b[k]) ;
}
int main()
{
	int t ;
	int m , n , k ; 
	scanf("%d" ,&t);
	while(t--)
	{
		scanf("%d %d %d", &m , &n , &k) ;
		solve(	m , n , k) ;
	}
}