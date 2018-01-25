#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
vector < int > V;

int main()
{
    int n, tCase = 0;
    while(scanf("%d",&n) && n != 0)
    {
        int x, tot = 0;
        V.clear();
        for(int i = 1; i <= n; i++)
        {
            scanf("%d",&x);
            V.push_back(x);
            tot += x;
        }
        int avrg = (tot/n);
        int ans = 0;
        for(int i = 0; i < V.size(); i++)
        {
            if(V[i] > avrg)
                ans += (V[i] - avrg);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++tCase, ans);
    }
}
