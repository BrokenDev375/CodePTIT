#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s1[100] , s2[100] ;
	gets(s1) ;
	gets(s2) ;
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
		if(strcmp(a[i], s2) !=0)
		{
			printf("%s ", a[i]) ;
		}
	}
} 