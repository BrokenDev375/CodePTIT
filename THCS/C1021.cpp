#include<stdio.h>
int main(){
	int a,s ;
	s=0;
	scanf("%d",&a);
	while(a>0){
		s+=a-a/10*10;
		a=a/10;
		
	}
	printf("%d",s);
	return 0;
	
}