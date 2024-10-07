#include<stdio.h>
int main(){
	int a , b , i , j , k ;
	char c ;
	scanf("%d %d",&a , & b) ;
	for(i=1;i<=a;++i){
		if(i<=b){
		c=64+i-1;
		}
		else{
			c=63+b;
		}
		for(j=1;j<=b;++j){
		printf("%c", c);
		if(c<63+b){
			++c;
		}
	}
		printf("\n");
	}
}