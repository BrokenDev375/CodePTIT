#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct pokemon
{
	char name[100] ;
	int evolutionrockneeded ;
	int evolutionrockowned ;
	int number ;
} ;
typedef struct pokemon pokemon ;
int main()
{
	int n ;
	scanf("%d", &n) ;
	pokemon f[n] ;
	int max = 0 ;
	int totalnumber = 0 ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("\n") ;
		gets(f[i].name) ;
		scanf("%d",&f[i].evolutionrockneeded) ;
		scanf("%d", &f[i].evolutionrockowned) ;
		f[i].number = 0 ;
		while(f[i].evolutionrockowned >= f[i].evolutionrockneeded)
		{
			f[i].number++ ;
			f[i].evolutionrockowned -= f[i].evolutionrockneeded ;
			f[i].evolutionrockowned += 2 ;
			totalnumber++ ;
		}	
		if(f[i].number > max)
		{
			max = f[i].number ;
		}
	}
	for( int i = 0 ; i <n ; i++)
	{
		if(f[i].number == max)
		{
			printf("%d\n%s", totalnumber , f[i].name) ;
			break ;
		}
	}
}