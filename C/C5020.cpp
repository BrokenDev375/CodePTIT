#include<stdio.h>
long long F[100] ;
void fibo()
{
	F[0] = 0 ;
	F[1] = 1 ; 
	for( int i = 2 ; i <= 92 ; i++)
	{
		F[i] = F[i - 1] + F[ i - 2] ;
	}
}
int main()
{
	fibo() ;
	int n ;
	scanf("%d", &n) ;
	long long  a[n][n] ;
	int hd = 0 , cd = 0 ,hc = n - 1 , cc = n - 1 , dem = 0 ;
	while( hd <= hc && cd <= cc)
	{
		for( int i = cd ; i <= cc ; i++)
		{
			a[hd][i] = F[dem] ;
			dem++ ;
		}
		hd++ ;
		for( int i = hd ; i <= hc ; i++)
		{
			a[i][cc] = F[dem] ;
			dem++ ;
		}
		cc-- ;
		for( int i = cc ; i >= cd ; i --)
		{
			a[hc][i] = F[dem] ;
			dem++ ;
		}
		hc-- ;
		for( int i = hc ; i >= hd ; i--)
		{
			a[i][cd] = F[dem] ;
			dem++ ;
		}
		cd++ ;
	}
	for( int i = 0 ; i < n ; i++)
	{
		for( int j = 0 ; j < n ; j++)
		{
			printf("%lld ", a[i][j]) ;
		}
		printf("\n") ;
	}
}