#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>


using namespace std;
#define LL long long
#define sz 100000
int ara[sz+10];
LL Tree[sz+10];
int n,q;


void Update(int idx, int val)
{
    while(idx <= n)
    {
        Tree[idx] += val;
        idx += (idx & (-idx));
    }
}


LL query(int idx)
{
    LL sum = 0;
    while(idx > 0)
    {
        sum += Tree[idx];
        idx -= (idx & (-idx));
    }
    return sum;
}


int main()
{
    scanf("%d",&n);
    scanf("%d",&q);

    memset(Tree, 0, sizeof(Tree));
    memset(ara, 0, sizeof(ara));

    int x,y;
    LL sum = 0,tmp,tmp1,tmp2;
    for(int i = 1; i <= q; ++i)
    {
        scanf("%d %d",&x,&y);

        if(x<=y)
        {
            Update(x , 1);
            Update(y+1 , -1);
        }
        else
        {
            Update(1 , 1);
            Update(y+1 , -1);
            Update(x , 1);
        }
    }


    for(int i = 1; i <= n; i++)
    {

        tmp1 = query(i);

        if(tmp1 > 1)
        {
            sum++;
        }
    }

    printf("%lld\n",sum);

    return 0;
}
