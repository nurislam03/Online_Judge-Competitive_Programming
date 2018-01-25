#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define W I64
#define sz 100
//int ara[sz+10];
vector < LL > ll,rr;

int main()
{
    int n,l,r;
    scanf("%d",&n);

    LL L = 0,R = 0,res,tot;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d %d",&l,&r);

        L += l; R += r;

        ll.push_back(l);
        rr.push_back(r);

    }

    LL beauty = abs(L - R);
    LL Max = 0;
    Max = max(Max, beauty);
    LL row = 0;

    for(int i = 0; i < n; i++)
    {
        LL totL = (L - ll[i]) + rr[i];
        LL totR = (R - rr[i]) + ll[i];

        beauty = abs(totR - totL);
        if(beauty > Max)
        {
            Max = beauty;
            row = i+1;
        }
    }

    cout << row << endl;

    return 0;
}
