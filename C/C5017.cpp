#include<stdio.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		int m , n ;
		scanf("%d %d", &m ,&n) ;
		int hd = 0 , cd = 0 ,hc = m - 1 , cc = n - 1 , dem = 1 ;
		int a[m][n] ;
	
		for ( int i = 0 ; i < m ; i++)
		{
			for( int j = 0 ;  j < n ; j++)
			{
				scanf("%d", &a[i][j]) ;
			}
			}
			while( hd <= hc && cd <= cc)
			{
				for( int i = cd ; i <= cc ; i++)
				{
					printf("%d ", a[hd][i]) ;
				}
				hd++ ;
				if(hd > hc)
				{
					break ;
				}
				for(int i = hd ; i <= hc ; i++)
				{
					printf("%d ", a[i][cc]) ;
				}
				cc-- ;
				if(cd > cc)
				{
					break ;
				}
				for( int i = cc	 ; i >= cd ; i--)
				{
					printf("%d ", a[hc][i]) ;
				}
				hc --;
				if(hd > hc)
				{
					break ;
				}
				for( int i = hc ; i >= hd ; i--)
				{
					printf("%d ", a[i][cd]) ;
				}
				if(cd > cc)
				{
					break ;
				}
				cd ++ ;
			}  
	}
}