#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check1(char a[][100], int dem1 , int i)
{
	for( int j = 0 ; j < i ; j++)
	{
		if(strcmp(a[i] , a[j]) == 0)
		{
			return 0 ;
		}
	}
	return 1 ;
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	getchar() ;
	while(t--)
	{
		char s1[10001] ; char s2[10001] ;
		gets(s1) ; gets(s2) ;
		char a[100][100] , b[100][100] ;
		int dem1 = 0 , dem2 = 0 ;
		char * word = strtok(s1, " ") ;
		while(word != NULL)
		{
			strcpy(a[dem1++], word) ;
			word = strtok(NULL, " ") ;
		}
		word = strtok(s2, " ") ;
		while(word != NULL)
		{
			strcpy(b[dem2++], word) ;
			word = strtok(NULL, " ") ;
		}
		for( int i = 0 ; i < dem1 ; i++)
		{
			for( int j = i + 1 ; j < dem1 ; j++)
			{
				if(strcmp(a[i] , a[j]) > 0)
				{
					char tmp[100] ;
					strcpy(tmp , a[i]) ;
					strcpy(a[i] , a[j]) ;
					strcpy(a[j] , tmp) ;
	 			}
			} 
		}
		for( int i = 0 ; i < dem2 ; i++)
		{
			for( int j = i + 1 ; j < dem2 ; j++)
			{
				if(strcmp(b[i] , b[j]))
				{
					char tmp[100] ;
					strcpy(tmp , b[i]) ;
					strcpy(b[i] , b[j]) ;
					strcpy(b[j] , tmp) ;
	 			}
			} 
		}
		for( int i = 0 ; i < dem1 ;i++)
		{
			int checker = 1 ;
			if(check1(a , dem1 , i))
			{
				for( int j = 0 ;  j < dem2 ; j++)
				{
					if(!strcmp(a[i] , b[j]))
					{
						checker = 0 ;
					}
				}
			}
			else
			{
				checker = 0 ;
			}
			if(checker == 1)
			{
				printf("%s ", a[i]) ;
			}
		}
		printf("\n") ;
	}
}