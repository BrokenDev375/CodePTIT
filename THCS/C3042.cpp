#include<stdio.h>
int sg ( int n )
{
	int a = -1;
	while(n>0){
		if( n % 10 <= a){
			return 0 ;
		}
		a=n%10;
		n/=10;
	}
	return 1 ;
}
int main()
{
	int a , dem , b ,t ;
	scanf("%d", &t );
while(t--)
{
	dem = 0 ;
	scanf("%d %d",&a ,&b) ; 
	for( int i = a ; i <= b ;++i )
	{
	if(sg(i) == 1)
	{
	++dem;
		}	
	}
	printf("%d\n", dem);
}
}