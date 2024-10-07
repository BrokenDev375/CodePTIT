#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<string.h>
int a[50][50] ;
int main()
{
	char s[55] ;
	gets(s) ;
	int max = - 1 ;
	for( int i = 0 ; i < strlen(s) ; i++)
	{
		for( int j = i + 1 ; j < strlen(s) ; j++)
		{
			if( s[j] > s[i])
			{
				for(int )
			}
		}
		if(a[i] > max)
		{
			max = a[i] ;
		}
	}
	printf("%d" ,25 - max) ;
}