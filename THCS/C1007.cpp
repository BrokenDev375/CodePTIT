#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d",&a,&b);
	printf("%d\n%d\n%lld\n%d\n%d\n%.2lf",a+b,a-b,(long long)a*b,a/b,a%b,(a*1.0)/b);
	return 0 ;
	
}