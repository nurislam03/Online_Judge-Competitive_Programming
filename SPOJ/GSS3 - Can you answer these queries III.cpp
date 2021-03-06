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
#define sz 50000
#define INF 1000000000


struct TREE{
    LL total_sum, left_contiguous, right_contiguous, Max;
    TREE(){
        //
    }
    TREE(LL a, LL b, LL c, LL d){
        total_sum = a, left_contiguous = b, right_contiguous = c, Max = d;
    }
};
TREE tree[sz*3];
int ara[sz+10];



void segmentTree(int node, int a, int b)
{
    if(a == b){
        tree[node].total_sum = ara[a];
        tree[node].left_contiguous  = ara[a];
        tree[node].right_contiguous = ara[a];
        tree[node].Max = ara[a];
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree(left, a, mid);
    segmentTree(right, mid+1, b);

    tree[node].total_sum = tree[left].total_sum + tree[right].total_sum;
    tree[node].left_contiguous  = max(tree[left].left_contiguous, (tree[left].total_sum+tree[right].left_contiguous));
    tree[node].right_contiguous = max(tree[right].right_contiguous, (tree[right].total_sum+tree[left].right_contiguous));
    tree[node].Max  = max(tree[left].Max, max(tree[right].Max, (tree[left].right_contiguous+tree[right].left_contiguous)));
}


void Update(int node, int a, int b, int i, int j, LL value)
{
    if(i > b || j < a) return;
    if(i <= a && j >= b){
        tree[node].total_sum = value;
        tree[node].left_contiguous  = value;
        tree[node].right_contiguous = value;
        tree[node].Max = value;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    Update(left, a, mid, i, j, value);
    Update(right, mid+1, b, i, j, value);

    tree[node].total_sum = tree[left].total_sum + tree[right].total_sum;
    tree[node].left_contiguous  = max(tree[left].left_contiguous, (tree[left].total_sum+tree[right].left_contiguous));
    tree[node].right_contiguous = max(tree[right].right_contiguous, (tree[right].total_sum+tree[left].right_contiguous));
    tree[node].Max  = max(tree[left].Max, max(tree[right].Max, (tree[left].right_contiguous+tree[right].left_contiguous)));
}



// (a,b) -> state range.
// (i,j) -> query range.
TREE query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return TREE(-INF, -INF, -INF, -INF);
    if(i <= a && j >= b) return tree[node];

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    TREE q1 = query(left, a, mid, i, j);
    TREE q2 = query(right, mid+1, b, i, j);

    TREE temp;
    temp.total_sum = (q1.total_sum + q2.total_sum);
    temp.left_contiguous = max(q1.left_contiguous, (q1.total_sum+q2.left_contiguous));
    temp.right_contiguous = max(q2.right_contiguous, (q2.total_sum+q1.right_contiguous));
    temp.Max = max(q1.Max, max(q2.Max, (q1.right_contiguous+q2.left_contiguous)));

    return temp;
}





int main()
{
    int n, q;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        scanf("%d",&ara[i]);
    }
    segmentTree(1, 1, n);

    scanf("%d",&q);
    for(int i = 1; i <= q; ++i)
    {
        int command, x, y;
        scanf("%d %d %d",&command, &x, &y);

        if(command == 0){
            Update(1, 1, n, x, x, y);
        }
        else{
            TREE rangeProperty = query(1, 1, n, x, y);
            printf("%lld\n", rangeProperty.Max);
        }
    }

    return 0;
}
