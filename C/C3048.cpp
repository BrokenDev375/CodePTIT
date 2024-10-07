#include<stdio.h>
int utc( long long n)
{
	int c = 0 ;
	int l = 0 ;
	while( n > 0)
	{
		if(n % 2 == 1 )
		{
			++l ;
		}
		else 
		{
			++c ;
		}
		n /= 10 ; 
	}
	if( c > l )
	{
		return 1 ;
	}
	return 0 ;
}
int main()
{
	long long a ;
	int t ;
	scanf("%d", &t) ;
	while( t-- )
	{
		scanf("%lld", &a ) ;
		if( utc(a) == 1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}