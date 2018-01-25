//
//  Problem Name : 762 - We Ship Cheap
//  Idea         : bfs
//  Online judge : UVa
//  Created by Nur Islam.
//  Copyright © 2017 nur islam. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;
#define LL long long
#define MAX 1000000000000
#define sz 200000

map < string, string > route;
map < string, int > vis;

bool bfs(string src, string dest, map < string, vector < string > > adj)
{
    queue < string > Q;
    Q.push(src);
    vis[src] = 1;

    while(!Q.empty())
    {
        string u,v;
        u = Q.front();
        Q.pop();

        if(u == dest) return true;
        for(int i = 0; i < adj[u].size(); ++i)
        {
            v = adj[u][i];
            if(vis[v] != -1) continue;

            vis[v] = 1;
            route[v] = u;
            Q.push(v);
        }
    }

    return false;
}

void PrintPath(string a, string b)
{
    if(a == b) return;

    PrintPath(route[a], b);
    cout << route[a] << " " << a << endl;
}



int main()
{
    bool newLine = false;
    int n;

    while(scanf("%d",&n) != EOF)
    {
        map < string, vector < string > > adj;
        for(int i = 1; i <= n; ++i)
        {
            string s1,s2;
            cin >> s1 >> s2;

            adj[s1].push_back(s2);
            adj[s2].push_back(s1);

            vis[s1] = -1;
            vis[s2] = -1;
        }
        string start,end;
        cin >> start >> end;

        if(newLine) printf("\n");
        newLine = true;

        if(bfs(start, end, adj) == true)
            PrintPath(end, start);
        else printf("No route\n");
    }

    return 0;
}
