#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		int n , m ; long long dem = 0 ;
		scanf("%d %d" , &n , &m) ;
		int b[1005][1005] , H[10005][3] = {} , C[3][10005] = {}; char a[1005][1005] ;
		getchar() ;
		for( int i = 0 ; i < n ; i++)
		{
			gets(a[i]) ;
		}
		for( int i = 0 ; i < n ; i++)
		{
			for( int j = 0 ; j < m ; j++)
			{
				b[i][j] = a[i][j] - '0' ;
				H[i][b[i][j]]++ ;
				C[b[i][j]][j]++ ;
			}
		}
		for( int i = 0 ; i < n ; i++)
		{
			for( int j = 0 ; j < m ; j++)
			{
				if(b[i][j] == 1)
				{
					dem += H[i][2] * C[2][j];
				}	 
				else if(b[i][j] == 2)
				{
					dem += H[i][1] * C[1][j] ;
				}			
			}
		}
		printf("%lld\n", dem) ;
	}
}