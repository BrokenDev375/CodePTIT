#include<stdio.h>
int main(){
	int a ,b , i , j ,k ;
	char c ;
	scanf("%d %d",&a , &b);
	
	for(i=1;i<=a;++i){
		if(i<=b){
				c=64+i;
		for(j=1;j<=b-i+1;++j){
			printf("%c", c);
			++c;
		}
		c=c-(b+2-i);
		for(k=1;k<=i-1;++k){
			printf("%c",c);
			--c;
			
		}
		}
		else if(i>b){
			c=64+b;
			while(c>=65){
				printf("%c",c);
				--c;
			}
			
		}
		printf("\n");
	}
}