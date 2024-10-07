#include <stdio.h>
int main(){
	int a , b , c , d  , i , j ,k , l ;
	scanf("%d %d", &a ,&b);
	for(i=1;i<=a;++i){
		printf("%d",i);
		if(i==1){
			c=i+1;
			for(j=2;j<=b;++j){
				printf("%d",c);
				++c;
			}
		}
			else if(i<b){
				c=i-1;
				while(c>0){
					printf("%d", c);
					--c;
				}
				if(c==0){
					c=c+2;
					for(k=1;k<=b-i;++k){
						printf("%d",c);
						++c;
					}
				}
	}
	else if(i>=b){
	   	c= i-1;
		for(l=1;l<=b-1;++l){
			printf("%d", c);
			--c;
		}
	
	}
	printf("\n");
		}
	}