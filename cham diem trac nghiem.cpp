#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string Ma101 = "ABBADCCABDCCABD" ;
    string Ma102 = "ACCABCDDBBCDDBB" ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int code ;
        double r_answer = 0 ;
        cin >> code ;
        if( code == 101)
        {
            for( int i = 0 ; i < 15 ; i++ )
            {
                char answer ;
                cin >> answer ;
                if(answer == Ma101[i])
                {
                    r_answer++ ;
                }
            }
        }
        else
        {
            for( int i = 0 ; i < 15 ; i++ )
            {
                char answer ;
                cin >> answer ;
                if(answer == Ma102[i])
                {
                    r_answer++ ;
                }
            }
        }
        cout << fixed << setprecision(2) << 2.0 / 3 * r_answer << endl;
    }
}
