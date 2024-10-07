 #include <stdio.h>

int main()
{
   int a , b , i , j ,k ;
   scanf("%d %d", &a ,&b);
   for(i=1;i<=a;++i){
   	k=i;
   	printf("%d",i);
   	j=i+1;
   	while(j<=b){
   		printf("%d", j);
   		j++;
	   }
	   if(k<=b){
	   	j=k-1;
	   }
	   else{
	   	j=b-1;
	   }
	   while(j>0){
	   	printf("%d", j);
	   	j--;
	   }
	   printf("\n");
   }
}