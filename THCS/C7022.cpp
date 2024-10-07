#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	int id ;
	char name[100] ;
	double s1 , s2 ,s3 ,sum ;
} ;
typedef struct student student ;
student f[1000] ;
int cnt = 0 ;
void option1()
{
	int quantity ;
	scanf("%d", &quantity) ;
	for( int i = 0 ; i < quantity ; i++)
	{
		getchar() ;
		gets(f[cnt].name) ;
		scanf("%lf %lf %lf", &f[cnt].s1 , &f[cnt].s2 , &f[cnt].s3) ;
		f[cnt].id = cnt + 1 ;
		cnt++ ;
	}
	printf("%d\n", quantity) ;
}
void option2()
{
	int error_id ;
	scanf("%d", &error_id) ;
	getchar() ;
	gets(f[error_id - 1].name) ;
	scanf("%lf %lf %lf", &f[error_id - 1].s1 , &f[error_id - 1].s2 , &f[error_id - 1].s3) ;
	printf("%d\n",error_id) ;
}
void option3()
{
	for( int i = 0 ; i < cnt ; i++)
	{
		if(f[i].s1 < f[i].s2 && f[i].s2 < f[i].s3)
		{
			printf("%d %s %.1lf %.1lf %.1lf\n",f[i].id , f[i].name , f[i].s1 , f[i].s2, f[i].s3) ;
		}
	}
}
int main()
{
	int mode ;
	while(scanf("%d",&mode) != -1)
	{
		if( mode == 1)
		{
			option1() ;
		}
		else if(mode == 2)
		{
			option2() ;
		}
		else
		{
			option3() ;
			return 0 ;
		}
	}
}