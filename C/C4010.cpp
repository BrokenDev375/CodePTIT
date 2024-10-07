#include<stdio.h>
int main()
{
	int n ;
	scanf("%d", &n);
	int a[n];
	for( int i = 0 ; i < n; i++)
	{
		scanf("%d ", &a[i]);
	}
	int min = 1e8 ;
	for( int i = 0 ; i < n ; i++ )
	{
		if(a[i] <= min)
		{
		 min = a[i] ;
		}
	}
	int premin = 1e8 ;
	for( int  i = 0 ; i < n ; i++ )
	{
		if(a[i] <= premin && a[i] != min  )
		{
	 premin =	a[i]  ;
		}
	}
	printf("%d %d", min , premin);
}