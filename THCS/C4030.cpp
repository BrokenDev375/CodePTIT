#include<stdio.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	for( int k = 1 ; k <= t ; k++)
	{
		int n ;
		scanf("%d", &n) ;
		int a[n] , b[n] ;
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%d ", &a[i]) ;
		}
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%d ", &b[i]) ;
		}
		for( int i = 0 ; i < n ; i++)
		{
			for( int j = i + 1 ; j < n ; j++)
			{
				if(a[j] < a[i])
				{
					int tmp = a[i] ;
					a[i] = a[j] ;
					a[j] = tmp ;
				}
				if(b[j] > b[i])
				{
					int tmp = b[i] ;
					b[i] = b[j] ;
					b[j] = tmp ;
				}
			}
		}
		printf("Test %d:\n", k) ;
		for( int i = 0 ; i < n ; i++)
		{
			printf("%d %d ", a[i] , b[i]) ;
		}
		printf("\n") ;
	}
}