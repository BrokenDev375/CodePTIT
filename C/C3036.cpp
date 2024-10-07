#include<stdio.h>
int stnghich(long long n){
	int m=n ; 
	int u = 0 ;
	while(n>0){
		u=u*10+n%10;
		n/=10;
	}
	if(u==m){
		return 1 ;
	}
		return 0 ;
	}
	int cs(long long n){
		while(n>0){
			if(n%2==0){
				return 0;
			}
			n/=10;
		}
		return 1;
	}
	int tcs(long n){
		int s=0;
		while(n>0){
			s+=n%10;
			n/=10;
		}
		if(s%2==0){
			return 0; 
		}
		return 1 ;
	}
	int main(){
		long long t , a ;
		scanf("%lld", &t);
		while(t--)
		{
			scanf("%lld",&a);
			if(stnghich(a)==1 && cs(a)==1 && tcs(a)==1 ){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}