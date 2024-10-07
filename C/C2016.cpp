#include<stdio.h>
int main()
{
	int a ;
	scanf("%d", &a) ;
	for( int i = 1 ; i <= a ; i++)
	{
		int b = 1 ;
		int c = 2 ;
		for( int j = 1 ; j <= i ; j++)
		{
			if(i % 2 == 1)
			{
				printf("%d", b) ;
				b += 2 ;
			}
			if( i % 2 == 0)
			{
				printf("%d", c);
				c += 2 ;
			}
		}
			printf("\n") ;
	}
}