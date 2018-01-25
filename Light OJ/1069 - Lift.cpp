/*
Every time must need to :
open the door(3s) + enter into lift(5s) + close the door(3s) + open the door(3s) + exit from lift(5s)
Total Time of this is = 19;
*/

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p,l,time;
    cin >> t;
    for( int i = 1 ; i <= t ; i++ )
    {
        cin >> p >> l;
        if( l >= p ) time = ( l*4 ) + 19;
        else if( l < p )  time = ( p - l + p ) * 4 + 19;
        cout<<"Case "<<i<<": "<<time<<endl;
    }
    return 0;
}
