#include<stdio.h>
#include<math.h>
int gt( int n, int p)
{
	int s = 0 ;
	for( int i = 1 ; i <= n ; i++)
	{
		int m = i ;
		while(m % p == 0)
		{
			s++ ;
			m /= p ;
		}
	}
	return s ;
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		int n , p ;
		scanf("%d %d", &n ,&p) ;
		int x = gt(n , p) ;
		printf("%d\n", x) ;
	}
}
