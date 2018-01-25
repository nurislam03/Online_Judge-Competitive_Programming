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

using namespace std;
#define sz 100

vector <int> task[sz+5];
int indegree [sz+5];
queue <int> q;
int num_of_Task;



void DFS()
{
    int u,v,len = 1;

    while(!q.empty())
    {
        u = q.front();
        q.pop();

        if(len++ != num_of_Task)
            printf("%d ",u);

        else printf("%d\n",u);


        for(int i = 0; i < task[u].size(); ++i)
        {
            v = task[u][i];
            indegree[v]--;

            if(indegree[v] == 0)
                q.push(v);

        }
    }

}



int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m))
    {
        if(n == 0 && m == 0)
            break;

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < task[i].size(); ++j)
                task[i][j] = 0; // vector initializing.
        }
        memset(indegree, 0, sizeof(indegree));


        int tsk1,tsk2;
        while(m--)
        {
            scanf("%d %d",&tsk1,&tsk2);

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

        num_of_Task = n;
        DFS();

    }

    return 0;
}
