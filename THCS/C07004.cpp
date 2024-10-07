#include<stdio.h>
#include<math.h>
int bcnn(int a, int b){
	int x = a , y = b ; 
   	while(b != 0){
    int r = a % b;
    a = b;
    b = 	r;
   }
   return x * y / a ;
}
int ucln(int a, int b){
   	while(b != 0){
    int r = a % b;
    a = b;
    b = r;
   }
   return a ;
}
struct phanso
{
	int t1 , t2 , m1 , m2 ;
	int M , T1 , T2 ;
	int Mt , Tt ;
	int Mthg , Tthg ;
} ;
typedef struct phanso phanso ;
int main()
{
	int n ;
	scanf("%d", &n) ;
	phanso f[n] ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d %d %d %d", &f[i].t1 , &f[i].m1 , &f[i].t2 , &f[i].m2) ;
		int z = ucln(f[i].t1, f[i].m1) ;
		int x = ucln(f[i].t2 , f[i].m2) ;
		f[i].t1 /= z ;
		f[i].m1 /= z ;
		f[i].t2 /= x ;
		f[i].m2 /= x ;
		f[i].M = bcnn(f[i].m1 ,f[i]. m2) ;
		f[i].T1 = f[i].t1 * (f[i].M/f[i].m1)  ;
		f[i].T2 = f[i].t2 * (f[i].M/f[i].m2) ;
		f[i].Tt = (f[i].T1 + f[i].T2) / (ucln((f[i].T1 + f[i].T2) , f[i].M)) ;
		f[i].Mt = f[i].M / (ucln((f[i].T1 + f[i].T2) , f[i].M)) ;
		f[i].Tthg = f[i].t1 * f[i].m2 / (ucln(f[i].t1 * f[i].m2, f[i].t2 * f[i].m1)) ;
		f[i].Mthg = f[i].t2 * f[i].m1 / (ucln(f[i].t1 * f[i].m2, f[i].t2 * f[i].m1)) ;
	}
	for( int i = 0 ; i < n ; i++)
	{
		printf("Case #%d:\n", i + 1) ;
		printf("%d/%d ",f[i].T1 , f[i].M ) ;
		printf("%d/%d\n", f[i].T2,f[i].M) ;
		printf("%d/%d\n",f[i].Tt,f[i].Mt) ;
		printf("%d/%d\n",f[i].Tthg,f[i].Mthg) ;
		
	}
}