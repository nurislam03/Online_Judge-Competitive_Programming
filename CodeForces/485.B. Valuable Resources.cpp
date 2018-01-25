#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long T,X,Y,MinX,MaxX,MinY,MaxY;
    cin >> T;
    cin >> X >> Y;

    MaxX = X; MaxY = Y;
    MinX = X; MinY = Y;

    for( int i = 2 ; i <= T ; i++ )
    {
        cin >> X >> Y;

        MaxX = max( MaxX , X );
        MaxY = max( MaxY , Y );
        MinX = min( MinX , X );
        MinY = min( MinY , Y );
    }
    long long res =  max ( abs( MaxX - MinX ) , abs( MaxY - MinY ) );
    res = res * res;
    cout << res << endl;

    return 0;
}
