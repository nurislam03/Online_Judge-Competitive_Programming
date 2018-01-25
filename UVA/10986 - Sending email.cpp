//
//  main.cpp
//  TestCode
//
//  Created by Nur Islam on 7/30/16.
//  Copyright © 2016 nur islam. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;
int Distance[20010];

struct server
{
    int destination,cost;
    
    server()
    {
        //blanck constructor
    }
    
    server(int a,int b)
    {
        destination = a;
        cost = b;
    }
    
    bool operator < ( const server& o ) const
    {
        return (cost>o.cost);
    }
};

vector <server> V[20010];

void init( int n )
{
    for( int i = 0 ; i <= n ; i++ )
    {
        Distance[i] = 1000000000;
        V[i].clear();
    }
}

int Dijkstra( int src, int dest )
{
    
    priority_queue < server > pQ;
    pQ.push(server(src,0));      // push : structure
    Distance[src] = 0;
    
    while( !pQ.empty() )
    {
        server x,y;         // struct variable
        x = pQ.top();
        pQ.pop();
        
        for( int i = 0 ; i < V[x.destination].size() ; i++ )
        {
            y = V[x.destination][i];
            if( x.cost + y.cost < Distance[y.destination] )
            {
                int cc = x.cost + y.cost;
                Distance[y.destination] = cc;
                pQ.push(server(y.destination,cc));
            }
        }
    }
    return Distance[dest];
}


int main()
{
    int tt,n,m,s,t;
    scanf("%d",&tt);
    
    for( int k = 1 ; k <= tt ; k++ )
    {
        scanf("%d%d%d%d",&n,&m,&s,&t);
        init(n);
        
        int Computer1,Computer2,Value;
        server SV;
        
        for( int i = 1 ; i <= m ; i++ )
        {
            scanf("%d%d%d",&Computer1,&Computer2,&Value);
            
            SV.destination = Computer2; SV.cost = Value;
            V[Computer1].push_back(SV);
            
            SV.destination = Computer1; SV.cost = Value;
            V[Computer2].push_back(SV);
        }
        
        int res = Dijkstra( s, t );
        if( res == 1000000000 ) printf("Case #%d: unreachable\n",k);
        else printf("Case #%d: %d\n",k,res);
    }
    return 0;
}