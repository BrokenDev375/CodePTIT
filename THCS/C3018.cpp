#include<stdio.h>
#include<math.h>
int fibonacci(int n){
	int f1 =0 ; 
	int f2 =1;
	int fn ,a  ;
	if(n==1 || n==0){
		return 1 ;
	}
	while(fn<=n){
		fn=f1+f2;
		if(fn==n){
			return 1 ;
		}
		f1=f2;
		f2=fn;
	}
	return 0 ;
}
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
	int a ,  b ,i , e , f;
	scanf("%d %d", &a , &b);
	if(a<=b){
		if(a==1){
			++a;
		}
		for(i=a;i<=b;++i){
			e=i;
			f=0;
			while(e>0){
				f+=e%10;
				e/=10;
			}
			if(ktsongto(i)==1){
				if(fibonacci(f)==1){
				printf("%d ", i);
			}
		}
		
		}
	}
	else{
		if(b==1){
			++b;
		}
	for(i=b;i<=a;++i){
			e=i;
			f=0;
			while(e>0){
				f+=e%10;
				e/=10;
			}
			if(ktsongto(i)==1){
				if(fibonacci){
				printf("%d ", i);
			}
		}
		}
		
	}
}