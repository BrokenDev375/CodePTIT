#include<stdio.h>
int main(){
	int a , i ,j , k , b ;
	scanf("%d", &a);
	b=1;

	for(i=1;i<=a;++i){
		
		for(j=b;j<=a-1;++j){
			
		printf("~");
	}
	for(k=1;k<=a;++k){
		printf("*");
	}
	++b;
	printf("\n");
}
}