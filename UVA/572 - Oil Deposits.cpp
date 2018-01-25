#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define LL long long
#define sz 100


#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)


char ara[sz+10][sz+10];
int vis[sz+10][sz+10];
int r,c;


int fx[10] = {-1,0,1,1,1,0,-1,-1};
int fy[10] = {1,1,1,0,-1,-1,-1,0};



bool IsValid(int i, int j)
{
    //return ((i >= 0 && i < r) && (j >= 0 && j < c)) ? true : false;
    if((i >= 0 && i < r) && (j >= 0 && j < c))
        return true;
    return false;
}


void DFS_FloodFill(int i, int j)
{
    vis[i][j] = 1;

    for(int k = 0; k < 8; k++)
    {
        int ii = i+fx[k];
        int jj = j+fy[k];

        if(IsValid(ii, jj))
        {
            if(vis[ii][jj] == -1 && ara[ii][jj] == '@')
                DFS_FloodFill(ii, jj);
        }
    }
}




int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while(scanf("%d %d",&r,&c) != EOF)
    {
        if(r == 0) break;

        memset(vis, -1, sizeof(vis));

        char ch;

        for(int i = 0; i < r; i++)
        {
            scanf("%s",ara[i]);
            //printf("%s\n",ara[i]);
        }

        int ans = 0;
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(ara[i][j] == '@' && vis[i][j] == -1)
                {
                    DFS_FloodFill(i, j);
                    ans++;
                }
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}
