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
    int zeroCnt, oneCnt, twoCnt;
    int propagteValue;
};
TREE tree[sz*3];
char ara[sz+10];



void segmentTree(int node, int a, int b)
{
    if(a == b){
        tree[node].zeroCnt = 1;
        tree[node].oneCnt = 0;
        tree[node].twoCnt = 0;
        tree[node].propagteValue = 0;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree(left, a, mid);
    segmentTree(right, mid+1, b);

    tree[node].zeroCnt = tree[left].zeroCnt + tree[right].zeroCnt;
    tree[node].oneCnt  = tree[left].oneCnt  + tree[right].oneCnt;
    tree[node].twoCnt  = tree[left].twoCnt  + tree[right].twoCnt;
    tree[node].propagteValue = 0;
}


// (left, right) -> node;
// left node range -> (a1, b1);
// right node range ->(a2, b2);
void propagate(int node, int left, int a1, int b1, int right, int a2, int b2)
{
    if(tree[node].propagteValue == 0) return;

    tree[left].propagteValue  = (tree[left].propagteValue  + tree[node].propagteValue) % 3;
    tree[right].propagteValue = (tree[right].propagteValue + tree[node].propagteValue) % 3;

    int tmp = tree[node].propagteValue % 3;
    while(tmp--){
        swap(tree[left].zeroCnt, tree[left].oneCnt);
        swap(tree[left].zeroCnt, tree[left].twoCnt);
    }

    tmp = tree[node].propagteValue % 3;
    while(tmp--){
        swap(tree[right].zeroCnt, tree[right].oneCnt);
        swap(tree[right].zeroCnt, tree[right].twoCnt);
    }

    tree[node].propagteValue = 0;
}

// (a,b) -> state range.
// (i,j) -> query range.
void Update(int node, int a, int b, int i, int j, int value)
{
    if(i > b || j < a) return;
    if(i <= a && j >= b){
        swap(tree[node].zeroCnt, tree[node].oneCnt);
        swap(tree[node].zeroCnt, tree[node].twoCnt);

        tree[node].propagteValue = (tree[node].propagteValue + value) % 3;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    propagate(node, left, a, mid, right, mid+1, b);

    Update(left, a, mid, i, j, value);
    Update(right, mid+1, b, i, j, value);

    tree[node].zeroCnt = tree[left].zeroCnt + tree[right].zeroCnt;
    tree[node].oneCnt  = tree[left].oneCnt  + tree[right].oneCnt;
    tree[node].twoCnt  = tree[left].twoCnt  + tree[right].twoCnt;
}


LL query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return 0;
    if(i <= a && j >= b) return tree[node].zeroCnt;

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
    int TC, n, q;
    scanf("%d",&TC);

    for(int T = 1; T <= TC; ++T)
    {
        scanf("%d %d",&n,&q);
        segmentTree(1, 1, n);

        printf("Case %d:\n", T);
        for(int i = 1; i <= q; ++i)
        {
            int x, y, command;
            scanf("%d",&command);

            if(command == 0){
                scanf("%d %d",&x,&y);
                x++; y++; //one based index.

                Update(1, 1, n, x, y, 1);
            }
            else if(command == 1)
            {
                scanf("%d %d",&x,&y);
                x++; y++; //one based index.
                int Divisible_By_3 = query(1, 1, n, x, y);


                printf("%d\n", Divisible_By_3);
            }
        }
    }

    return 0;
}
/*
1
52 26
0 6 30
0 33 51
0 17 40
0 3 12
1 24 50
0 0 51
1 15 34
0 20 41
0 20 48
0 5 8
0 38 51
0 46 47
1 35 38
0 24 35
0 48 51
1 32 48
1 14 39
1 4 11
0 0 49
0 6 28
0 33 38
1 2 3
1 42 46
1 1 3
1 28 43
1 5 8
*/
