
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


struct TREE{
    LL sum;
};
TREE tree[2*sz*4];
LL qr[2*sz+5][4];
LL ara[2*sz+10];


void segmentTree(int node, int a, int b)
{
    if(a == b){
        tree[node].sum = ara[a];
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree(left, a, mid);
    segmentTree(right, mid+1, b);

    tree[node].sum = tree[left].sum + tree[right].sum;
}


// (a,b) -> state range.
// (i,j) -> query range.
void Update(int node, int a, int b, int i, int j, int value)
{
    if(i > b || j < a) return;
    if(i <= a && j >= b){
        tree[node].sum = 0;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    Update(left, a, mid, i, j, value);
    Update(right, mid+1, b, i, j, value);

    tree[node].sum = tree[left].sum + tree[right].sum;
}


int query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return 0;
    if(i <= a && j >= b) return tree[node].sum;

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    int q1 = query(left, a, mid, i, j);
    int q2 = query(right, mid+1, b, i, j);

    return (q1+q2);
}


map <int, int> Map;

int main()
{
    //freopen("circlecross.in","r",stdin);
    //freopen("circlecross.out","w",stdout);

    int TC, n, q, x, y;
    scanf("%d",&n);
    memset(ara, 0, sizeof ara);
    memset(qr, 0, sizeof qr);
    Map.clear();

    for(int i = 1; i <= 2*n; ++i)
    {
        scanf("%d",&x);
        if(Map.find(x) == Map.end()){
            Map[x] = i;
            qr[i][1] = i;
            ara[i] = 1;
        }
        else{
            x = Map[x];
            qr[x][2] = i;
            ara[i] = -1;
        }
    }
    segmentTree(1, 1, 2*n);


    LL totValue = 0;
    for(int i = 1; i <= 2*n; i++)
    {
        x = qr[i][1];
        y = qr[i][2];
        if(x == 0) continue;

        totValue += query(1, 1, 2*n, x, y);
        Update(1, 1, 2*n, x, x, 0);
        Update(1, 1, 2*n, y, y, 0);
    }
    printf("%lld\n",totValue);

    return 0;
}
