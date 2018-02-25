#include<bits/stdc++.h>
using namespace std;
vector< vector< pair<int,int> > > node;
int dist[30010];


int BFS()
{
    memset( dist , -1 , sizeof(dist));
    queue < int > q;
    q.push(0);
    dist[0] = 0;
    int Tcost = 0, MaxNode = 0;


    while( !q.empty())
    {
        int source = q.front();
        q.pop();

        for( int i = 0 ; i < node[ source ].size() ; i ++ )
        {
            pair<int,int> nxtnode = node[ source ][ i ] ;
            int v = nxtnode.first ;
            int cost = nxtnode.second ;
            if( dist[v] < 0 )
            {
                q.push(v);
                dist[v] = dist[source] + cost;
                if( Tcost < dist[v])
                {
                    Tcost = dist[v];
                    MaxNode = v;
                }
            }
        }
    }
    memset( dist , -1 , sizeof(dist));
    q.push(MaxNode);
    dist[MaxNode] = 0;
    Tcost = 0;

    while( !q.empty())
    {
        int source = q.front();
        q.pop();

        for( int i = 0 ; i < node[ source ].size() ; i ++ )
        {
            pair<int,int> nxtnode = node[ source ][ i ] ;
            int v = nxtnode.first ;
            int cost = nxtnode.second ;
            if( dist[v] < 0 )
            {
                q.push(v);
                dist[v] = dist[source] + cost;
                if( Tcost < dist[v])
                {
                    Tcost = dist[v];
                }
            }
        }
    }
    return Tcost;

}


int main()
{
    int test;
    scanf("%d",&test);
    for( int i = 1 ; i <= test ; i++ )
    {
        int n;
        scanf("%d",&n);
        node = vector< vector< pair<int,int> > > ( n ) ;

        for( int j = 1 ; j < n ; j++ )
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            node[u].push_back(make_pair(v,w));
            node[v].push_back(make_pair(u,w));
        }
        int res = BFS();
        cout<<"Case "<<i<<": "<<res<<endl;

    }
    return 0;
}
