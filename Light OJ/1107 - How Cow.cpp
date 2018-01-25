#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x1,y1,x2,y2,M,x,y;
    cin >> t;

    for( int i = 1 ; i <= t ; i++ )
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> M;
        cout<<"Case "<<i<<":"<<endl;
        for( int j = 0 ; j < M ; j++ )
        {
            cin >> x >> y;
            if( x >= x1 && x <= x2 && y >= y1 && y <= y2 ) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
