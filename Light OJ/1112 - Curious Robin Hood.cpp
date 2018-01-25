/*
        Problem   : Curious Robin Hood
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
#define sz 100000

int ara[sz+10];
LL tree[sz*3];



void init(int node, int a, int b)
{
    if(a == b)
    {
        tree[node] = ara[a];
        return;
    }
    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    init(left, a, mid);
    init(right, mid+1, b);

    tree[node] = tree[left] + tree[right];
}


// (a,b) -> state range.
// (i,j) -> query range.
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


LL query(int node, int a, int b, int i, int j)
{
    if(a > j || b < i)
        return 0;
    if(a >= i && b <= j)
        return tree[node];

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    int q1 = query(left, a, mid, i, j);
    int q2 = query(right, mid+1, b, i, j);

    return (q1+q2);
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
            int cmnd,x,y;
            scanf("%d",&cmnd);

            if(cmnd == 1)
            {
                scanf("%d",&x);
                x++; // 1 based index

                printf("%d\n",ara[x]);
                Update(1, 1, n, x, -(ara[x]));
                ara[x] = 0;
            }
            else if(cmnd == 2)
            {
                scanf("%d %d",&x,&y);
                x++; // 1 based index

                ara[x] += y;
                Update(1, 1, n, x, y);
            }
            else
            {
                scanf("%d %d",&x,&y);
                x++,y++; // 1 based index

                LL ans = query(1, 1, n, x, y);
                printf("%lld\n",ans);
            }
        }
    }

    return 0;
}




/*

         IDEA : BIT
         Binary Index Tree.



#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>


using namespace std;
#define LL long long
#define sz 100000
int ara[sz+10];
LL Tree[sz+10];
int n,q;


void Update(int idx, int val)
{
    while(idx <= n)
    {
        Tree[idx] += val;
        idx += (idx & (-idx));
    }
}


LL query(int idx)
{
    LL sum = 0;
    while(idx > 0)
    {
        sum += Tree[idx];
        idx -= (idx & (-idx));
    }
    return sum;
}



int main()
{
    int TC;
    scanf("%d",&TC);

    for(int T = 1; T <= TC; ++T)
    {
        scanf("%d %d",&n,&q);

        memset(Tree, 0, sizeof(Tree));
        for(int i = 1; i <= n; ++i)
        {
            scanf("%d",&ara[i]);
            Update(i, ara[i]);
        }

        printf("Case %d:\n", T);
        for(int i = 1; i <= q; ++i)
        {
            int command,x,y;
            scanf("%d",&command);

            if(command == 1)
            {
                scanf("%d",&x);
                x++; // one based index

                printf("%d\n",ara[x]);
                Update(x, -(ara[x]));
                ara[x] = 0;
            }
            else if(command == 2)
            {
                scanf("%d %d",&x,&y);
                x++; // one based index

                ara[x] += y;
                Update(x, y);
            }
            else
            {
                scanf("%d %d",&x,&y);
                x++,y++; // one based index

                LL ans = query(y) - query(x-1);
                printf("%lld\n",ans);
            }
        }
    }

    return 0;
}

*/


/*
        IDEA : Binary Index Tree.
        //another solution : Using a single ARRAY;

        #include <iostream>
        #include <cstring>
        #include <cstdio>
        #include <algorithm>
        #include <cmath>


        using namespace std;
        #define LL long long
        #define sz 100000
        LL Tree[sz+10];
        int n,q;


        void Update(int idx, int val)
        {
            while(idx <= n)
            {
                Tree[idx] += val;
                idx += (idx & (-idx));
            }
        }


        LL query(int idx)
        {
            LL sum = 0;
            while(idx > 0)
            {
                sum += Tree[idx];
                idx -= (idx & (-idx));
            }
            return sum;
        }



        int main()
        {
            int TC;
            scanf("%d",&TC);

            for(int T = 1; T <= TC; ++T)
            {
                scanf("%d %d",&n,&q);

                memset(Tree, 0, sizeof(Tree));
                for(int i = 1; i <= n; ++i)
                {
                    int a;
                    scanf("%d",&a);
                    Update(i, a);
                }

                printf("Case %d:\n", T);
                for(int i = 1; i <= q; ++i)
                {
                    int command,x,y;
                    LL ans;
                    scanf("%d",&command);

                    if(command == 1)
                    {
                        scanf("%d",&x);
                        x++; // one based index

                        ans = query(x) - query(x-1);
                        Update(x, -ans);
                        printf("%lld\n", ans);
                    }
                    else if(command == 2)
                    {
                        scanf("%d %d",&x,&y);
                        x++; // one based index

                        Update(x, y);
                    }
                    else
                    {
                        scanf("%d %d",&x,&y);
                        x++,y++; // one based index

                        ans = query(y) - query(x-1);
                        printf("%lld\n",ans);
                    }
                }
            }

            return 0;
        }

        */
