#include<stdio.h>
int main(){
	int a , b ,c , d , i , j , k , l;
	scanf("%d %d", &a , &b);
	for(i=1;i<=a;++i){
		d=2;
		if(a==b){
		printf("%d",a+1-i);
		c=a-i;
		for(j=1;j<=b-i;++j){
			printf("%d", c);
			--c;
		}
		c=2;
		for(k=1;k<=b-j;++k){

			printf("%d", c);
						++c;
						
		}
	}
	else if(a>b){
		printf("%d",a+1-i);
		c=a-i;
		for(j=1;j<=b-1;++j){
			if(c>0){
				printf("%d",c);
				--c;
			}
			else{
				printf("%d",d);
				++d;
			}
		}
	}
	else if (b>a){
		printf("%d", b+1-i);
		c=b-i;
		for(j=1;j<=b-i;++j){
			printf("%d", c);
			--c;
		}
		c=2;
		for(k=1;k<=b-j;++k){

			printf("%d", c);
						++c;
		
	}
}
		
printf("\n");
	}
}