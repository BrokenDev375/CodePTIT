#include<stdio.h>
int main()
{
	int a ;
	scanf("%d", &a) ;
	for( int i = 1 ; i <= a ;i++)
	{
		int b = a - 1 ; 
		int c = i ;
		for( int j = 1 ; j <= i ; j++)
		{
			printf("%d ", c) ;
			c += b ;
			b-- ;
		}
		printf("\n") ;
	}
}