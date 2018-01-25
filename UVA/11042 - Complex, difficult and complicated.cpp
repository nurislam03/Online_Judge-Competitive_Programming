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
        int a,b;
        scanf("%d %d",&a, &b);

        if(b == 0) printf("1\n");
        else if(a == 0) printf("2\n");
        else if(abs(a) == abs(b)) printf("4\n");
        else printf("TOO COMPLICATED\n");
    }

    return 0;
}
