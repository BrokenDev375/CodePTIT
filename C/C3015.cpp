#include<stdio.h>
#include<math.h>
long long snt( long long  n )
{

	for	(long long i = 2; i <= sqrt(n) ;++i)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return n > 1 ;
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		long long max = 0 ;
		long long n ;
		scanf("%lld", &n) ;
		for( long long i = 1 ; i <= sqrt(n) ; i++)
		{
			if(n % i == 0)
			{
				if( snt(i) && i > max )
				{
					max = i ;
				}
				if( snt(n / i) && n / i > max)
				{
					max = n / i ; 
				}
			}
		}
		printf("%lld\n",max) ;
	}
}