#include<stdio.h>
int main(){
	int a,i,b,c ;
	scanf("%d",&i);
	while(i>=1){
	
	scanf("%d",&a);
	b=a-a/10*10;
	while(a>0){
		c=a;
		a=a/10;
	}
	if(c==b){
		printf("YES");
	}
	else{
		printf("NO");
	}
	printf("\n");
	--i;
}
	return 0 ;
}