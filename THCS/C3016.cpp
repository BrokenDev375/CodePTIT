#include<stdio.h>
#include<math.h>
long long F[100] ;
void fibo()
{
	F[0] = 0 ;
	F[1] = 1 ; 
	for( int i = 2 ; i <= 92 ; i++)
	{
		F[i] = F[i - 1] + F[ i - 2] ;
	}
}
int solve(long long a)
{
	for( int i = 0 ; i <= 92 ; i++)
	{
		if( a == F[i])
		{
			return 1 ;
		}
	}
	return 0 ;
}
int main()
{
	fibo() ;
	int  t;
	scanf("%d", &t) ;
	while(t--)
	{
		long long a ;
		scanf("%lld" , &a) ;
		if( solve(a) )
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n") ;
		}
	}
}