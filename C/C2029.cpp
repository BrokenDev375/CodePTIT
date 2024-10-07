#include<stdio.h>
int main()
{
	int a ;
	scanf("%d", &a) ;
	char b  ;
	for ( int i = 1 ; i <= a ; i++)
	{
		b = 64 + i ;
		for( int j = 1 ; j <= i ; j++)
		{
			printf("%c ", b) ;
			b += a - j ;
		} 
		printf("\n") ;	
	}
}