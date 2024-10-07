#include<stdio.h>
#include<math.h>
void swap( int i , int j , int n , int b[100][100]) 
{
	for( int k = i ; k >= 0 ; k--)
	{
		for( int l = j ; l >= 0 ; l--)
		{
			b[k][l] = 1 - b[k][l] ;
		}
	}
}

int main()
{
	int n ;
	scanf("%d", &n) ; 
	char a[100][100] ; int b[100][100] ;
	getchar() ;
	for( int i = 0 ; i < n ; i++)
	{
		gets(a[i]) ;	
	}
	for( int i = 0; i < n ; i++)
	{
		for( int j = 0 ; j < n ; j++)
		{
			b[i][j] = a[i][j] - '0' ;
		}
	}
	int dem = 0 ;
	for( int i = n - 1 ; i >= 0 ; i--)
	{
		for( int j = n - 1 ; j >= 0 ; j--)
		{
			if(b[i][j] == 1)
			{
				swap(i , j , n , b) ;
				dem++ ;
			}
		}
	}
	printf("%d", dem) ;
}