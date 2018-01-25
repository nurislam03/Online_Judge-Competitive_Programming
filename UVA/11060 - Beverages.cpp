/*
    Idea: Top Sort

*/
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
#include <set>
#include <sstream>
#include <map>

using namespace std;
#define sz 205

vector <int> task[sz+10];
int indegree [sz+10];
priority_queue <int, vector<int>, greater<int> > q;
map < string, int > Map;
map < int, string > NameMap;



void DFS()
{
    int u,v;

    while(!q.empty())
    {
        u = q.top();
        q.pop();
        //cout << "oka " << u << endl;

        cout << " " << NameMap[u];


        for(int i = 0; i < task[u].size(); ++i)
        {
            v = task[u][i];
            indegree[v]--;

            if(indegree[v] == 0)
                q.push(v);
        }
    }
    printf(".\n\n");
}



int main()
{
    //freopen("input,txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n,m,tC = 1;
    while(scanf("%d",&n) != EOF)
    {
        memset(indegree, 0, sizeof(indegree));
        for(int i = 0; i <= n; ++i)
            task[i].clear();

        Map.clear();
        NameMap.clear();


        string beverage;
        int id = 1;
        for(int i = 1; i <= n; i++)
        {
            cin >> beverage;

            Map[beverage] = id;
            NameMap[id] = beverage;
            id++;
        }


        cin >> m;
        string bvrg1, bvrg2;

        while(m--)
        {
            cin >> bvrg1 >> bvrg2;

            int tsk1 = Map[bvrg1];
            int tsk2 = Map[bvrg2];


            task[tsk1].push_back(tsk2);
            indegree[tsk2]++;
        }


        while(!q.empty())
            q.pop(); // queue initializing.


        for(int i = 1; i <= n; ++i)
        {
            if(indegree[i] == 0)
                q.push(i);
        }


        cout << "Case #" << tC++ << ": Dilbert should drink beverages in this order:";
        DFS();

    }

    return 0;
}
