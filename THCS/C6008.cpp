#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int check(char a[][100], int i )
{
	for( int j = 0 ; j < i ; j++)
	{
		if(strcmp(a[j], a[i]) == 0)
		{
			return 0 ;
		}
	}
	return 1 ;
}
int main()
{
	char s1[100] ;
	gets(s1) ;
	char a[100][100] ,dem = 0 ;
	char * word = strtok(s1, " ") ;
	while(word != NULL)
	{
		strcpy(a[dem], word) ;
		word = strtok( NULL , " ") ;
		dem++ ;
	}
	for( int i = 0 ; i <= dem ; i++)
	{
		if(check(a, i))
		{
			printf("%s ", a[i]) ;
		}
	}
} 