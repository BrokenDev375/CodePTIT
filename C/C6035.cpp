#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	getchar() ;
	while(t--)
	{
		char s[10001] ;
		gets(s) ;
		int dem = 0 ;
		for( int i = 0 ; i < strlen(s) / 2 ; i++)
		{
			if(s[i] != s[strlen(s)- 1 - i])
			{
				dem++ ;
			}
		}
		if(strlen(s) % 2 == 1 && dem == 0)
		{
			dem++ ;
 		}
		if(dem == 1)
		{
			printf("YES\n") ;
		}
		else
		{
			printf("NO\n") ;
		}
	}
}
