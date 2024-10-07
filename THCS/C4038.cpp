#include<stdio.h>
int main()
{
	int n ;
	scanf("%d", &n) ;
	int a[n] ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d ", &a[i]) ;
	}
	for( int i = 0 ; i < n - 1 ; i++)
	{
		int min = 1e9 ;
		for( int j = i ; j < n ; j++)
		{
			if( a[j] < min)
			{
				min = a[j] ;
			}
		}
		for( int j = i ; j < n ; j++)
		{
			if(a[j] == min)
			{
				int tmp = a[i] ;
				a[i] = a[j] ;
				a[j] = tmp ;
			}
		}
		for( int j = 0 ; j < n ; j++)
		{
			printf("%d ",a[j]) ;
		}
		printf("\n") ;
	}
}