#include <stdio.h>

int main()
{
   int a , b , d , e , i , j ;
   char c ;
   scanf("%d %d", &a , &b);
   if(a>=b){
   	c=a+96;
   }
   else{
   	c=b+96;
   }
   e=c;
   for(i=1;i<=a;++i){
   	c=e;
   	printf("%c",c);
   	
   	
   d=i-1;
    for(j=1;j<=b-1;++j){
    	
    	if(d>0){
    		--d;
    		--c;
    	  		}
    	
    	  	printf("%c",c);
	
    	
    }
    	printf("\n");
    }
	
   }