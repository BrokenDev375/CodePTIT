#include<stdio.h>
int chieurong(int n){
	for(int i=1;i<=n;++i){
		printf("*");
		
	}
}
int main(){
	int a , b , c , j , k , t , z  ;
	scanf("%d %d",&a , &c);
	
	chieurong(c);
	printf("\n");
	b=a-2;
	for(k=1;k<=a-2;++k){
		for(t=b;t<=a-2;t++){
			printf("~");
		}
		printf("*");
		for(z=1;z<=c-2;++z){
			printf(".");
		}
		printf("*\n");
		b--;
		
	}
	for(j=1;j<a;++j){
		printf("~");
	}
	chieurong(c);
	return 0 ;
}