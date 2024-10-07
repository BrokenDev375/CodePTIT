#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct competitor
{
	int id ;
	char name[100] ;
	char DoB[100] ;
	double subject1 , subject2 , subject3 ;
	double sum ;
} ;
typedef struct competitor competitor ;
int main()
{
	int n;
	scanf("%d", &n) ;
	competitor f[n] ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("\n") ;
		gets(f[i].name) ;
		gets(f[i].DoB) ;
		scanf("%lf %lf %lf", &f[i].subject1 , &f[i].subject2 , &f[i].subject3) ;
		f[i].id = i + 1 ;
		f[i].sum = f[i].subject1  + f[i].subject2 + f[i].subject3 ;
	}
	for( int i = 0 ; i < n ; i++)
	{
		for( int j = i + 1 ; j < n ; j++)
		{
			if(f[i].sum < f[j].sum)
			{
				competitor tmp = f[i] ;
				f[i] = f[j] ;
				f[j] = tmp ;
			}
		}
	}
	for( int i = 0 ; i < n ; i++)
	{
		printf("%d %s %s %.1lf\n",f[i].id ,f[i].name , f[i].DoB , f[i].sum) ;
	}
}