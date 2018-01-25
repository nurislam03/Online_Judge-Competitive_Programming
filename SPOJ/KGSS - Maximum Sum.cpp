#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

#define LL    long long
#define ULL   unsigned long long
#define INF   (1<<30)
#define mod   1000003
#define sz    100000


struct TREE{
    int First_Max_Val;
    int Second_Max_Val;

    TREE(){}
    TREE(int a, int b){
        First_Max_Val = a;
        Second_Max_Val = b;
    }
};
TREE tree[sz*3];
int ara[sz+10];


TREE Set_Two_Max_Value(TREE a, TREE b)
{
    TREE tmp;
    if(a.First_Max_Val > b.First_Max_Val){
        tmp.First_Max_Val = a.First_Max_Val;
        tmp.Second_Max_Val = max(b.First_Max_Val, a.Second_Max_Val);
    }
    else{
        tmp.First_Max_Val = b.First_Max_Val;
        tmp.Second_Max_Val = max(a.First_Max_Val, b.Second_Max_Val);
    }
    return tmp;
}


void segmentTree(int node, int a, int b)
{
    if(a == b){
        tree[node].First_Max_Val = ara[a];
        tree[node].Second_Max_Val = -INF;
        //tree[node].SumOf_Two_MaxNum = 0;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree(left, a, mid);
    segmentTree(right, mid+1, b);

    tree[node] = Set_Two_Max_Value(tree[left], tree[right]);
}


// (a,b) -> state range.
// (i,j) -> query range.
void Update(int node, int a, int b, int i, int j, int value)
{
    if(i > b || j < a) return;
    if(i <= a && j >= b){
        tree[node].First_Max_Val = value;
        tree[node].Second_Max_Val = -INF;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    Update(left, a, mid, i, j, value);
    Update(right, mid+1, b, i, j, value);

    tree[node] = Set_Two_Max_Value(tree[left], tree[right]);
}


TREE query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return TREE(-INF, -INF);
    if(i <= a && j >= b) return tree[node];

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    TREE q1 = query(left, a, mid, i, j);
    TREE q2 = query(right, mid+1, b, i, j);

    TREE tmp = Set_Two_Max_Value(q1, q2);
    return tmp;
}


int main()
{
    int n, q;
    while(scanf("%d",&n) != EOF)
    {
        for(int i = 1; i <= n; i++){
            scanf("%d",&ara[i]);
        }
        segmentTree(1, 1, n);

        scanf("%d",&q);
        for(int i = 1; i <= q; ++i)
        {
            char command[4];
            int x, y, val;
            scanf("%s",command);

            if(command[0] == 'U'){
                scanf("%d %d",&x, &val);
                Update(1, 1, n, x, x, val);
            }
            else
            {
                scanf("%d %d",&x,&y);
                TREE rangeProperty = query(1, 1, n, x, y);
                printf("%d\n", rangeProperty.First_Max_Val + rangeProperty.Second_Max_Val);
            }
        }
    }

    return 0;
}
