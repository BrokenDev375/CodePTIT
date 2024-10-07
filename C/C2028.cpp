#include<stdio.h>
int main(){
	int a , b , i , j=0 ,k;
	char c ;
	scanf("%d",&a);
	b=a+1;
	while(b--){
		c=65+2*j;
		for(i=1;i<=b;++i){
	printf("%c",c);
	c=c+2;
	}
	++j;
	printf("\n");
}
}