#include<stdio.h>
void tichmt( int a[20][20] , int b[20][20] , int m , int n , int p)
{
	for( int i = 0 ; i < m ; i++)
	{
		for( int j = 0 ; j < p ; j++)
		{
			int s = 0 ;
			for( int k = 0 ; k < n ; k++ )
			{
				s += a[i][k] * b[k][j] ;
			}
			printf("%d ", s) ;
		}
		printf("\n") ;
	}
}
int main()
{
	int t ;
	scanf("%d ", &t) ;
	for( int l = 1 ; l <= t ; l++)
	{
		int m ;
		scanf("%d", &m) ;
		int a[20][20] ; int b[20][20] ;
		for( int i = 0 ; i < m ; i++)
		{
			for( int j = 0 ; j < m ; j++)
			{
				if( j <= i)
				{
					a[i][j] = j + 1 ;
				}
				else
				{
					a[i][j] = 0 ;
				}
			}
		}
		for( int i = 0 ; i < m ; i++)
		{
			for( int j = 0 ; j < m ; j++)
			{
				b[i][j] = a[j][i] ;
			}
		}
		printf("Test %d:\n", l) ;
		tichmt( a ,b ,m ,m ,m ) ;
	}
}