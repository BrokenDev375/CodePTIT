#include<stdio.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	for( int l = 1 ; l <= t ; l++ )
	{
		int m , n ;
		scanf("%d %d", &m , &n) ;
		int a[m][n] ; int b[n][m] ; 
		for( int i = 0 ; i < m ; i++)
		{
			for( int j = 0 ; j < n ; j++)
			{
				scanf("%d", &a[i][j]) ;
			}
		}
		for( int i = 0 ; i < n ; i++)
		{
			for( int j = 0 ; j < m ; j++)
			{
				b[i][j] = a[j][i] ;
			}
		}
		printf("Test %d:\n", l) ;
		for( int i = 0 ; i < m ; i++)
		{
			for(int j = 0 ; j < m ; j++)
			{
				int s = 0 ; 
				for( int k = 0 ; k < n ; k++)
				{
					s += a[i][k] * b[k][j] ;
				}
				printf("%d ", s) ;
			}
			printf("\n") ;
		}
	}
}