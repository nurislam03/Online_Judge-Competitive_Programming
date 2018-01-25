
/*
  Vardict : Wrong Answer.
  Problem Name : My Girlfriends.
  Problem Link : http://devskill.com/CodingProblems/ViewProblem/121
*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
#define LL long long
#define ULL unsigned long long



int main()
{

    LL t;
    scanf("%lld",&t);

    for(int T = 1; T <= t; T++)
    {
        LL n,d,m,l,res;
        scanf("%lld %lld %lld %lld",&n,&d,&m,&l);

        bool RES = false;
        LL po1 = 0,po2 = 0,pos1 = 0,pos2 = 0;
        for(int i = 1; i <= n; i++)
        {
            pos1 = (i-1) * m;
            pos2 = ((i-1) * m) + l;


            if(po1 < pos1)
            {
                if(po1 % d == 0 && po1 >= d)
                {
                    res = po1;
                    RES = true;
                    break;
                }
            }

            po1 = pos2+1;

        }
        if(RES) printf("Case %d: %lld\n",T,res);
        else printf("Case %d: %lld\n",T,po1);
    }

    return 0;
}
