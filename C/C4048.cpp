#include<stdio.h>
int a[10001] ;
int main()
{
	int n , l , r ;
	scanf("%d", &n) ;
	int m ;
	scanf("%d", &m) ;
	int k ;
	int dem = 0 ;
	int s ;
	scanf("%d", &k) ;
	for( int i = 0 ; i < m ; i++)
	{
		scanf("%d ", &s) ;
		l = s - 1 - k ;
		r = s - 1 + k ;
		if( l < 0)
		{
			l = 0 ;
		}
		if( r >= n )
		{
			r = n - 1 ;
		}
		for( int j = l ; j <= r ; j++)
		{
			a[j] = 1 ;
		}
	}
	for( int i = 0 ; i < n ; i++)
	{
		if( a[i] == 0)
		{
			dem++ ;
			r = i + 2 * k ;
			if( l < 0)
			{
				l = 0 ; 
			}
			if(r >= n)
			{
				r = n - 1 ;
			}
			for( int j = i ; j <= r ; j++)
			{
				a[j] = 1 ;
			}
		}
	}
	printf("%d", dem) ;
}