#include <iostream>
using namespace std;

int main()
{
    int x,y,z,t;
    cin >> t;
    for( int i = 1 ; i <= t; i++ )
    {
        cin >> x >> y >> z;
        if( x <= 20 && y <= 20 && z <= 20 ) cout <<"Case "<<i<<": "<<"good"<<endl;
        else cout <<"Case "<<i<<": "<<"bad"<<endl;
    }
    return 0;
}
