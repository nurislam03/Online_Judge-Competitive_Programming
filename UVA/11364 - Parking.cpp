#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;


int main()
{
    int T,n,x;
    cin >> T;

    for( int t = 1 ; t <= T ; t++ )
    {
        cin >> n;
        vector < int > V;
        for( int i = 1 ; i <= n ; i++ )
        {
            cin >> x;
            V.push_back(x);
        }

        if( V.size() > 2 ) sort( V.begin() , V.end() );
        int res = 0;
        for( int i = 1 ; i < V.size() ; i++ )
        {
            res += abs( V[i - 1] - V[i] );
        }
        cout << res*2 << endl;
    }

    return 0;
}
