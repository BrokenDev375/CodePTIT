#include<stdio.h>
int main(){
	int i , k , j , a , b , c ;
	scanf("%d %d",&a , &b);
	c=a;
	for(k=1;k<=a;++k){
	for(i=c;i<a;++i){
		printf("~");
	}
	for(j=1;j<=b;++j){
		printf("*");
	}
	printf("\n");
	c--;
	
	}
}