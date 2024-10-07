#include<stdio.h>
int solve( int a[] , int i )
{
	for( int j = 0 ; j < i ;j++ )
	{
		if(a[i] < a[j])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int t ;
	scanf("%d", &t);
	while(t--)
	{
		int n ;
		scanf("%d", &n);
		int  a[n] ;	
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%d ",&a[i]);
		}
		int count = 1 ;
		for( int i = 1 ; i < n; i++)
		{
			if(solve(a, i))
			{
				count ++ ;
			}
		}	
		printf("%d\n", count) ; 
	}
}