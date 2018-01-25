
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define mod 1000003

#define sz 100
LL ara[sz+10];
LL Free[2000000+10];
priority_queue<int , vector<int> , greater<int> > Time;



LL unUsedCnt(int t)
{
    LL cnt = 0;
    while(!Time.empty())
    {
        LL EndTime = Time.top();
        if(EndTime < t)
        {
            cnt += Free[EndTime];
            Free[EndTime] = 0;
            Time.pop();
        }
        else break;
    }

    return cnt;
}



int main()
{
   int n,q,t,k,d;
   cin >> n >> q;

   memset(ara, 0, sizeof(ara));
   memset(Free, 0, sizeof(Free));

   LL totUnused = n;
   for(int i = 1; i <= q; i++)
   {
       scanf("%d %d %d",&t, &k, &d);

       totUnused += unUsedCnt(int (t));
       if(totUnused < k)
       {
           cout << "-1" << endl;
           continue;
       }

       LL endTime = (t+d)-1;
       Free[endTime] += k;
       Time.push(endTime);
       totUnused -= k;

       LL cnt = 0,sum = 0;
       for(int i = 1; i <= n; i++)
       {
           if(ara[i] < t)
           {
               ara[i] = endTime;
               sum += i;
               cnt++;
               if(cnt == k) break;
           }
       }
       cout << sum << endl;
   }

   return 0;
}
