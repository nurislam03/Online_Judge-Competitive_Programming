

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
#define sz 40000


struct TREE{
    int remainingOpne;
    int remainingClose;
};
TREE tree[sz*4];
char ara[sz+10];



void segmentTree(int node, int a, int b)
{
    if(a == b){
        tree[node].remainingOpne = tree[node].remainingClose = 0;
        if(ara[a-1] == '(') tree[node].remainingOpne  = 1;
        if(ara[a-1] == ')') tree[node].remainingClose = 1;
        //cout << " a = " << a << "  node = " << node  << " : " << "arr[a] = " << ara[a-1] << tree[node].remainingOpne << " " << tree[node].remainingClose << endl;
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    segmentTree(left, a, mid);
    segmentTree(right, mid+1, b);

    if(tree[right].remainingClose <= tree[left].remainingOpne){
        tree[node].remainingOpne  = (tree[left].remainingOpne - tree[right].remainingClose) + tree[right].remainingOpne;
        tree[node].remainingClose = tree[left].remainingClose;
    }
    else{
        tree[node].remainingOpne  = tree[right].remainingOpne;
        tree[node].remainingClose = (tree[right].remainingClose - tree[left].remainingOpne) + tree[left].remainingClose;
    }
}


// (a,b) -> state range.
// (i,j) -> query range.
void Update(int node, int a, int b, int i, int j)
{
    if(i > b || j < a) return;
    if(i <= a && j >= b){
        swap(tree[node].remainingOpne, tree[node].remainingClose);
        return;
    }

    int left  = (node*2);
    int right = (node*2)+1;
    int mid   = (a+b)/2;

    //propagate(node, left, a, mid, right, mid+1, b);

    Update(left, a, mid, i, j);
    Update(right, mid+1, b, i, j);

    if(tree[right].remainingClose <= tree[left].remainingOpne){
        tree[node].remainingOpne  = (tree[left].remainingOpne - tree[right].remainingClose) + tree[right].remainingOpne;
        tree[node].remainingClose = tree[left].remainingClose;
    }
    else{
        tree[node].remainingOpne  = tree[right].remainingOpne;
        tree[node].remainingClose = (tree[right].remainingClose - tree[left].remainingOpne) + tree[left].remainingClose;
    }
}



int main()
{
    int TC = 0, n, q;

    for(int TC = 1; TC <= 10; TC++)
    {
        scanf("%d",&n);
        scanf("%s",ara);
		segmentTree(1, 1, n);

        scanf("%d",&q);
        printf("Test %d:\n",TC);
        //for(int i = 0; i <= 20; i++) cout << "i = " << i << " : " << tree[i].remainingOpne << " " << tree[i].remainingClose << endl;

        for(int i = 1; i <= q; ++i)
        {
            int command;
            scanf("%d",&command);

            if(command == 0){
                if(tree[1].remainingOpne == 0 && tree[1].remainingClose == 0) printf("YES\n");
                else printf("NO\n");

            }
            else Update(1, 1, n, command, command);
        }
    }

    return 0;
}
