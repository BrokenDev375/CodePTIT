#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int check(char a[][100] , int i)
{
	for( int j = 0 ; j < i ; j++)
	{
		if( strcmp(a[i], a[j]) == 0)
		{
			return 0 ;
		}
	}
	return 1 ;
}
int main()
{
	char s[10001] ;
	char a[100][100] ;
	gets(s) ;
	for( int i = 0 ; i < strlen(s) ; i++)
	{
		s[i] = tolower(s[i]) ;
	}
	int dem = 0 ;
	char * word = strtok(s, " ") ;
	while(word != NULL)
	{
		strcpy(a[dem++] , word) ;
		word = strtok(NULL , " ") ;
	}
	for( int i = 0 ; i < dem ; i++)
	{
		int cnt = 1 ;
		if(check(a , i))
		{
			for( int j = i + 1 ; j <= dem ; j++)
			{
				if(!strcmp(a[i] , a[j]))
				{
					cnt++ ;
				}
			}	
			printf("%s %d\n", a[i], cnt) ; 
		}
	}
}