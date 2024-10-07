#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int T ;
	scanf("%d", &T) ;
	for( int t = 1 ; t <= T ; t++)
	{
		int m , n ;
		scanf("%d %d", &m , &n) ;
		int a[m][n] ;
		for( int i = 0 ; i < m ; i++)
		{
			for( int j = 0 ;  j < n ; j ++)
			{
				scanf("%d ", &a[i][j]) ;
			}
		}
		
		for( int i = 0 ; i < m ; i++)
		{
			int max = -1e9 ;
			for( int j = 0 ; j < n ;j++)
			{
				for ( int k = i ; k < m ; k++)
				{
					for( int l = j ; l < n ; l++)
					{
						if(a[i][j] > a[k][l])
						{
							int tmp = a[i][j] ;
							a[i][j] = a[k][l] ;
							a[k][l] = tmp ; 
							max = a[k][l] ;
						}
					}
				}
			}
		}
		printf("Test %d:\n", t) ;
		for( int i = 0 ; i < m ; i++)
		{
			for( int j = 0 ; j < n ; j++)
			{
				printf("%d ",a[i][j]) ;
			}
			printf("\n") ;
		}
	}
} 