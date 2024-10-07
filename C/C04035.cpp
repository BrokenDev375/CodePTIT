#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	int n ;
	scanf("%d", &n) ;
	int a[n] , b[n] ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d %d", &a[i] , &b[i]) ;
	}
	for( int i = 0 ; i < n ; i++)
	{
		for( int j = i + 1 ;  j < n ; j++)
		{
			if(a[i] > a[i] )
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
	int t1 = 0 , t2 = 0 ;
	int x = 0 , y = 0 ; 
	while(x < n)
	{
		t1 += a[x] ;
		x++ ;
		if(t2 <= t1)
		{
			t2 = t1 ;
		}
		while(y <= x)
		{
			t2 += b[y] ; 
			y++ ;
		}
	}
	printf("%d", t2) ;
}
