#include<stdio.h> 
#include<math.h>
int max( int a , int b)
{
	if(a > b)
	{
		return a ;
	}
	return b ;
}
int min( int a , int b) 
{
	if( a < b)
	{
		return a ;
	}
	return b ;
}
int main()
{
	int a[4] , b[4] ;
	int minx = 1e9 , miny = 1e9 ,maxx= -1e9 , maxy = -1e9 ;
	for(int i = 0 ; i < 4 ; i++)
	{
		scanf("%d" , &a[i]) ;
		if( i % 2 == 0)
		{
			maxx =max(maxx,a[i]) ;
			minx =min(minx,a[i]) ;
		}
		else
		{
			maxy =max(maxy,a[i]) ;
			miny =min(miny,a[i]) ;
 		}
	}
	for(int i = 0 ; i < 4 ; i++)
	{
		scanf("%d", &b[i]) ;
		if( i % 2 == 0)
		{
			maxx =max(maxx,b[i]) ;
			minx =min(minx,b[i]) ;
		}
		else
		{
			maxy =max(maxy,b[i]) ;
			miny =min(miny,b[i]) ;
		}
	}
	int canh = max(maxx - minx , maxy - miny) ;
	printf("%d" , canh * canh) ;
}