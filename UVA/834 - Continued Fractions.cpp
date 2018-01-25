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
    int num, deno;
    while(scanf("%d %d",&num, &deno) != EOF) //43,19
    {
        printf("[%d;",num/deno);    // [2;
        num %= deno;                // num == 5, deno == 19;
        swap(num, deno);            // num == 19, deno = 5

        while(deno != 1)
        {
            printf("%d,",num/deno);  // [2;3,1,4
            num %= deno;             // num = 4 , deno = 5 ..... so on
            swap(num, deno);         // num = 5, deno = 4  ..... so on
        }
        printf("%d]\n",num);         //[2: 3,1,4]
    }

    return 0;
}
