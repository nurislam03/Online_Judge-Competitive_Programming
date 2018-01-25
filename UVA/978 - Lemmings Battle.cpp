#include <iostream>
#include <queue>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);

    for( int t = 1; t <= T; t++ )
    {
        priority_queue < int > Green,Blue;
        vector < int > vG,vB;

        int x,battlefield,GreenArmy,BlueArmy;
        scanf("%d %d %d", &battlefield, &GreenArmy, &BlueArmy);

        for( int i = 1; i <= GreenArmy; i++ )
        {
            scanf("%d",&x);
            Green.push(x);
        }
        for( int i = 1; i <= BlueArmy; i++ )
        {
            scanf("%d",&x);
            Blue.push(x);
        }

        while( !Green.empty() && !Blue.empty() )
        {
            int temp = min(Green.size(),Blue.size());
            temp = min( temp, battlefield );

            for( int i = 1; i <= temp; i++ )
            {
                int G = Green.top(); Green.pop();
                int B = Blue.top();  Blue.pop();

                if( G > B ) vG.push_back(G-B);
                else if( B > G ) vB.push_back(B-G);

            }

            for( int i = 0; i < vG.size(); i++ ) Green.push(vG[i]);
            for( int i = 0; i < vB.size(); i++ )  Blue.push(vB[i]);

            vG.clear();
            vB.clear();
        }

        if( Green.empty() && Blue.empty() )
        {
            printf("green and blue died\n");
        }

        else if( Green.empty())
        {
            printf("blue wins\n");
            while(!Blue.empty())
            {
                printf("%d\n",Blue.top());
                Blue.pop();
            }
        }

        else if( Blue.empty())
        {
            printf("green wins\n");
            while(!Green.empty())
            {
                printf("%d\n",Green.top());
                Green.pop();
            }
        }

        if( t != T ) printf("\n");
    }
    return 0;
}
