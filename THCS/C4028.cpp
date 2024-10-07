#include<stdio.h>
#include<math.h>
int main()
{
	int n ;
	scanf("%d", &n) ;
	int a[n] ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]) ;
	}
	for( int i = 0 ; i < n ; i++)
	{
		int tmp = a[i] ; int j = i -1 ;
		while( j >= 0 && a[j] > tmp)
		{
			a[j+1] = a[j] ;
			--j;
		}
		a[j+1] = tmp ;
		printf("Buoc %d: ", i) ;
	for( int j = 0 ; j <= i ; j++)
	{
		printf("%d ", a[j]) ;
	}
	printf("\n") ;
	}
}
	               