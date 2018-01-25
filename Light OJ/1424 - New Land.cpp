#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
#define LL long long
#define sz 2000
char matrix[sz+10][sz+10];
int height[sz+10];



LL getMaxArea(int n)
{
    stack < int > stk;
    LL tp,Area, idx = 0, maxArea = 0;

    while(idx < n)
    {
        if(stk.empty() || (height[stk.top()] <= height[idx]))
        {
            stk.push(idx++);
            continue;
        }

        tp = stk.top();
        stk.pop();

        if(stk.empty() == true) Area = (height[tp]*idx);
        else Area = (height[tp]*(idx-stk.top()-1));

        maxArea = max(Area, maxArea);
    }

    while(!stk.empty())
    {
        tp = stk.top();
        stk.pop();

        if(stk.empty()) Area = (height[tp]*idx);
        else Area = (height[tp]*(idx-stk.top()-1));

        maxArea = max(Area, maxArea);
    }

    return maxArea;
}



int main()
{
    int tc, n, m, h;
    scanf("%d",&tc);

    for(int t = 1; t <= tc; ++t)
    {
        scanf("%d %d",&n,&m);

        for(int i = 0; i < n; ++i)
            scanf("%s",matrix[i]);

        memset(height, 0, sizeof height);
        LL ans = -10000000;
        for(int i = 0; i < n; i++)
        {
            for(int k = 0; k < m; k++)
            {
                if(matrix[i][k] == '0'){
                    height[k] += 1;
                }
                else height[k] = 0;
            }
            LL maxRectangle = getMaxArea(m);
            ans = max(ans, maxRectangle);

        }

        printf("Case %d: %lld\n",t,ans);
    }

    return 0;
}
