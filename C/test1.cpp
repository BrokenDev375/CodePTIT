#include <stdio.h>
int a[2000005];
void era()
{
    for (int i = 2; i * i <= 2000000; i++)
        if (!a[i])
            for (int j = i * i; j <= 2000000; j += i)
                if (!a[j])
                    a[j] = i;
    for (int i = 2; i <= 2000000; i++)
        if (!a[i])
            a[i] = i;
}
int main()
{
    era();
    int x;   
	scanf("%d", &x);
       while (x != 1)
       {
       		int tmp = a[x] ;
       		int dem = 0 ;
       		while(a[x] == tmp)
       		{
                dem++ ;
           		x /= a[x]; 
			}
			printf("%d %d\n", a[x] ,dem );
		}
}
