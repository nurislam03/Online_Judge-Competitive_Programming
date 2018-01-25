#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector < int > V;
map < int , int > Map;

int main()
{
    int T;
    scanf("%d",&T);

    //freopen("input,txt","r",stdin);
    //freopen("output.txt","w",stdout);

    for( int t = 1; t <= T; t++ )
    {
        int N,x,res = 0,Count = 0,k = 1;
        scanf("%d",&N);

        V.clear();
        Map.clear();
        V.push_back(0);

        for( int i = 1; i <= N; i++ )
        {
            scanf("%d",&x);
            V.push_back(x);

            if(Map[x] == 0 )
            {
                Map[x] = i;
                Count++; //cout << "Coutn = " << Count << endl;
                res = max( res, Count );
            }
            else
            {
                Count = (i - Map[x]);
                for( ; k <= Map[x]; k++ )
                {
                    //erase the previous sub array
                    Map[V[k]] = 0;
                }
                //if( k > 0 ) k--;
                Map[x] = i;
                res = max( res, Count );
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
