#include<stdio.h>
int main(){ 
	int dem , a;
	scanf("%d",&a);
	dem=0;
	while(a>0){
		a=a/10;
		++dem;
	}
	printf("%d",dem);
	return 0 ;
	}
