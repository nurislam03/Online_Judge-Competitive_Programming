#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define PI 3.14159265358979323846

typedef long long ll ;
typedef unsigned long long ull ;

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction

int freqCnt[200000+10], arr[100000+10], conjecutiveOccurrence[100000+10];
int N , Q;


struct TREE{
    int MaxValue;
};
TREE tree[100000*4];


void segmentTree(int node, int a, int b)
{
    if(a == b){
        tree[node].MaxValue = conjecutiveOccurrence[a];
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree(left, a, mid);
    segmentTree(right, mid+1, b);

    tree[node].MaxValue = max(tree[left].MaxValue, tree[right].MaxValue);
}


long long query(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return -INF;
    if(i <= a && j >= b) return tree[node].MaxValue;

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    long long q1 = query(left, a, mid, i, j);
    long long q2 = query(right, mid+1, b, i, j);

    return max(q1, q2);
}




int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while( scanf("%d",&N)==1 && N!=0 )
    {
        memset(freqCnt, 0, sizeof freqCnt);
        scanf("%d",&Q);

        scanf("%d",&arr[1]);
        arr[1] += 100000;
        int lastNumber = arr[1];
        freqCnt[arr[1]]++;
        conjecutiveOccurrence[1] = 1;

        for(int i=2; i <= N; i++)
        {
            scanf("%d",&arr[i]);
            arr[i] += 100000;

            if(lastNumber == arr[i]){
                freqCnt[lastNumber]++;
                conjecutiveOccurrence[i] = conjecutiveOccurrence[i-1] + 1;
            }
            else{
                lastNumber = arr[i];
                freqCnt[lastNumber]++;
                conjecutiveOccurrence[i] = 1;
            }
        }
        segmentTree(1, 1, N);

        for(int i = 1; i <= Q; i++)
        {
            int x, y;
            scanf("%d %d",&x, &y);
            long long Max_conjecutive_in_leftPart = min((freqCnt[arr[x]] - (conjecutiveOccurrence[x] - 1)), (y-(x-1)));
            long long Max_in_completeConjecutiveRange = query(1, 1, N, x+Max_conjecutive_in_leftPart, y);
            long long ans = max(Max_conjecutive_in_leftPart, Max_in_completeConjecutiveRange);
            printf("%lld\n",ans);
        }

    }
    return 0;
}
