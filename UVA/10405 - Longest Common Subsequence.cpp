/*
    Problem : UVa 10405 - Longest Common Subsequence
    Hints   : LCS
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;
#define sz 1000
int dp[sz+10][sz+10];
string a, b;


int LCS(int x, int y)
{
    if(x >= a.size() || y >= b.size())
        return 0;

    if(dp[x][y] != -1) return dp[x][y];

    if(a[x] == b[y]) return dp[x][y] = LCS(x+1, y+1)+1;
    else return dp[x][y] = max(LCS(x+1, y), LCS(x, y+1));
}

int main()
{
    while(getline(cin, a) && a.size() > 0)
    {
        getline(cin, b);
        memset(dp, -1, sizeof dp);

        int ans = LCS(0, 0);
        printf("%d\n",ans);
    }

    return 0;
}
