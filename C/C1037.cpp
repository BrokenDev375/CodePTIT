#include<stdio.h>
int main () {
	int a, b, i,s ;
	scanf("%d %d",&a , &b);
	s=0;
	if (a<=b){
		for(i=a;i<=b;++i){
			s+=i;
			
		}
	}
		else{
			for(i=b;i<=a;++i){
				s+=i;
			}
		}
		printf("%d", s);
		return 0 ;
	
}