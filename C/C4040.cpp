#include<stdio.h>
long long maxof(long long a , long long b)
{
	if(a > b)
	{
		return a ;
	}
	return b ;
}
int main()
{
	int t ;
	scanf("%d ", &t) ;
	while(t--)
	{
		int n ;
		scanf("%d", &n) ;
		long long a[n] ;
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%lld", &a[i]) ;
		}
		long long max = 0 ; long long sum = 0 ;
		for( int i = 0 ; i < n ; i++)
		{
			sum += a[i] ;
			if( sum < 0)
			{
				sum = 0 ;		
			}
				max = maxof(sum , max) ;
		}
		printf("%lld\n",max) ;
	}
}