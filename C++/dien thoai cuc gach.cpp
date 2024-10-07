#include<bits/stdc++.h>
using namespace std ;
bool IsPalindromic(string number)
{
    for( int i = 0 ; i < number.size() / 2 ; i++)
    {
        if(number[i] != number[number.size() - i - 1])
        {
            return false ;
        }
    }
    return true ;
}
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        string text ;
        cin >> text ;
        for( int i = 0 ; i < text.size() ; i++)
        {
            text[i] = tolower(text[i]) ;
        }
        string number = {};
        for( int i = 0 ; i < text.size() ; i++)
        {
            if( text[i] == 'a' || text[i] == 'b' || text[i] == 'c')
            {
                number += "2" ;
            }
            else if(text[i] == 'd' || text[i] == 'e' || text[i] == 'f')
            {
                number += "3" ;
            }
            else if(text[i] == 'g' || text[i] == 'h' || text[i] == 'i')
            {
                number += "4" ;
            }
            else if(text[i] == 'j' || text[i] == 'k' || text[i] == 'l')
            {
                number += "5" ;
            }
            else if(text[i] == 'm' || text[i] == 'n' || text[i] == 'o')
            {
                number += "6" ;
            }
            else if(text[i] == 'p' || text[i] == 'q' || text[i] == 'r' || text[i] == 's')
            {
                number += "7" ;
            }
            else if(text[i] == 't' || text[i] == 'u' || text[i] == 'v')
            {
                number += "8" ;
            }
            else if( text[i] == 'w' || text[i] == 'x' || text[i] == 'y' || text[i] == 'z')
            {
                number += "9" ;
            }
        }
        if(IsPalindromic(number))
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
