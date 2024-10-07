#include<stdio.h>
#include<math.h>
int ktsongto(int n){
	int i ;
	for(i=2 ; i<=sqrt(n); ++i){
	if(n%i==0){
		return 0;
		}
	}
	return 1 ;
}
int main(){
	int a  , s ;
	scanf("%d", &a);
	s=2;
	while(a>0){
		if(ktsongto(s)==1){
			printf("%d\n",s);
		--a;
		}
		++s;
	}
}