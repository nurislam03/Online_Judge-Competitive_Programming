#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;
#define LL long long
vector < int > V;


int main()
{
    int n,x,fileSize;
    scanf("%d %d",&n, &fileSize);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        V.push_back(x);
    }
    sort(V.begin(), V.end());

    int k = V.size()-1, cnt = 0;
    while(fileSize > 0)
    {
        fileSize -= V[k--];
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
