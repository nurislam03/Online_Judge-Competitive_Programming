/*
    Tag : segment Tree. Lazy Propagation.
    Problem Description:
    Type1: 0 x y v - you have to add v to all numbers in the range of x to y (inclusive),
    where x and y are two indexes of the array.

    Type2: 1 x y - output a line containing a single integer which is the sum of
    all the array elements between x and y (inclusive).
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


struct TREE{
    long long propagteValue;
    long long sum;
};
TREE tree[sz*3];
int ara[sz+10];



void segmentTree(int node, int a, int b)
{
    if(a == b){
        tree[node].sum = ara[a];
        tree[node].propagteValue = 0;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree(left, a, mid);
    segmentTree(right, mid+1, b);

    tree[node].sum = tree[left].sum + tree[right].sum;
    tree[node].propagteValue = 0;
}


// (left, right) -> node;
// left node range -> (a1, b1);
// right node range ->(a2, b2);
void propagate(int node, int left, int a1, int b1, int right, int a2, int b2)
{
    if(tree[node].propagteValue == 0) return;

    tree[left].propagteValue  += tree[node].propagteValue;
    tree[right].propagteValue += tree[node].propagteValue;

    tree[left].sum += tree[node].propagteValue*(b1-a1+1);
    tree[right].sum += tree[node].propagteValue*(b2-a2+1);

    tree[node].propagteValue = 0;
}

// (a,b) -> state range.
// (i,j) -> query range.
void Update(int node, int a, int b, int i, int j, LL value)
{
    if(i > b || j < a) return;
    if(i <= a && j >= b){
        tree[node].sum += (b-a+1)*value;
        tree[node].propagteValue += value;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    propagate(node, left, a, mid, right, mid+1, b);

    Update(left, a, mid, i, j, value);
    Update(right, mid+1, b, i, j, value);

    tree[node].sum = tree[left].sum + tree[right].sum;
}


LL query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return 0;
    if(i <= a && j >= b) return tree[node].sum;

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    propagate(node, left, a, mid, right, mid+1, b);

    LL q1 = query(left, a, mid, i, j);
    LL q2 = query(right, mid+1, b, i, j);

    return (q1+q2);
}


int main()
{
    int TC, n, q;
    scanf("%d",&TC);

    for(int T = 1; T <= TC; ++T)
    {
        memset(ara, 0, sizeof ara);
        scanf("%d %d",&n,&q);
		segmentTree(1, 1, n);

        printf("Case %d:\n", T);
        for(int i = 1; i <= q; ++i)
        {
            int command, x, y, val;
            scanf("%d",&command);

            if(command == 0)
            {
                scanf("%d %d %d",&x,&y,&val);
                x++; y++; // one based index

                Update(1, 1, n, x, y, val);
            }
            else
            {
                scanf("%d %d",&x,&y);
                x++; y++; //one based index

                LL totValue = query(1, 1, n, x, y);
                printf("%lld\n",totValue);
            }
        }
    }

    return 0;
}
