#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int Solve(int n)
{
    return (n*(n+1)*(2*n+1))/6;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int Val1 = Solve(b);
    int Val2 = Solve(--a);

    int ans = Val1 - Val2;

    printf("%d\n",ans);
    return 0;
}
