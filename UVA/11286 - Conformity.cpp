#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N;
    while( scanf("%d",&N) )
    {
        if( N == 0 ) break;
        map < vector<int>, int > Map;
        map < vector<int>, int >::iterator it;

        int Max = 1,res = 0;
        while(N--)
        {
            vector<int>V;
            int x;

            for( int i = 0; i < 5; i++ )
            {
                scanf("%d",&x);
                V.push_back(x);
            }
            sort( V.begin(), V.end() );

            Map[V] += 1;
            Max = max(Max, Map[V]);
        }

        for( it = Map.begin(); it != Map.end(); it++ )
        {
            if( it->second == Max ) res += it->second;
        }
        printf("%d\n",res);
    }
    return 0;
}
