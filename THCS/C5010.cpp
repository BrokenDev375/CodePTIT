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
	int m ;
	scanf("%d", &m) ;
	int a[m][m] ;
	int s = 0 ;
	for( int i = 0 ; i < m ; i++)
	{
		for( int j = 0 ; j < m ; j++)
		{
			scanf("%d ", &a[i][j]) ;
		}
	}
	for( int i = 0 ; i < m ; i++)
	{
		for( int j = i ; j < m ; j++)
		{
			if(snt(a[i][j]))
			{
				s += a[i][j] ;
			}
		}
	}
	printf("%d", s) ;
	
}