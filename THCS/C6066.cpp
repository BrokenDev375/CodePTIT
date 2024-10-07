#include<stdio.h>
#include<ctype.h>
#include<string.h>
void erase(char arr[], int size, int index) 
{
	for (int i = index; i < size - 1; i++) 
	{
        arr[i] = arr[i + 1];
    }
}
int main()
{
	char s[200] ; 
	char s1[101] ;
	char s2[101] ;
	char sum[120] ;
	gets(s) ;
	int dem = strlen(s) ;
	while(dem > 0)
	{
		int dem1 = 0 , dem2 = 0 ;
		if(strlen(s) % 2 == 0)
		{
			for(int i = 0 ; i < strlen(s) / 2; i++)
			{
				s1[dem1++] = s[i] ;
			}
		}
		else
		{
			s1[0] = 0 ;
			dem++;
			for(int i = 0 ; i < strlen(s) / 2; i++)
			{
				s1[dem1++] = s[i] ;
			}
		}
			for( int i = strlen(s) / 2 ; i < strlen(s); i++)
			{
				s2[dem2++] = s[i] ;
			}
		erase(s, 200 , 0) ;	
		for( int i = dem2 ; i >= 0 ; i--)
		{
			int du = 0 ;
			du = s1[i] - '0' +s2[i] - '0' ;
			s[i+1] = du % 10 ;
			du /= 10 ;
			dem / 2 ;
		while(s[0] == 0)
		{
		erase(s, 1 , 0) ;
		}
			printf("%s",s) ;
		}
		dem /= 2 ;
	}
}