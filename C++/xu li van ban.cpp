#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string para ;
    string word ;
    int check = 1 ;
    while(cin >> word )
        {
            for( int i = 0 ; i < word.size(); i++)
            {
                word[i] = tolower(word[i]) ;
            }
            if(check == 1)
            {
                word[0] = toupper(word[0]) ;
                check = 0 ;
            }
            if(word.back() == '.' || word.back() == '!' || word.back() == '?' )
            {
                word.pop_back() ;
                check = 1 ;
                cout << word << endl ;
            }
            else
            {
                cout << word << " " ;
            }
        }
}
