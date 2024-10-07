#include<stdio.h>
int main(){
	int a,s, i ;
	scanf("%d",&i);
	while(i>=1){
		s=0;

	scanf("%d",&a);
	while(a>0){
		s+=a-a/10*10;
		a=a/10;
		
	}
	printf("%d",s);
	--i;
	printf("\n");
}
	return 0;
	
}