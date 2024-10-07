#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check( char s1[205] , char s2[25])
{
	char x1[100] = {} , x2[25] = {} ;
	for(int i = 0 ; i < strlen(s1) ; i++)
	{
		x1[i] = tolower(s1[i]) ;
	}
	for( int i = 0 ; i < strlen(s2) ; i++)
	{
		x2[i] = tolower(s2[i]) ;
	}
	if( strcmp(x1 , x2) == 0)
	{
		return 0 ;
	}
	return 1 ;
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	getchar() ;
	for( int k = 1 ; k <= t ; k++)
	{
		char s1[205] = {} ;
		gets(s1) ;
		char s2[25] = {} ; 
		gets(s2) ;
		char a[205][205]  = {};
		char *word = strtok( s1 ," ") ;
		int dem = 0 ;
		while( word != NULL)
		{
			strcpy(a[dem++] , word);
			word = strtok(NULL , " ")  ;
		}
		printf("Test %d: ",k ) ;
		for( int i = 0 ; i < dem ; i++)
		{
			if(check(a[i] , s2))
			{
				printf("%s ",a[i]) ;
			}
		}
		printf("\n") ;
	}
}