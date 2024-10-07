#include<stdio.h>
int solve(int a[] , int i , int n)
{
	for( int j = 0 ;  j < i ; j++)
	{
		if(a[j] == a[i])
		{
			return 0 ;
		}
	}
	for( int j = i+1 ; j < n ; j++)
	{
		if(a[j] == a [i])
		{
			return 0;
		}
	}
	return 1 ;
}
int main()
{
	int n ;
	scanf("%d", &n);
	int a[n];
	for ( int i = 0 ; i < n ; i++)
	{
		scanf("%d ", &a[i]);
	}
	int count = 0 ;
	for( int i = 0 ; i < n ; i++)
	{
		if(solve(a , i , n))
		{
			count ++ ;
		}
	}
	printf("%d\n", count);
	for( int i = 0 ; i < n ; i++)
	{
		if(solve(a , i , n))
		{
			printf("%d ", a[i]);
		}
	}
}