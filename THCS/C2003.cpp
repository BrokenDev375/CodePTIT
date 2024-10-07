#include<stdio.h>
int chieurong(int n){
	for(int i=1 ; i<=n ; ++i ){
		printf("*");
	}

}
int main(){
	int  a , i , j ;
	scanf("%d", &a);
	chieurong(a);
	printf("\n");
	for(i=1;i<=a-2; ++i){
		printf("*");
		for(j=1;j<=a-2;++j){
			printf(".");
		}
		
		printf("*");
		printf("\n");
	}
	chieurong(a);
}