#include<stdio.h>
#include<math.h>
void hv()
{
	int a , b , c , d ;
	scanf("%d %d %d %d",&a , &b , &c , &d );
	if((a-c)*(a-c)==(b-d)*(b-d) && a!=c && b!=d)
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
	}
}
int main () 
{
	int t ;
	scanf("%d", &t);
	while(t--)
	{
		hv();
	}
}