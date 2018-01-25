
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)



int main()
{
    /* use only cin/cout when u use next 2 lines */
    ios_base::sync_with_stdio(false); // only cin/cout
    cin.tie(NULL); cout.tie(NULL);   // only cin/cout
    //read("input.txt");
    //write("output.txt");

    int tCase;
    scanf("%d",&tCase);

    while(tCase--)
    {
        int n,preRequisite,Max = 0;
        scanf("%d",&n);
        for(int i = 1; i <= n; i++)
        {
            scanf("%d",&preRequisite);
            if(preRequisite > Max) Max = preRequisite;
        }
        int ans = n-Max;
        printf("%d\n",ans);
    }

    return 0;
}
