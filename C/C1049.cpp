#include<stdio.h>
int main(){
	int a , b , c , i;
	scanf("%d", &i);
	while(i>0){
	scanf("%d",&a );
	b=0;
	c=0;
	while(a>0){
		if(a%2==1){
			++b;
		}
		else{
			++c;
		}
		a=a/10;
	}
	printf("%d %d", b , c);
	printf("\n");
	--i;
	}
	return 0 ; 
}