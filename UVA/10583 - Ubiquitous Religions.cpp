#include <iostream>
#include <cstdio>

using namespace std;
int parent[50000+5],Rank[50000+5];


void makeSet(int x)
{
    parent[x] = x;
    Rank[x] = 0;
}


int Find(int x)
{
    if(x != parent[x])
        parent[x] = Find(parent[x]);

    return parent[x];
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
        Rank[pX] += 1;
    }
}


int main()
{
    int n,m,tC = 0;
    while( scanf("%d %d",&n,&m) )
    {
        if( n == 0 && m == 0 ) break;

        for( int i = 1; i <= n; i++ )
            makeSet(i);

        int totUniqueReligion = n;

        int x,y;
        for( int i = 1; i <= m; i++ )
        {
            cin >> x >> y;
            if(Find(x) != Find(y))
            {
                Union(x, y);
                totUniqueReligion--;
            }
        }
        cout << "Case " << ++tC << ": " << totUniqueReligion << endl;
    }
    return 0 ;
}
