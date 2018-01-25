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

    char s[20];
    while(scanf("%s",s) != EOF)
    {
        int len = strlen(s);
        sort(s, s+len);

        int i = 0;
        for(int i = 0; i < len; i++)
        {
            if(s[i] != '0')
            {
                swap(s[0], s[i]);
                break;
            }
        }

        LL a,b;
        istringstream bb(s);
        bb >> b; // convet sring to long long number

        sort(s, s+len);
        reverse(s, s+len);

        istringstream aa(s);
        aa >> a;

        printf("%lld - %lld = %lld = 9 * %lld\n",a, b, (a-b), (a-b)/9);
    }

    return 0;
}
