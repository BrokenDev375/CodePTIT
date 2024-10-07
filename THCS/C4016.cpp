#include<stdio.h>
#include<math.h>
int snt( int n )
{
	if( n < 2)
	{
		return 0 ;
	}
	for	(int i = 2; i <= sqrt(n) ;++i)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1 ;
}
		int dem[1000000];

int main ()
{	
	int t ;
	scanf("%d", &t);
	for( int j = 1 ; j <= t; j++)
	{
		int n ;
		scanf("%d", &n);
		int a[n];
		int max = -1e9 ;
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%d", &a[i]);
		}
		printf("Test %d:\n",j);
		for( int i = 0 ; i < n ; i++)
		{
			if(a[i] > max)
			{
				max = a[i] ;
			}
		}
		for( int i = 0 ; i < n ; i++)
		{
			if(snt(a[i]))
			{
				dem[a[i]]++;
			}
		}
		for( int i = 0 ; i <= max; i++)
		{
			if(snt(i) && dem[i] != 0)
			{
				printf("%d xuat hien %d lan\n", i , dem[i]);
			}
		}
		for( int i = 0 ; i <= 1000000 ; i++)
		{
			dem[i] = 0 ;
		}
	}
	return 0 ;
}
