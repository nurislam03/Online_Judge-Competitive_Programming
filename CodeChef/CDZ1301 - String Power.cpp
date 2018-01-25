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
char power[150],a[150],b[150];
int cntA[30], cntB[30], cntPow[30];

void solve()
{
    int lenA = strlen(a);
    int lenB = strlen(b);
    memset(cntA, 0, sizeof(cntA));
    memset(cntB, 0, sizeof(cntB));

    int tmp = 0;
    for(int i = 0; i < lenA; i++)
    {
        tmp = (a[i] - 'a')+1;
        cntA[tmp]++;
    }
    for(int i = 0; i < lenA; i++)
    {
        tmp = (b[i] - 'a')+1;
        cntB[tmp]++;
    }


    for(int i = 1; i <= 26; i++)
    {
        int m = min(cntA[i], cntB[i]);
        cntA[i] -= m;
        cntB[i] -= m;
    }

    int powlen = strlen(power);
    for(int i = 0; i < powlen; i++)
    {
        tmp = (power[i]-'a')+1;
        cntPow[tmp] = i;
    }

    int sumA = 0, sumB = 0;
    for(int i = 1; i <= 26; i++)
    {
        if(cntA[i] == 0) continue;

        sumA += cntPow[i];
    }

    for(int i = 1; i <= 26; i++)
    {
        if(cntB[i] == 0) continue;

        sumB += cntPow[i];
    }

    if(sumA == sumB) printf("TIE\n");
    else if(sumA > sumB) printf("ALICE\n");
    else printf("BOB\n");
}

int main()
{
    //read("input.txt");
    //write("output.txt");

    int n;
    scanf("%d",&n);
    scanf("%s",power);

    while(n--)
    {
        scanf("%s",a);
        scanf("%s",b);

        solve();
    }

    return 0;
}
