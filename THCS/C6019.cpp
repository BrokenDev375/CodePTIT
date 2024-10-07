#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	char s[10001] ;
	gets(s) ;
	char a[100][100] ;
	int dem = 0 ;
	for( int i = 0 ; i < strlen(s) ; i++)
	{
		s[i] = tolower(s[i]) ;
	}
	char * word = strtok(s ," ") ;
	while(word != NULL)
	{
		strcpy(a[dem++], word ) ;
		word = strtok(NULL, " ") ;
	}
	for( int i = 0 ; i < dem - 1 ;i++)
	{
		printf("%c",a[i][0]) ;
	}
	printf("%s@ptit.edu.vn",a[dem - 1]) ;
}