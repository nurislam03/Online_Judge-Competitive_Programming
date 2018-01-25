
/*
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
#define sz 200000
#define LL long long
#define ULL unsigned long long

//pair <int, char> pii;
vector < pair<int, char> > Org;
vector <int> In;

map <int, int> Cmprsd_Map,MapSwitch;
int ara[sz+10];
int BIT[sz+10];
int id = 0;
int totCnt = 0;


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
    if(Target > totCnt) return -1;

    int Mid,tmp = 0,cnt = 0,res = 0;
    while(Min <= Max && cnt < 30)
    {
        cnt++;
        Mid = (Min + Max)/2;
        tmp = query(Mid);

        if(tmp >= Target)
        {
            Max = Mid;
            res = Mid;
        }
        else Min = Mid+1;
    }

    return Min;
}



int main()
{
    int Q,x;
    scanf("%d",&Q);

    char ch;
    char str[3];
    for(int i = 1; i <= Q; i++)
    {
        scanf("%s %d",str, &x);
        ch = str[0];

        Org.push_back(make_pair(x, ch));
        In.push_back(x);
    }
    sort(In.begin(), In.end());

    id = 0;
    for(int i = 0; i < In.size(); ++i)
    {
        x = In[i];
        if(Cmprsd_Map[x] == false)
        {
            Cmprsd_Map[x] = ++id;
            ara[id] = x;
        }
    }

    int ans = 0;
    for(int i = 0; i < Org.size(); i++)
    {
        ch = Org[i].second;
         x = Org[i].first;


         if(ch == 'I')
         {
             x = Cmprsd_Map[x]; // Compressed Value
             if(MapSwitch.find(x) == MapSwitch.end())
             {
                MapSwitch[x] = 1;
                totCnt++;
                Update(x, 1);
             }
         }
         else if(ch == 'D')
         {
             x = Cmprsd_Map[x]; // Compressed Value
             if(MapSwitch.find(x) != MapSwitch.end())
             {
                 MapSwitch.erase(x);
                 totCnt--;
                 Update(x, -1);
             }
         }
         else if(ch == 'K')
         {
             ans = BinarySearch(1, sz, x);

             if(ans == -1) printf("invalid\n");
             else
             {
                 ans = ara[ans];
                 printf("%d\n",ans);
             }
         }
         else
         {
             x = Cmprsd_Map[x]; // Compressed Value
             ans = query(x-1);
             printf("%d\n",ans);
         }
    }



    return 0;
}
