#include <iostream>
#include <cstdio>
#include <map>

using namespace std;
#define sz 5000
map <string, int> Map;
int parent[sz+5],Rank[sz+5],cnt[sz+5];
int maxCnt;



void makeSet(int x)
{
    parent[x] = x;
    Rank[x] = 0;
    cnt[x] = 1;
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

    if( pX == pY ) return;

    if(Rank[pX] > Rank[pY])
    {
        parent[pY] = pX;
        cnt[pX] += cnt[pY];

        maxCnt = max(maxCnt, cnt[pX]);
    }

    else if(Rank[pX] < Rank[pY])
    {
        parent[pX] = pY;
        cnt[pY] += cnt[pX];

        maxCnt = max(maxCnt, cnt[pY]);
    }

    else
    {
        parent[pY] = pX;
        Rank[pX] += 1;
        cnt[pX] += cnt[pY];

        maxCnt = max(maxCnt, cnt[pX]);
    }
}



int main()
{
    int totCreatures,totRelations;
    while(scanf("%d %d",&totCreatures,&totRelations))
    {
        if( !totCreatures && !totRelations )
            break;


        for( int i = 1; i <= totCreatures; i++ )
            makeSet(i);

        Map.clear();
        maxCnt = 0;

        int id = 0;
        string creatureName;

        while(totCreatures--)
        {
            cin >> creatureName;
            Map[creatureName] = ++id;
        }


        if(totRelations == 0)
            maxCnt = 1;


        string c1,c2;
        while(totRelations--)
        {
            cin >> c1 >> c2;
            Union(Map[c1], Map[c2]);
        }

        cout << maxCnt << endl;
    }

    return 0 ;
}
