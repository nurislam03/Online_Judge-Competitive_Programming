/*
    Problem Name : 1087 - Diablo
    Online Judge : Light OJ
    Idea : Segment Tree
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
#define sz 150005

int ara[sz+10];
int tree[4*sz];


/*
// unnecessary part for this problem.//

void init(int node, int a, int b)
{
    if(a == b)
    {
        tree[node] = 1;
        return;
    }
    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    init(left, a, mid);
    init(right, mid+1, b);

    tree[node] = tree[left] + tree[right];
}
*/

// (a,b) -> state range.
void Update(int node, int a, int b, int i, int value)
{
    if(i < a || i > b)
        return;
    if(a >= i && b <= i)
    {
        tree[node] += value;
        return;
    }
    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    Update(left, a, mid, i, value);
    Update(right, mid+1, b, i, value);

    tree[node] = tree[left] + tree[right];
}



LL query(int node, int a, int b, int target)
{
    if(a == b) return a;

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    if(tree[left] >= target)
        return query(left, a, mid, target);
    else
        return query(right, mid+1, b, target-tree[left]);
}



int main()
{
    int t;
    scanf("%d",&t);

    for(int T = 1; T <= t; T++)
    {
        int n,q,tot = 0;
        memset(ara, 0, sizeof(ara));
        memset(tree, 0, sizeof(tree));

        scanf("%d %d",&n,&q);
        int id = 0;

        for(int i = 1; i <= n; i++)
        {
            scanf("%d",&ara[++id]);
            Update(1 , 1 , sz , id , 1);
            tot++;
        }
        //init(1, 1, sz);
        printf("Case %d:\n", T);

        char cmnd[3];
        int x;
        for(int i = 1; i <= q; i++)
        {
            scanf("%s %d",cmnd,&x);

            if(cmnd[0] == 'c')
            {
                if(x > tot)
                {
                    printf("none\n");
                    continue;
                }
                int tmpID = query(1, 1, sz, x);
                //cout << tmpID << endl ;
                int ans = ara[tmpID];
                printf("%d\n",ans);

                Update(1, 1, sz, tmpID, -1);
                tot--;
            }

            if(cmnd[0] == 'a')
            {
                ara[++id] = x;
                Update(1, 1, sz, id, 1);
                tot++;
            }
        }
    }


    return 0;
}
