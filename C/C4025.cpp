#include<stdio.h>
#include <stdio.h>
int main()
{
    int n , tmp ;
    scanf("%d", &n);
    int a[101];
    int chan[101], c = 0;
    int le[101], l = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            chan[c++] = a[i];
        else
            le[l++] = a[i];
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = i + 1; j < c; j++)
            if (chan[j] < chan[i])
            {
            	tmp = chan[i] ;
            	chan[i] = chan[j] ;
            	chan[j] = tmp ;
			}
              
        printf("%d ", chan[i]);
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (le[j] < le[i])
            {
            	tmp = le[i] ;
            	le[i] = le[j] ;
            	le[j] = tmp ;
			}
    	}
        printf("%d ", le[i]);
    }
    return 0;
}