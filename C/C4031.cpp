#include<stdio.h>
#include<math.h>
int main()
{	int t ;
	scanf("%d", &t) ;
	for( int k = 1 ; k <= t ; k++)
	{
			int n ;
			scanf("%d", &n) ;
			int a[n] ; int b[n] ;
			for( int i = 0 ; i < n ; i++)
			{
				scanf("%d", &a[i]) ;
				b[i] = 0 ;
			}
			for( int i = 0 ; i < n - 1 ; i++)
			{
				int j = i ;
				while(a[j+1] > a[j] && j < n - 1 )
				{
					j++ ;
					b[i]++ ;
		 		}
			}
			int max = -1e9 ;
			for( int i = 0 ; i < n ; i++)
			{
				if( b[i] > max)
				{
					max = b[i] ;
				}
			}
			printf("Test %d:\n",k) ;
			printf("%d\n", max + 1) ;
			for(int i = 0 ; i < n ; i++)
			{
				if(b[i] == max)
				{
					for( int j = i ; j <= i+b[i] ; j++)
					{
					printf("%d ", a[j]) ;
					}
					printf("\n") ;
				}
			}
	}
}