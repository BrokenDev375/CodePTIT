#include<stdio.h>
int main(){
	int i , j , a ;
	scanf("%d %d", &i , &j);
	a=i;
	while(i>0){
		printf("*");
		--i;
	}
	printf("\n");
	while(j>2){
		i=+a;
		printf("*");
		while(i>2){
			printf(" ");
			--i;
		}
		printf("*");
		printf("\n");
		--j;
		
	}
while(a>0){
		printf("*");
		--a;
	}
	return 0 ; 
	}
