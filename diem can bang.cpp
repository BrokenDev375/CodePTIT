    #include<bits/stdc++.h>
    using namespace std ;
    int b[10000000] ;
    int bal_arr(int a[] , int n)
    {
        for( int i = 0 ; i < n ; i++)
        {
            int sum_r = 0 , sum_l = 0 ;
            for( int j = 0 ;  j < i ; j++)
            {
                sum_l += a[j] ;
            }
            for( int j = i + 1 ; j < n ; j++)
            {
                sum_r += a[j] ;
            }
            if( sum_l == sum_r)
            {
                return i ;
            }
        }
        return -1 ;
    }
    int main()
    {
        int t ;
        cin >> t ;
        while(t--)
        {
            int n ;
            cin >> n ;
            int a[n] , sum = 0;
            for ( int i = 0 ; i < n ; i++)
            {
                cin >> a[i] ;
                sum += a[i] ;
                b[i] = sum ;
            }
            int check = 0 ;
            for( int i = 1 ; i < n - 1; i++)
            {
               if( b[i - 1] == b[n - 1] - b[i])
               {
                   cout << i + 1 << endl ;
                   check = 1 ;
                   break ;
               }
           }
           if(!check)
           {
               cout << - 1 << endl ;
           }
            memset(b , 0 , n) ;
        }
    }
