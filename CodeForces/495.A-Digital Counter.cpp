/*
In this type of digital counter
 0 can produces = o,8
 1 can produces = 0,1,3,4,7,8,9
 2 can produces = 2,8
 3 can produces = 2,8,9
 4 can produces = 4,8,9
 5 can produces = 5,6,8,9
 6 can produces = 6,8
 7 can produces = 0,3,7,8,9
 8 can produces = 8
 9 can produces = 8,9
 */

#include<bits/stdc++.h>
using namespace std;

int Net( char s )
{
    if( s == '0' ) return 2;
    if( s == '1' ) return 7;
    if( s == '2' ) return 2;
    if( s == '3' ) return 3;
    if( s == '4' ) return 3;
    if( s == '5' ) return 4;
    if( s == '6' ) return 2;
    if( s == '7' ) return 5;
    if( s == '8' ) return 1;
    if( s == '9' ) return 2;
}

int main()
{
    string a;
    cin>>a;
    int res = Net(a[0]) * Net(a[1]);
    cout<<res<<endl;
    return 0;
}
