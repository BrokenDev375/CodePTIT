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
			if(i == a - 1)
			{	
				printf("%d ", x[b - 1][j]) ;
			}
			else if( i == b - 1)
			{
				printf("%d ", x[a - 1][j]) ;
			}
			else 
			{
				printf("%d ", x[i][j]) ;
			}
		}
		printf("\n") ;
	}
}