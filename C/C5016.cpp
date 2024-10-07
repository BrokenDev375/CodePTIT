#include<stdio.h>
int main()
{
	int n ;
	scanf("%d", &n) ;
	int hd = 0 , cd = 0 ,hc = n - 1 , cc = n - 1 , dem = 1 ;
	int a[n][n] ;
	while( hd <= hc && cd <= cc)
	{
		for( int i = cd ; i <= cc ; i++)
		{
			a[hd][i] = dem ;
			dem++ ;
		}
		hd++ ;
		for(int i = hd ; i <= hc ; i++)
		{
			a[i][cc] = dem ;
			dem ++ ;
		}
		cc-- ;
		for( int i = cc	 ; i >= cd ; i--)
		{
			a[hc][i] = dem ;
			dem ++ ;
		}
		hc --;
		for( int i = hc ; i >= hd ; i--)
		{
			a[i][cd] = dem ;
			dem ++ ;
		}
		cd ++ ;
	}  
	for( int i = 0 ; i < n ; i++)
	{
		for( int j = 0 ; j < n ; j++)
		{
			printf("%d ", a[i][j]) ;
		}
		printf("\n") ;
	}
}