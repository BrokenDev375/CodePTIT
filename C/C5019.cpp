#include<stdio.h>
#include<math.h>
int a[10000] ;
int b[400] ;
void eratosthenes()
{
	for( int i = 2 ; i < 10000 ; i++)
	{
		a[i] = 1 ;
	}
	for( int i = 0 ; i < 10000 ; i++)
	{
		if(a[i] == 1)
		{
			for( int j = i * i ; j < 10000 ; j += i)
			{
				a[j] = 0 ;
			}
		}
	}
	int dem = 0 ; int cnt = 0 ;
	while(dem < 400)
	{
		if( a[cnt] == 1)
		{
			b[dem] = cnt ;
			dem++ ;
		}
		cnt++ ;
	}
}
int main()
{
	
	int t ;
	eratosthenes() ;
	scanf("%d", &t) ;
	for( int k = 1 ; k <= t ; k++)
	{
		int n ;
		scanf("%d", &n) ;
		int a[n][n] ;
		int hd = 0 , cd = 0 , hc =  n - 1 , cc = n - 1 , dem = 0 ;
		while( cd <= cc && hd <= hc)
		{
			for( int i = cd ; i <= cc ; i++)
			{
				a[hd][i] = b[dem] ;
				dem++ ;
			}
			hd++ ;
			for( int i = hd ; i <= hc ; i++)
			{
				a[i][cc] = b[dem] ;
				dem++ ;
			}
			cc-- ;
			for( int i = cc ; i >= cd ; i--)
			{
				a[hc][i] = b[dem] ;
				dem++ ;
			}
			hc-- ;
			for( int i = hc ; i >= hd ; i --)
			{
				a[i][cd] = b[dem] ;
				dem++ ;
			}
			cd++ ;
		}
		printf("Test %d:\n", k) ;
		for( int i = 0 ; i < n ; i++)
		{
			for( int j = 0 ; j < n ; j++)
			{
				printf("%d ", a[i][j]) ;
			}
			printf("\n") ;
		}
	}
}