#include<stdio.h>
int main(){
	int i , j , a , c ;
	c=1;
	scanf("%d", &a);
	for (i=1;i<=a; ++i){
		while(c<=a){
	for(j=1;j<=c;++j){
		printf("*");
	}
	++c;
	printf("\n");
	}
	}
}