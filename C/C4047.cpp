#include<stdio.h>
#include<string.h>
int a[101] , b[101] ;	
int main()
{
	int t ;
	scanf("%d", &t) ;
	for( int i = 0 ; i < t ; i++)
	{
		scanf("%d %d", &a[i] , &b[i]) ;
	}
	for( int i = 0 ; i < t ; i++)
	{
		for( int j = i + 1 ; j < t; j++)
		{
			if(a[j] < a[i])
			{
				int tmp = a[i] ;
				a[i] = a[j] ;
				a[j] = tmp ;
				tmp = b[i] ;
				b[i] = b[j] ;
				b[j] = tmp ;
			}
		}
	}
	int n ;
	for( int i = 0 ; i < t ; i++)
	{
		n = a[i] + b[i] ;
		if(a[i+1] < n)
		{
			a[i+1] = n ;
		}
	}
	printf("%d", a[t]) ;
}