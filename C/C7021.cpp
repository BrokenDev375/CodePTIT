#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct student
{
	int id ;
	double s1 , s2 ,s3 , sum;
	char name[100] ;
} ;
typedef struct student student ;
int cnt = 0 ;
student f[1000] ;
void option1()
{
	
	int quantity ;
	scanf("%d", &quantity) ;
	for( int i = 0 ; i < quantity ; i++)
	{
		getchar() ;
		gets(f[cnt].name) ;
		scanf("%lf %lf %lf", &f[cnt].s1 , &f[cnt].s2 , &f[cnt].s3) ;
		f[cnt].sum = f[cnt].s1 + f[cnt].s2 + f[cnt].s3 ;
		cnt++ ;
	printf("%d\n", quantity) ;
	}
}
void option2()
{
	int error_id ;
	scanf("%d", &error_id) ;
	getchar() ;
	gets(f[error_id - 1].name) ;
	scanf("%lf %lf %lf", &f[error_id - 1].s1 , &f[error_id - 1].s2 , &f[error_id - 1].s3) ;
	f[error_id - 1].sum = f[error_id - 1].s1 + f[error_id - 1].s2 + f[error_id - 1].s3 ;
	printf("%d\n", error_id) ;
}
void option3()
{
	for( int i = 0 ; i < cnt ; i++)
	{
		printf("%d %s %.1lf %.1lf %.1lf\n",f[i].id ,f[i].name , f[i].s1 , f[i].s2 ,f[i].s3) ;
	}
}
int main()
{
	int mode ;
	while(scanf("%d", &mode) != -1)
	{
		if( mode == 1)
		{
			option1();
		}
		else if( mode == 2)
		{
			option2() ;
		}
		if( mode == 3)
		{
			for( int i = 0 ; i < cnt ; i++)
			{
				for( int j = i + 1 ; j < cnt ; j++)
				{
				if( f[i].sum > f[j].sum)
				{
					student tmp = f[i] ;
					f[i] = f[j] ;
					f[j] = tmp ;
				}
				}
			}
			option3() ;	
			return 0 ;
		}
	}
}