#include<stdio.h>
int main()
{
	int m ; 
	scanf("%d ", &m) ;
	int a[m][m] ;
	for( int i = 0 ; i < m ; i++)
	{
		for( int j = 0 ; j < m ; j++)
		{
			scanf("%d", &a[i][j]) ;
		}
	}
	for( int i = 0 ; i < m ; i++)
	{
		for( int j = 0 ; j < m ; j++)
		{
			if(j == i)
			{
				printf("%d ", a[i][m - j - 1]) ;
			}
			else if( j == m - i - 1)
			{
				printf("%d ", a[i][m - 1- j]) ;
			}
			else
			{
				printf("%d ", a[i][j]) ;	
			}
		}
		printf("\n") ;
	}
}