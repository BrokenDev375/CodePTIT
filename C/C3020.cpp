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
long long s6(long long n)
{
	while( n > 0)
	{
		if( n % 10 == 6)
		{
			return 1 ;
		}
		n /= 10 ;
	}
	return 0 ;
}
long long cs(long long n)
{
	int s = 0 ;
	while( n> 0)
	{
		s += n % 10 ;
		n /= 10 ; 
	}
	if( s % 10 == 8)
	{
		return 1 ;
	}
	return 0 ;
}
int main()
{
	long long a , b ;
	int s = 0 ;
	scanf("%lld %lld", &a , &b) ;
	if( a > b )
	{
		long long tmp = a ;
		a = b ;
		b = tmp ;
	}
	for( long long i = a ; i <= b ; i++)
	{
		if(tn(i) && cs(i) &&s6(i))
		{
			printf("%d ", i );
		}
	}
	
}