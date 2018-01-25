#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;

#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define LL long long
#define Size 100005
#define INF (1<<30)
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int tCase;
    scanf("%d",&tCase);

    while(tCase--)
    {
        int friends,box;
        scanf("%d %d",&friends, &box);

        LL totChocolate = 0;
        while(box--)
        {
            int chocolate = 1, numOfMiniBox, miniBox;
            scanf("%d",&numOfMiniBox);

            for(int i = 1; i <= numOfMiniBox; ++i)
            {
                scanf("%d",&miniBox);
                chocolate = ((chocolate * miniBox) % friends);
            }
            totChocolate += (chocolate % friends);
        }

        LL ans = totChocolate%friends;
        printf("%lld\n",ans);
    }

    return 0;
}
