
/*

    Problem Name : Data Structure.
    Online Judge : Toph
    Problem Link : https://toph.co/p/data-structure

    Tag :
    BIT - Binary Index Tree.
    Binary Search - LowerBound.
    Map, Pair;

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
#define sz 1000000
#define LL long long
#define ULL unsigned long long


int Original[sz+10];
int BIT[sz+10];


void Update(int idx, int val)
{
    while(idx <= sz)
    {
        BIT[idx] += val;
        idx += (idx & (-idx));
    }
}

int query(int idx)
{
    int sum = 0;
    while(idx > 0)
    {
        sum += BIT[idx];
        idx -= (idx & (-idx));
    }
    return sum;
}

int BinarySearch(int Min, int Max, int Target)
{
    int res = 0, cnt = 0, tmp,Mid;
    while(Min <= Max && cnt < 50)
    {
        cnt++;
        Mid = (Min+Max)/2;
        tmp = query(Mid);

        if(tmp >= Target)
        {
            Max = Mid;
            res = Mid;
        }
        else Min = Mid+1;
    }
    return res;
}


int main()
{
    int n,x;
    scanf("%d",&n);

    for(int i = 1; i <= n; ++i)
    {
        scanf("%d",&x);
        Original[i] = x;
    }

    for(int i = 1; i <= n; i++)
    {
        Update(Original[i], 1);

        scanf("%d",&x);
        int ans = BinarySearch(1, sz, x);

        printf("%d\n",ans);
    }

    return 0;
}
