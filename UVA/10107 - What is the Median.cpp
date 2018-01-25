#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x,Median;
    vector < int > V;

    while( scanf("%d",&x) != EOF )
    {
        V.push_back(x);
        sort( V.begin() , V.end() );

        int len = (int) V.size();
        if( len % 2 != 0 ) printf("%d\n",V[len/2]);
        else
        {
            Median = ( V[len/2] + V[(len/2)-1] ) / 2;
            printf("%d\n",Median);
        }
    }
    return 0;
}
