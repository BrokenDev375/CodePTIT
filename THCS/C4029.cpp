#include<stdio.h>
#include<math.h>
int main()
{
	int n ;
	scanf("%d", &n) ;
	int a[n] ; int dem = 0 ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]) ;
	}
	for( int i = n - 1 ; i > 0 ; i--)
	{
		int tam = a[i] ; int check = 0 ;
		for( int j = 0 ; j < i ; j++)
		{
			if( a[j] > a[j+1])
			{
				int tmp = a[j] ;
				a[j] = a[j + 1] ;
				a[j + 1] = tmp ;
				check = 1 ;
			}
		}
		if( check == 1)
		{
			dem++ ;
			printf("Buoc %d: ", dem ) ;
			for( int j = 0 ; j < n ;j++)
			{
				printf("%d ", a[j]) ;
			}
			printf("\n") ;
		}
	}
}