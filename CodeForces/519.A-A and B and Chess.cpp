#include<bits/stdc++.h>
using namespace std;

int tom( char k )
{
    if( k =='Q' || k =='q' ) return 9;
    else if( k =='R' || k =='r' ) return 5;
    else if( k =='B' || k =='b' ) return 3;
    else if( k =='N' || k =='n' ) return 3;
    else if( k =='P' || k =='p' ) return 1;
    else return 0;
}

int main()
{
    int white=0,black=0;
    char chess[8][8];
    for( int i = 0 ; i < 8 ; i++ )
    {
        for( int j = 0 ; j < 8 ; j++ )
        {
            cin>>chess[i][j];
            if( chess[i][j] >= 'A' && chess[i][j] <= 'Z' )
            {
                int r = tom(chess[i][j]);
                white += r;
            }
            else if( chess[i][j] >= 'a' && chess[i][j] <= 'z' )
            {
                int s = tom(chess[i][j]);
                black += s;
            }
        }
    }
    if( white > black ) cout<<"White"<<endl;
    else if( white < black ) cout<<"Black"<<endl;
    else if( white == black ) cout<<"Draw"<<endl;
    return 0;
}

