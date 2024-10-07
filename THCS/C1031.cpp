#include<stdio.h>
#include<math.h>
int main(){
	int n ;
	scanf("%d",&n);
	int a = 1 ;
	if(n == 3 || n == 2)
	{
		printf("%d", n);
		return 0;
	}
	for(int i = 2 ; i <= sqrt(n) ; i ++)
	{		
		while( n % i == 0)
		{	
			a--;
			if(a != 0 )
			{
			printf("x%d",i);
			}
			else
			{
				printf("%d",i);
			}
			n/=i ;
		}
	}
	if( n != 1  )
	{
		printf("x%d", n);
	}
	return 0;
}