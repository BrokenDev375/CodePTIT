#include <stdio.h>
int main(){
	int a , b , i , j  ;
	char c , k ;
	k=64;
	scanf("%d %d", &a , &b);
	for (i=1;i<=a;++i){
		if(a<=b){
			c=64+a-i+1;
			for(j=1;j<=b;++j){
				printf("%c",c);
				if(c<64+b){
					++c;
				}
			}
			
		}
		else if(a>b){
			c=64+b;
				if(i<=a-b+1){
			for(j=1;j<=b;++j){
				
					printf("%c",c);
				}
				}
				else {
					c=64+2*b-i;
					for(j=1;j<=b;++j){
						printf("%c",c);
						if(c<64+b){
							++c;
						}
					}
				}
			
		}
		--k;
		printf("\n");
	}
}