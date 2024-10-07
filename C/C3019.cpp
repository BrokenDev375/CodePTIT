#include<stdio.h>
#include<math.h>
long long tn(long long n)
	{
    long long m = 0, tmp = n;
    while(n != 0)
	{
        m = m * 10 + n % 10;
        n /= 10;
    }
    if(tmp == m)
	{
        return 1;
    }
    return 0;
}
long long cs(long long n)
{
	long long m = n ;
	int s = 0 ;
	while( m > 0)
	{
		s += m % 10 ;
		m /= 10 ;		
	}
	if( s % 10 == 0)
	{
		return 1 ;
	}
	return 0 ;
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		long long n ; int s = 0 ;
		scanf("%lld", &n) ;
		long long m = pow( 10 , n - 1) ; n = pow (10 , n) - 1 ;
		for( long long i = m ; i <= n ; i++)
		{
			if( tn(i) && cs(i))
			{
				s++ ;
			}
		}
		printf("%d\n", s) ;
	}
	return 0 ;
}
