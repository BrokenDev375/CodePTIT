#include<stdio.h>
int c[1001] ;
 void ss( int a[] , int n)
{
	for( int i = 0 ; i < n ; i++)
	{
		for( int j = i + 1 ; j < n ; j++)
		{
			if(a[i] > a[j])
			{
				int tmp = a[i] ;
				a[i] = a[j] ;
				a[j] = tmp ;
			}
		}
	}
}
int main()
{
	int n , m ;
	scanf("%d %d", &n , &m) ;
	int a[n] , b[m] ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]) ;
	}
	for( int i = 0 ; i < m ; i++)
	{
		scanf("%d", &b[i]) ;
	}
	ss( a , n ) ;
	ss( b , m ) ;
	for( int i = 0 ;  i < n ; i++)
	{
		for( int j = 0 ; j < m ; j++)
		{
			if(a[i] == b [j] && c[a[i]] == 0)
			{
				printf("%d ",a[i]) ;
				c[a[i]] = 1 ;
			}
		}
	}
	printf("\n") ;
	for( int i = 0 ; i < n ; i++)
	{
		if(c[a[i]] != 1)
		{
			printf("%d ", a[i]) ;
			c[a[i]] = 1 ;
		}
	}
	printf("\n") ;
	for( int i = 0 ; i < m ; i++)
	{
		if( c[b[i]] != 1)
		{
			printf("%d ", b[i] ) ;
			c[b[i]] = 1 ;
		}
	}

}