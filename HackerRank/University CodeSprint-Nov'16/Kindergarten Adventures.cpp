#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
#define LL long long
#define sz 200000
int ara[sz+100];



int main()
{
   int n,x;
   scanf("%d",&n);
   for(int i = 1; i <= n; i++)
   {
       scanf("%d",&x);
       ara[i] = x;
   }

   for(int i = 1,j = n+1; i <= n; i++,j++)
   {
       ara[j] = ara[i];
   }

   int ans = 0,tmp = 0;
   for(int i = 1; i <= n; i++)
   {
       int cnt = 0,loop = 1;
       for(int k = i; loop <= n; k++)
       {
           if((ara[k]-(loop-1)) <= 0) cnt++;
           loop++;
       }
       if(cnt > tmp)
       {
           tmp = cnt;
           ans = i;
       }
   }
   printf("%d\n",ans);
   return 0;
}
