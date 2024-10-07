#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct competitor
{
	char name[100] ;
	char DoB[100] ;
	double subject1 ,subject2 , subject3 ;
	int id ;
	double sum ;
} ;
typedef struct competitor competitor ;
int main()
{
	int n ;
	scanf("%d", &n) ;
	competitor f[n] ;
	double max = 0 ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("\n") ;
		gets(f[i].name) ;
		gets(f[i].DoB) ;
		scanf("%lf %lf %lf", &f[i].subject1 , &f[i].subject2 , &f[i].subject3 ) ;
		f[i].sum = f[i].subject1 + f[i].subject2 + f[i].subject3 ;
		if(f[i].sum > max)
		{
			max = f[i].sum ;
		}
		f[i].id = i + 1 ; 
	}
	for( int i = 0 ; i < n ; i++)
	{
		if(f[i].sum == max)
		{
			printf("%d %s %s %.1lf\n", f[i].id , f[i].name , f[i].DoB ,f[i].sum) ;
		}
	}
}