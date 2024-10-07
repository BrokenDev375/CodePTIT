#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int t ;
	scanf("%d\n", &t) ;
	while(t--)
	{
		char s[201] = {} ; int dem = 0 ;
		gets(s) ;
		char *token = strtok(s ," ") ;
		while(token != NULL)
		{
			dem++ ;
			token = strtok(NULL, " ") ;
		}
		printf("%d\n", dem) ;
	}
}