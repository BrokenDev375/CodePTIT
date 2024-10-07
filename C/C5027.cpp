#include<stdio.h>
int main()
{
	int n ;
	scanf("%d" , &n) ;
	int a[n][2] ;
	for( int i = 0 ; i < n ; i++)
	{
		for( int j = 0; j < 2 ; j++)
		{
			scanf("%d", &a[i][j]) ;
		}
	}
	long long min1 = 1e9 ; long long min2 =1e9 ;
	for( int i = 0 ; i < n ; i++)
	{
		if(a[i][0] < min1)
		{
			min1 = a[i][0] ;
		}
	}
	for( int i = 0; i < n ; i++)
	{
		if(a[i][1] < min2)
		{
			min2 = a[i][1] ;
		}
	}
	printf("%lld", min1 * min2) ;
}