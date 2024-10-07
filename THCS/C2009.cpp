#include <stdio.h>
int main(){
int a , b , i , j , k ;
scanf("%d", &a);
b=1;
for(i=1;i<=a;++i){
	for(j=b;j<a;++j){
		printf("~");
	}
	for(k=1;k<=b;++k){
		printf("*");
	}
	b++;
	printf("\n");
}
}