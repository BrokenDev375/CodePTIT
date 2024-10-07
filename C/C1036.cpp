#include <stdio.h>
int main(){
	int a,s = 1 ;
	scanf("%d",&a);
	while(a>0){
	s*=a-a/10*10;
	a=a/10;
}
	printf("%d",s);
	return 0 ; 
	

}