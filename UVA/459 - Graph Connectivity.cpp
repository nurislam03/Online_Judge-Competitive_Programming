#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int parent[26],Rank[26];


void makeSet( int x )
{
    parent[x] = x;
    Rank[x] = 0;
}


int Find( int u )
{
    if( u != parent[u] )
        parent[u] = Find(parent[u]);

    return parent[u];
}


void Union(int x, int y)
{
    int pX = Find(x);
    int pY = Find(y);

    if(Rank[pX] > Rank[pY])
        parent[pY] = pX;

    else if(Rank[pX] < Rank[pY])
        parent[pX] = pY;

    else
    {
        parent[pY] = pX;
        Rank[pX]++;
    }
}



int main()
{
    int T;
    scanf("%d\n\n",&T);

    for( int t = 1; t <= T; t++ )
    {
        string node;
        getline(cin, node);

        int totNode = node[0] - 'A' + 1;
        int totSubGraph = totNode;

        for( int i = 0 ; i < totSubGraph; i++ )
            makeSet(i);

        int x,y;
        while( getline(cin, node) )
        {
            if( node.empty() ) break;

            x = node[0] - 'A';
            y = node[1] - 'A';

            if( Find(x) != Find(y) )
            {
                Union(x,y);
                totSubGraph--;
            }
        }
        if(t != 1) printf("\n");
        printf("%d\n",totSubGraph);
    }
    return 0;
}
