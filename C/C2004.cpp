#include<stdio.h>
int chieurong(int n){
	for(int i=1;i<=n;++i){
		printf("*");
		
	}
}
int main(){
	int a , b , j , k , t , z  ;
	scanf("%d",&a);
	for(j=1;j<a;++j){
		printf("~");
	}
	chieurong(a);
	printf("\n");
	b=1;
	for(k=1;k<=a-2;++k){
		for(t=b;t<=a-2;t++){
			printf("~");
		}
		printf("*");
		for(z=1;z<=a-2;++z){
			printf(".");
		}
		printf("*\n");
		b++;
		
	}
	chieurong(a);
	return 0 ;
}