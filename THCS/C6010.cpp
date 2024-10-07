#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		char s[500] ;
		scanf("%s", s) ; int check = 1 ;
		for( int i = 0 ; i < strlen(s)  / 2 ; i++)
		{
			if(s[i] != s[strlen(s) - i - 1])
			{
				check = 0 ;
			}
		}
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			if(s[i] % 2 == 1)
			{
				check = 0 ;
			}
		}
		if(check == 1)
		{
			printf("YES\n") ;
		}
		else
		{
			printf("NO\n") ;
		}
	}
}
