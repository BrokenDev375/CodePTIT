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
	int count = 1 ;
	for( int j = i+1 ; j < n ; j++)
	{
		if(a[j] == a [i])
		{
			count ++ ;
		}
	}
	return count ;
}
int main ()
{
	int n ;
	scanf("%d" , & n);
	int a[n];
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d ",&a[i]);
	}
	for( int i = 0 ; i < n ; i++)
	{
		if(solve(a , i , n) != 0 )
		{
			printf("%d %d\n", a[i] , solve(a , i , n));
		}
	}
}