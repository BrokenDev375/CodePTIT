#include<stdio.h>
#include<stdlib.h>
int comp(const void *a , const void *b)
{
	long long *x = (long long*) a ;
	long long *y = (long long*) b ;
	if(*x < *y)
	{
		return -1 ;
	}
	return 1 ;
}
int main()
{
	int t ;
	scanf("%d", &t);
	while(t--) 
	{
		int n ;
		scanf("%d", &n) ;
		long long a[n] ;
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%lld", &a[i]) ;
		}
		qsort(a , n , sizeof(long long ), comp) ;
		long long min = 1e9 ;
		for( int i = 0 ; i < n - 1 ; i++)
		{
			if(a[i+1] - a[i] < min)
			{
				min = a[i+1] - a[i] ;
			}
		}
		int count = 0 ;
		for( int i = 0 ; i < n - 1 ; i++)
		{
			if(a[i+1] - a[i] == min)
			{
				count++ ;
			}
		}
		printf("%lld %d\n", min , count) ;
	}
}