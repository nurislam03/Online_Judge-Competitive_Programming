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

#define LL long long
#define ULL unsigned long long
#define sz 10000
int nonZeroDigit[sz+10];

void Last_nonZeroDigit_Calculate()
{
    memset(nonZeroDigit, 0, sizeof(nonZeroDigit));
    nonZeroDigit[1] = 1;

    for(int i = 2; i <= 10000; i++)
    {
        nonZeroDigit[i] = nonZeroDigit[i-1]*i;
        while(nonZeroDigit[i] % 10 == 0)
            nonZeroDigit[i] /= 10;

        nonZeroDigit[i] %= 100000;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    int n;
    Last_nonZeroDigit_Calculate();

    while(scanf("%d",&n) != EOF)
    {
        printf("%5d -> %d\n",n, nonZeroDigit[n]%10);
    }

    return 0;
}
