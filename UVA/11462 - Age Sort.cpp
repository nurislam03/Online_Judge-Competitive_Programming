#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <sstream>

using namespace std;
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define sz 1000
#define LL long long
int ageList[110];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");
    int n,age;
    while(scanf("%d",&n) && n)
    {
        memset(ageList, 0, sizeof ageList);
        for(int i = 1; i <= n; i++)
        {
            scanf("%d",&age);
            ageList[age]++;
        }

        bool space = false;
        for(int i = 1; i <= 100; i++)
        {
            int sameAge = ageList[i];
            for(int k = 1; k <= sameAge; k++)
            {
                if(space) printf(" %d",i);
                else printf("%d",i);

                space = true;
            }
        }
        printf("\n");
    }

    return 0;
}
