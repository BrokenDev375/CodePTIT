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
		for( int j = 0 ; j < strlen(s) ; j++)
			{
				a[0][j] = toupper(a[0][j]) ;
			}
		for( int i = 1 ; i < dem ; i++)
		{
			if(i == dem - 1)
			{
				printf("%s, ", a[i]) ;
			}
			else
			{
				printf("%s ", a[i]) ;
			}
		}
		printf("%s ",a[0]) ;
		printf("\n") ;
	}
}