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
#define MOD 131071

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //read("input.txt");
    //write("output.txt");

    char ch;
    int M ;
    while(cin >> ch)
    {
        M  = ch - '0';
        while(cin >> ch)
        {
            if(ch == '#') break;
            M = (M * 2) + (ch - '0');
            M %= MOD ;
        }
        if(M) puts("NO");
        else  puts("YES");
    }

    return 0;
}
