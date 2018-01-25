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
#define sz 1000
#define LL long long
char numerator[1010];


bool is_divisible(int deno)
{
    int len = strlen(numerator);
    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        sum = (sum*10)+(numerator[i] - '0');
        sum %= deno;
    }
    return (sum%deno == 0) ? true : false;
}


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
        int n, denominator;
        scanf("%s",numerator);
        scanf("%d",&n);

        bool ok = true;
        for(int i = 1; i <= n; i++)
        {
            scanf("%d",&denominator);
            if(ok == false) continue;
            ok = is_divisible(denominator);
        }

        if(ok) printf("%s - Wonderful.\n",numerator);
        else printf("%s - Simple.\n",numerator);

    }

    return 0;
}
