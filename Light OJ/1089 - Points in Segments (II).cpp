#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

#define read(nm)   freopen(nm, "r", stdin)
#define write(nm)  freopen(nm, "w", stdout)
#define LL         long long
#define ULL        unsigned long long
#define mod        1000003
#define sz         150005


struct TREE{
    long long propagteValue;
    long long sum;
};
TREE tree[sz*4];
map <int, int> Map;
vector <int> V;
int ara[50000+10][3];
int QueryValue[50000+10];


void segmentTree_Building(int node, int a, int b)
{
    if(a == b){
        tree[node].sum = 0;
        tree[node].propagteValue = 0;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree_Building(left, a, mid);
    segmentTree_Building(right, mid+1, b);

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
void Update(int node, int a, int b, int i, int j, int value)
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


int query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return 0;
    if(i <= a && j >= b) return tree[node].sum;

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
    //read("input.txt");
    //write("output.txt");
    int TC, n, q;
    scanf("%d",&TC);

    for(int T = 1; T <= TC; ++T)
    {
        scanf("%d %d",&n,&q);
        V.clear();
        Map.clear();

        int x, y;
        for(int i = 1; i <= n; ++i){
            scanf("%d %d",&x,&y);
            V.push_back(x);
            V.push_back(y);

            ara[i][0] = x;
            ara[i][1] = y;
        }
        for(int i = 1; i <= q; ++i)
        {
            scanf("%d",&x);
            V.push_back(x);
            QueryValue[i] = x;
        }
        sort(V.begin(), V.end());

        int id = 0;
        for(int i = 0; i < V.size(); ++i){
            if(Map.find(V[i]) == Map.end()) Map[V[i]] = ++id;
        }

        segmentTree_Building(1, 1, id);


        for(int i = 1; i <= n; ++i)
        {
            x = ara[i][0];
            y = ara[i][1];

            x = Map[x];
            y = Map[y];
            Update(1, 1, id, x, y, 1);
        }

        printf("Case %d:\n", T);
        for(int i = 1; i <= q; ++i)
        {
            x = QueryValue[i];
            x = Map[x];

            int total = query(1, 1, id, x, x);
            printf("%d\n",total);
        }
    }

    return 0;
}
