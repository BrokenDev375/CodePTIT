#include <stdio.h>
#include<math.h>
int main(){
	int a,b,i ,c ,d,j ;
	scanf("%d %d", &a , &b);
	c=sqrt(a);
	if(c*c<a){
		c=c+1;
	}
	d=sqrt(b);
	j=d-c+1;
	printf("%d",j);
	for(i=c;i<=d;++i){
		printf("\n");
		printf("%d",i*i);
		
	}
	return 0 ; 
}