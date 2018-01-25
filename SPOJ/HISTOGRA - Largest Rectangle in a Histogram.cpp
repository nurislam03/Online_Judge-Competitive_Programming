#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
#define LL long long
#define sz 100000
int height[sz+100];

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
    int n;
    while(scanf("%d",&n) && n != 0)
    {
        for(int i = 0; i < n; ++i)
            scanf("%d",&height[i]);

        LL ans = getMaxArea(n);

        printf("%lld\n", ans);
    }

    return 0;
}
