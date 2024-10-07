#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
void solve()
{
		char s1[10001] ;
		gets(s1) ;
		char s2[10001] ;
		gets(s2) ;
		int i = strlen(s1) - 1 ;
		int j = strlen(s2) - 1 ;
		if( i > j)
		{
			int n = i ;
			char res[10001] ;
			res[n + 1] = '\0' ;
			int nho = 0 ;
			while(j >= 0)
			{
				int tmp = (s1[i--] - '0' ) - (s2[j--] - '0') - nho ;
				if( tmp < 0)
				{
					tmp += 10 ;
					nho = 1 ;
				}
				else
				{
					nho = 0 ;
				}
				res[n--] = tmp + '0' ;
				
			}
			while(i >= 0)
			{
				int tmp =( s1[i--] - '0' ) - nho ;
				if( tmp < 0)
				{
					tmp += 10 ;
					nho = 1 ;
				}
				else
				{
					nho = 0 ;
				}
				res[n--] = tmp + '0' ;
				int check = 0 ;
				for( int k = 0 ; k < strlen(res) ; k++)					
				{
					if(res[k] != '0' && check == 0)
					{
						check = 1 ;
					}
					if( check == 1)
					{
						printf("%c", res[k]) ;
					}
				}
			}
		}
		if( j > i)
		{
			int n = j ;
			char res[10001] ;
			res[n+1] = '\0' ;
			int nho = 0 ;
			while(i >= 0)
			{
				int tmp = (s1[i--] - '0' ) - (s2[j--] - '0') - nho ;
				if( tmp < 0)
				{
					tmp += 10 ;
					nho = 1 ;
				}
				else
				{
					nho = 0 ;
				}
				res[n--] = tmp + '0' ;
				
			}
			while(j >= 0)
			{
				int tmp =( s2[j--] - '0' ) - nho ;
				if( tmp < 0)
				{
					tmp += 10 ;
					nho = 1 ;
				}
				else
				{
					nho = 0 ;
				}
				res[n--] = tmp + '0' ;
				int check = 0 ;
				for( int k = 0 ; k < strlen(res) ; k++)					
				{
					if(res[k] != '0' && check == 0)
					{
						check = 1 ;
					}
					if( check == 1)
					{
						printf("%c", res[k]) ;
					}
				}
			}
		}
		printf("\n") ;
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	getchar() ;
	while(t--)
	{
		solve() ;
	}
}