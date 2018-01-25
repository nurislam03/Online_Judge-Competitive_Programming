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
#define sz 10000


struct TREE{
    int PrimeCnt;
    int propagteValue;
};

TREE tree[sz*4];
int ara[sz+10];
bool is_prime[1000000+6];


void PrimeGenerate()
{
    memset(is_prime, true, sizeof(is_prime));
    for(int i = 2; i*i <= 1000000; i++)
    {
        if(is_prime[i] == true)
        {
            for (int j = i*i; j <= 1000000; j += i)
                is_prime[j] = false;
        }
    }
    is_prime[0] = is_prime[1] = false;
}


void segmentTree(int node, int a, int b)
{
    if(a == b){
        tree[node].PrimeCnt = ara[a];
        tree[node].propagteValue = -1;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree(left, a, mid);
    segmentTree(right, mid+1, b);

    tree[node].PrimeCnt = tree[left].PrimeCnt + tree[right].PrimeCnt;
    tree[node].propagteValue = -1;
}


// (left, right) -> node;
// left node range -> (a1, b1);
// right node range ->(a2, b2);
void propagate(int node, int left, int a1, int b1, int right, int a2, int b2)
{
    if(tree[node].propagteValue == -1) return;

    tree[left].propagteValue  = tree[node].propagteValue;
    tree[right].propagteValue = tree[node].propagteValue;

    tree[left].PrimeCnt  = tree[node].propagteValue*(b1-a1+1);
    tree[right].PrimeCnt = tree[node].propagteValue*(b2-a2+1);

    tree[node].propagteValue = -1;
}

// (a,b) -> state range.
// (i,j) -> query range.
void Update(int node, int a, int b, int i, int j, int value)
{
    if(i > b || j < a) return;
    if(i <= a && j >= b){
        tree[node].PrimeCnt = (b-a+1)*value;
        tree[node].propagteValue = value;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    propagate(node, left, a, mid, right, mid+1, b);

    Update(left, a, mid, i, j, value);
    Update(right, mid+1, b, i, j, value);

    tree[node].PrimeCnt = tree[left].PrimeCnt + tree[right].PrimeCnt;
}


int query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return 0;
    if(i <= a && j >= b) return tree[node].PrimeCnt;

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    propagate(node, left, a, mid, right, mid+1, b);

    int q1 = query(left, a, mid, i, j);
    int q2 = query(right, mid+1, b, i, j);

    return (q1+q2);
}


int main()
{
    int TC, n, q, x;
    scanf("%d",&TC);
    PrimeGenerate();

    for(int T = 1; T <= TC; ++T)
    {
        scanf("%d %d",&n,&q);
        for(int i = 1; i <= n; i++){
            scanf("%d",&x);
            if(is_prime[x]) ara[i] = 1;
            else ara[i] = 0;
        }
		segmentTree(1, 1, n);

        printf("Case %d:\n", T);
        for(int i = 1; i <= q; ++i)
        {
            int command, x, y, val;
            scanf("%d",&command);

            if(command == 0){
                scanf("%d %d %d",&x,&y,&val);

                if(is_prime[val]) val = 1;
                else val = 0;
                Update(1, 1, n, x, y, val);
            }
            else
            {
                scanf("%d %d",&x,&y);
                int totValue = query(1, 1, n, x, y);
                printf("%d\n",totValue);
            }
        }
    }

    return 0;
}
