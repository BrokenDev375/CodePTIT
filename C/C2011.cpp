#include<stdio.h>
int main(){
	int i , k , l , j , c , a ,b ;
	scanf("%d %d", &a ,&b);
	for(i=1;i<=a;++i){
		printf("%d", i);
		c=i+1;
			if(i<b){
				j=i+1;
				while (j<=b){
					printf("%d", j);
					j++;
				}
				if(j>b){
					j=j-2;
					for(k=1;k<=i-1;++k){
						printf("%d",j);
						--j;
					}
				}
	}
	else {
	c=i-1;
	for(l=1;l<=b-1;++l){
		printf("%d", c);
		--c;
	}
	}
		printf("\n");
		
		}
}
