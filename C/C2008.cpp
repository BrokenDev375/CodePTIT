#include<stdio.h>
int main(){
	int i , j , k , a , c ;
	c=2;
	scanf("%d", &a);
	printf("*\n");
	for (i=1;i<=a; ++i){
		while(c<a){
		printf("*") ;
	for(j=1;j<=c-2;++j){
		printf(".");
		
	}
	printf("*") ;
	++c;
	printf("\n");
	}
	}
	for(k=1;k<=a;++k){
		printf("*");
	}
}