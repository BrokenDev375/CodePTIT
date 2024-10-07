#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	getchar() ;
	while(t--)
	{
		char s[10001] ;
		gets(s) ;
		char a[300] ;
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			s[i] = tolower(s[i]) ;
		}
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			a[s[i]]++ ;
		}
		int sum = 0 ;
		for( int i = 0 ; i < strlen(s); i++)
		{
			if(a[s[i]] > 1 && s[i] != ' ')
			{
				sum += a[s[i]] ;
				a[s[i]] = 1 ;
			}
		}
		printf("%d ",sum) ;
		for( int i = 0 ; i < strlen(s); i++)
		{
			if(a[s[i]] == 1 && s[i] != ' ')
			{
				printf("%c", s[i]) ;
				a[s[i]] = 0 ;
			}
		}
		printf("\n") ;
	}
}

