#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,x,res;
    while(1)
    {
        cin >> r >> c; if( r == 0 && c == 0 ) return 0;
        if( r == 1 || c == 1 ) res = r * c;
        else if( r == 2 | c == 2 )
        {
            if( r == 2 ) x = c;
            else x = r;

            if( x % 4 == 0 ) res = x ;
            else if( x % 4 == 1 ) res = x + 1 ;
            else if( x % 4 == 2 ) res = x + 2 ;
            else if( x % 4 == 3 ) res = x + 1 ;
       }
       else res = ( ( r * c ) + 1 ) / 2;

       cout<<res<<" knights may be placed on a "<<r<<" row "<<c<<" column board."<<endl;
       }
    return 0;
}
