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
int cs(int n)
{
	int s = 0 ;
	while( n > 0)
	{
		s += n % 10 ;
		n /= 10 ; 
	}
	if( s % 5 == 0)
	{
		return 1 ;
	}
	return 0 ;
}
int main()
{
	int n ;
	int s = 0 ;
	scanf("%d", &n);
	for( int i = 2 ; i < n ; i++)
	{
		if( snt(i) && cs(i))
		{
			printf("%d ", i) ;
			s++ ;
		}
	}
	printf("\n%d", s) ;
}