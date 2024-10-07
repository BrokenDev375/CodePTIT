#include<stdio.h>
int main(){
	int a , b , i , j ;
	scanf("%d",&a);
	b=a+1;
	while(b--){
	for(i=1;i<=b;++i){
		printf("%c",62+b+i);
	}
	printf("\n");
	}
}