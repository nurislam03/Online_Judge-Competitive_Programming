#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;


int main()
{
    int T,n;
    scanf("%d",&T);
    for( int t = 1 ; t <= T ; t++ )
    {
        scanf("%d",&n);
        string x;
        int id,res = 0;
        vector <int> V;

        for( int i = 1 ; i <= n ; i++ )
        {
            cin >> x;
            if( x[0] == 'L' )
            {
                res -= 1;
                V.push_back(-1);
            }
            else if( x[0] == 'R' )
            {
                res += 1;
                V.push_back(1);
            }
            else
            {
                cin >> x >> id;
                res += V[id-1];
                V.push_back(V[id-1]);
            }
        }
        cout << res << endl;
    }
    return 0;
}
