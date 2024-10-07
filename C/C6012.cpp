#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int t ;
	scanf("%d", &t)  ;
	while(t--)
	{
		char s[500] ; int check = 1 ;
		scanf("%s", s) ;
		for( int i = 0 ; i < strlen(s)  / 2 ; i++)
		{
			if(s[i] != s[strlen(s) - i - 1])
			{
				check = 0 ;
			}
		}
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			if(s[i]  != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7')
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