/*
        Problem   : 1082 - Array Queries
        IDEA : Segment Tree


        // (a,b) -> state range.
        // (i,j) -> query range.

*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define mod 1000003
#define Max 100000000
#define sz 100000

int ara[sz+10];
LL tree[sz*3];



void init(int node, int a, int b)
{
    if(a == b)
    {
        tree[node] = ara[a]; //cout <<"ok " << tree[node] << endl;
        return;
    }
    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    init(left, a, mid);
    init(right, mid+1, b);

    tree[node] =  min(tree[left], tree[right]);
}



// (a,b) -> state range.
// (i,j) -> query range.
int query(int node, int a, int b, int i, int j)
{
    if(a > j || b < i)
        return Max;

    if(a >= i && b <= j)
        return tree[node];

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    int q1 = query(left, a, mid, i, j);
    int q2 = query(right, mid+1, b, i, j);

    return min(q1, q2);
}



int main()
{
    int tc;
    scanf("%d",&tc);

    for(int t = 1; t <= tc; t++)
    {
        int n,q;
        scanf("%d %d",&n,&q);

        memset(ara, 0, sizeof(ara));
        memset(tree, 0, sizeof(tree));

        for(int i = 1; i <= n; i++)
        {
            scanf("%d",&ara[i]);
        }

        init(1, 1, n);
        printf("Case %d:\n", t);


        for(int i = 1; i <= q; ++i)
        {
            int x,y;
            scanf("%d %d",&x,&y);

            int ans = query(1, 1, n, x, y);
            printf("%d\n",ans);
        }
    }

    return 0;
}
