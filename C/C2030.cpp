#include<stdio.h>
int main()
{
	int a ;
	scanf("%d", &a) ;
	char b ;
	for( int i = 1 ; i <= a ; i++)
	{
		b = 62 ;
		for( int j = 0 ; j < i ; j++ )
		{
			b += 2 ;
		 	printf("%c", b);
		}
		for( int j = 1 ; j < i ; j++)
		{
			b -=  2 ;
			printf("%c", b) ;
		}
		printf("\n") ;
	}
}