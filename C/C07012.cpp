#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h> 
struct mathang
{
	int maso ;
	double loinhuan ;
	double giamua ;
	double giaban ;
	char ten[100] ;
	char nhom[100] ;
} ;
typedef struct mathang mathang;
void swap(mathang *a, mathang *b)
{
    mathang c = *a;
    *a = *b;
    *b = c;
}

int main()
{
	int n ;
	scanf("%d", &n) ;
	mathang f[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		scanf("\n");
		gets(f[i].ten) ;
		gets(f[i].nhom) ;
		scanf("%lf", &f[i].giaban) ;
		scanf("%lf%", &f[i].giamua) ;
		f[i].loinhuan = f[i].giamua - f[i].giaban ;
		f[i].maso = i + 1 ;
	}
	for( int i = 0 ; i < n ; i++)
	
	{
		for( int j = i + 1 ; j < n ; j++)
		{
			if(f[i].loinhuan < f[j].loinhuan)
			{
				swap(&f[i],&f[j]) ;
			}
		}
	}
	for( int i = 0 ; i < n ; i++ )
	{
		printf("%d %s %s %.2lf\n", f[i].maso, f[i].ten ,f[i].nhom , f[i].loinhuan) ;
	}
}
