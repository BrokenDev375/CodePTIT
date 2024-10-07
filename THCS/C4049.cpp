#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int bcnn(int a , int b)
{
	int c = a * b ;
	while(b != 0)
	{
		int r = a % b ;
		a = b ;
		b = r ;
	}
	return c / a ;
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		int n ;
		scanf("%d", &n) ;
		int a[n] ;
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%d", &a[i]) ;
		}
		int b[n + 1] ;
		b[0] = a[0] ;
		for( int i = 1 ; i < n ; i++)
		{
			b[i] = bcnn(a[i - 1] , a[i]) ;	
		}	
		b[n] = a[n - 1] ;
		for( int i = 0 ; i <= n ; i++)
		{
			printf("%d ", b[i]) ;
		}
		printf("\n") ;
	}
}