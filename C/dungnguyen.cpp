#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
struct quan_li_giang_vien
{
	char ten[1000] ;
	char tenmon[1000] ;
	char mon[1000] ;
	int maso ;
} ;
struct quan_li_giang_vien f[1000000] ;
int main()
{
	int t ;
	scanf("%d", &t) ;
	int soluong = t ;
	getchar() ;
	for( int i = 1 ; i <= t ; i++)
	{
		gets(f[i].ten) ;
		scanf("%d", &f[i].maso) ;
		getchar() ;
		gets(f[i].tenmon) ;
		int dem = 0 ;
		for( int j = 0 ; j < strlen(f[i].tenmon) ; j++)
		{
			if( j == 0 || f[i].tenmon[j] == ' ' )
			{
				f[i].mon[dem] = toupper(f[i].tenmon[j]) ;
				dem++ ;
			}
		}
	}
	t = 0 ;
	scanf("%d", &t) ;
	while(t--)
	{
		char tracuu[1000] ;
		getchar() ;
		gets(tracuu) ; 
		for( int i = 1 ; i <= soluong ; i++)
		{
			if( !strcmp(tracuu , f[i].tenmon))
			{
				if(f[i].maso < 10)
				{
					printf("DANH SACH GIANG VIEN BO MON %s\nGV0%d %s %s\n", f[i].mon, f[i].maso , f[i].ten ,f[i].mon) ;
				}
				else
				{
					printf("DANH SACH GIANG VIEN BO MON %s\nGV%d %s %s\n", f[i].mon, f[i].maso , f[i].ten ,f[i].mon) ;
				}
			}
		}
	}
}