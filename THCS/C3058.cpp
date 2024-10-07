#include<stdio.h>
#include<math.h>
int snt( int n )
{
	for	(int i = 2; i <= sqrt(n) ;++i)
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
		int n ;
		long long p = 1 ;
		scanf("%d", &n) ;
		for( int i = 2 ; i <= n ; i++)
		{
			int m = n ;
			if(snt(i))
			{
				while( m >= i)
				{	
					m /= i ;
					p *= i ;	
				}
			}
		}
		printf("%lld\n", p) ;
	}
}