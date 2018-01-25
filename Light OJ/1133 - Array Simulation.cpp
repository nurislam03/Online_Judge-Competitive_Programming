#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,ara[110];

void Reverse()
{
    int temp;
    for( int i = 0 , j = n-1 ; i < (n/2) ; i++ ,j-- )
    {
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
    }
}

void Swap()
{
    int temp = ara[x];
    ara[x] = ara[y];
    ara[y] = temp;
}

void Add()
{
    for( int i = 0 ; i < n ; i++ ) ara[i] += x;
}

void Multiply()
{
    for( int i = 0 ; i < n ; i++ ) ara[i] *= x;
}

void Divides()
{
    for( int i = 0 ; i < n ; i++ ) ara[i] /= x;
}

int main()
{
    string Operation;
    int tt; cin >> tt;
    for( int t = 1 ; t <= tt ; t++ )
    {
        cin >> n >> m;
        for( int i = 0 ; i < n ; i++ ) cin >> ara[i];
        for( int i = 0 ; i < m ; i++ )
        {
            cin >> Operation;
            if( Operation == "R" ) Reverse();
            else if( Operation == "P" )
            {
                cin >> x >> y;
                Swap();
            }
            else
            {
                cin >> x;
                if( Operation == "S" ) Add();
                if( Operation == "M" ) Multiply();
                if( Operation == "D" ) Divides();
            }
        }
        cout<<"Case "<<t<<":"<<endl;
        for( int i = 0; i < n-1 ; i++ ) cout<<ara[i]<<" ";
        cout<<ara[n-1]<<endl;
    }
    return 0;
}
