#include<stdio.h>
#include<math.h>
int b[30001] = {0} ;
int solve()
{
		int n ;
		scanf("%d", &n);
		int a[n] ;
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%d ", &a[i]) ;
		}
		for( int i = 0 ; i < n ; i++)
		{
			b[a[i]]++ ;
		}
		int max = -1e6 ;
		for( int i = 0 ; i <= 30000 ; i++)
		{
			if( b[i] >= max)
			{
				max = b[i] ;
			}
			
		}
		for( int i = 0 ; i <= 30000 ; i++)
		{
			if(b[i] == max)
			{
				printf("%d ", i) ;
			}
		}
		printf("\n") ;
		for( int i = 0 ; i <= 30000; i++)
		{
			b[i] = 0 ;
		}
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		solve() ;
	}
}