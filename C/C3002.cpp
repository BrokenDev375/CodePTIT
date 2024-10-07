#include<stdio.h>
#include<math.h>
int ktsonguyento(int n){
	int s=0;
	for (int i=2;i<=sqrt(n);++i){
		if(n%i==0){
			++s;
			break;
		}
	}
	if(s==0){
	printf("%d\n",n) ;
	}
	
}
int main(){
	int a , j ;
	scanf("%d",&a);
	if(a>=2){
		printf("2\n");
	}
	for(j=3;j<=a;++j){
		ktsonguyento(j);
	}
}