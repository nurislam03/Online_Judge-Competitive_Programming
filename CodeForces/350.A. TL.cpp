#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector < int > V,W;

int main()
{
    int n,m,x,TL;
    cin >> n >> m;

    for( int i = 1 ; i <= n ; i++ )
    {
        cin >> x;
        V.push_back(x);
    }

    for( int i = 1 ; i <= m ; i++ )
    {
        cin >> x;
        W.push_back(x);
    }
    sort( V.begin(),V.end() );
    sort( W.begin(),W.end() );

    TL = max( V[0]*2 , V[n-1] );

    if( TL < W[0] ) cout << TL << endl;
    else cout << "-1" << endl;
    return 0;
}
