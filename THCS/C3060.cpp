#include<stdio.h>
int lt( int n)
{	
	int d ;
	int dem = 0 ;
	for( int i = 2 ; i<=n ; ++i)
	{
		if(i % 2 == 0)
		{	
			d = i ;
			while(d % 2 == 0)
			{
				dem++;
				d/=2;
			}
		}
	}
	return dem ;
}
int main ()
{
	int n , k ;
	scanf("%d %d", &n ,&k);
	if(lt(n) >= k )
	{
		printf("Yes");
	} 
	else 
	{
	 	printf("No");
	}
	return 0 ; 
}