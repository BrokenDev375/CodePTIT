#include<stdio.h>
int main()
{
	int m , n ;
	scanf("%d %d", &m , &n) ;
	int x[m][n] ;
	for( int i = 0 ; i < m ; i++)
	{
		for( int j = 0 ; j < n ; j++)
		{
			scanf("%d ", &x[i][j]) ;
		}
	}
	int a , b ;
	scanf("%d %d", &a , &b) ;
	for( int i = 0 ; i < m ; i++)
	{
		for( int j = 0 ; j < n ; j++)
		{
			if( j == a - 1)
			{
				printf("%d ", x[i][b - 1]) ;
			}
			else if( j == b - 1)
			{
				printf("%d ", x[i][a - 1]) ;
			}
			else
			{
				printf("%d ", x[i][j]) ;
			}
		}
		printf("\n") ;
	}
}