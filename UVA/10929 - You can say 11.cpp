#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <cmath>

using namespace std;

#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define LL long long



int main()
{
    //read("input.txt");
    //write("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    char s[1000+10];
    while(scanf("%s",s))
    {
        if(s[0] == '0' && strlen(s) == 1) break;

        int sum = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            sum = (sum * 10) + (s[i] - '0');
            sum %= 11;
        }

        if(sum % 11 == 0) printf("%s is a multiple of 11.\n",s);
        else printf("%s is not a multiple of 11.\n",s);
    }

    return 0;
}


/*
// another approach
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <cmath>

using namespace std;

#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)
#define all(ar) ar.begin(), ar.end()
#define LL long long

int main()
{
    //read("input.txt");
    //write("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    char s[10000+10];
    while(scanf("%s",s) && s[0] != '0')
    {
        int sum = 0;
        for(int i = 0; i < strlen(s); i += 2)
            sum += (s[i] - '0');

        for(int i = 1; i < strlen(s); i += 2)
                sum -= (s[i] - '0');

        if(sum % 11 == 0) printf("%s is a multiple of 11.\n",s);
        else printf("%s is not a multiple of 11.\n",s);
    }

    return 0;
}

*/
