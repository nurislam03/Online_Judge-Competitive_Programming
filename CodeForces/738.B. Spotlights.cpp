#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define LL long long
#define sz 1000


int ara[sz+10][sz+10];
int sumRow[sz+10][sz+10];
int sumCol[sz+10][sz+10];
int r,c;



void Q_sum()
{
    for(int i = 1; i <= r; i++)
    {
        sumRow[i][0] = ara[i][0];
        for(int j = 1; j <= c; j++)
        {
            sumRow[i][j] = (sumRow[i][j-1] + ara[i][j]);
        }
    }

    for(int i = 1; i <= c; i++)
    {
        sumCol[0][i] = ara[0][i];
        for(int j = 1; j <= r; j++)
        {
            sumCol[j][i] = (sumCol[j-1][i] + ara[j][i]);
        }
    }
}



int Solve()
{
    int cnt = 0;
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            if(ara[i][j] == 0)
            {
                int up = 0,dw = 0,lft = 0,rt = 0;

                if(sumCol[i][j]) up++;
                if(sumCol[r][j] - sumCol[i][j]) dw++;
                if(sumRow[i][j]) lft++;
                if(sumRow[i][c] - sumRow[i][j]) rt++;

                cnt += (up + dw + lft + rt);
            }
        }
    }
    return cnt;
}




int main()
{
    scanf("%d %d",&r,&c);
    int x;
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            scanf("%d",&x);
            ara[i][j] = x;
        }
    }


    Q_sum();
    int ans = Solve();

    printf("%d\n",ans);

    return 0;
}
