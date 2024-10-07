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
	int n; int dem = 0 ; int h ;
	scanf("%d", &n) ;
	int a[n][n] ;
	for( int i = 0 ; i < n ; i++)
	{
		for( int j = 0 ; j < n ; j++)
		{
			scanf("%d", &a[i][j]) ;
		}
	}
	int max = -1e9 ;
	for( int i = 0 ; i < n ; i++)
	{
		dem = 0 ;
		for( int j = 0 ; j < n ; j++)
		{
			if(snt(a[i][j]))
			{
				dem++ ;
			}
		}
		if (dem > max)
		{
			max = dem ;
			h = i + 1 ;
		}
	}
	printf("%d\n", h) ;
	for (int i = 0 ; i < n ; i++)
	{
		if(snt(a[h - 1][i]))
		{
			printf("%d ", a[h - 1][i]) ;
		}
	}
}