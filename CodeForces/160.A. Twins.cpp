#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
vector < int > V;


int main()
{
    int n,x,sum = 0;
    scanf("%d",&n);

    for(int i = 1; i <= n; ++i)
    {
        scanf("%d",&x);
        sum += x;
        V.push_back(x);
    }
    sort(V.begin(), V.end());

    int k = V.size()-1,cnt = 0,target = 0;

    while(target <= sum/2)
    {
        target += V[k--];
        cnt++;
    }

    printf("%d\n",cnt);
    return 0;
}
