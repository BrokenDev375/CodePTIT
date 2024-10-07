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
		char a[100][100] ;
		int dem = 0 ;
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			if(s[i-1] == ' ' || i == 0)
			{
				s[i] = toupper(s[i]) ;
			}
			else
			{
				s[i] = tolower(s[i]) ;
			}
		}
		char *word = strtok(s , " ") ;
		while(word != NULL)
		{
			strcpy(a[dem++], word) ;
			word = strtok(NULL," ") ;
		}
		for( int i = 0 ; i < dem ; i++)
		{
			printf("%s ", a[i]) ;
		}
		printf("\n") ;
	}
}