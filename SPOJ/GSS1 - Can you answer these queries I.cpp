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
        //cout << a << " tot = " << tree[node].total << " leftCont = " << tree[node].left_contiguous << "rightCont = " << tree[node].right_contiguous << " Max = " << tree[node].Max << endl;
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
    //cout << "node = " << node << " tot = " << tree[node].total << "leftConti = " << tree[node].left_contiguous << " rightConti = "<< tree[node].right_contiguous << "totCont =" << tree[node].total_contiguous << " Max = " << tree[node].Max << endl;
}

// (a,b) -> state range.
// (i,j) -> query range.
TREE query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return TREE(-INF, -INF, -INF, -INF);
    if(i <= a && j >= b) {
        //cout << "a & b = " << a << " " << b << " tot = " << tree[node].total << " leftC = " << tree[node].left_contiguous  << " rightC = "<< tree[node].right_contiguous<< " Max = " << tree[node].Max << endl;
        return tree[node];
    }

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

    //cout <<"a&b =" << a << " " << b << " tot =" << temp.total << " leftCont = " << temp.left_contiguous << "rightCont = " <<temp.right_contiguous << " totalConti = " << temp.total_contiguous << " Max = " << temp.Max << endl;
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
        int x, y;
        scanf("%d %d",&x,&y);

        TREE rangeProperty = query(1, 1, n, x, y);
        printf("%lld\n", rangeProperty.Max);
    }

    return 0;
}
/*
8
1 2 -2 4 5 -6 9 8
5
1 5
1 8
1 3
4 6
1 8
*/
