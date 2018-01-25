#include <iostream>
#include <cstdio>
#include <map>

using namespace std;
map < string , int > Map;
#define sz 100000 * 2
int parent[sz+5],Rank[sz+5],cnt[sz+5];


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


int Union(int pX, int pY)
{
    int tempCnt;
    if(Rank[pX] > Rank[pY])
    {
        parent[pY] = pX;
        cnt[pX] += cnt[pY];
        tempCnt = cnt[pX];
    }

    else if(Rank[pX] < Rank[pY])
    {
        parent[pX] = pY;
        cnt[pY] += cnt[pX];
        tempCnt = cnt[pY];
    }

    else
    {
        parent[pY] = pX;
        Rank[pX] += 1;
        cnt[pX] += cnt[pY];
        tempCnt = cnt[pX];
    }

    return tempCnt;
}



int main()
{
    int tC;
    scanf("%d",&tC);

    while(tC--)
    {
        int m;
        scanf("%d",&m);

        int totNode = 2 * m;
        for( int i = 1; i <= totNode; i++ )
            makeSet(i);


        Map.clear();
        string name1,name2;
        int x,y,id = 0;

        while(m--)
        {
            cin >> name1 >> name2;

            if(!Map[name1])
            {
                Map[name1] = ++id;
                x = id;
            }
            else x = Map[name1];

            if(!Map[name2])
            {
                Map[name2] = ++id;
                y = id;
            }
            else y = Map[name2];


            int pX = Find(x);
            int pY = Find(y);

            int res;
            if(pX != pY)
                res = Union(pX, pY);

            else res = cnt[pX]; // or cnt[pY];

            cout << res << endl;

        }
    }
    return 0 ;
}
