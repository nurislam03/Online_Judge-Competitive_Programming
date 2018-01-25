#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define ULL unsigned long long
#define LL long long
#define sz 1000
int ara[50];
int ara2[50];


int main()
{

    string s,ss;
    cin >> s;

    memset(ara, 0, sizeof(ara));
    memset(ara2, 0, sizeof(ara2));

    for(int i = 0; s[i]; i++)
    {
        int k = s[i] - 'a';
        k = k+1;

        ara[k]++;
    }

    cin >> ss;
    for(int i = 0; ss[i]; i++)
    {
        int kk = ss[i] - 'a';
        kk = kk+1;

        ara2[kk]++;
    }

    int ans = 0;
    bool flag = false;

    for(int i = 1; i <= 26; i++)
    {
        int a = ara[i];
        int b = ara2[i];

        if(a == 0 || b == 0) continue;
        flag = true;
        ara2[i] = 0;

        ans += min(a, b);
    }

    for(int i = 1; i <= 26; i++)
    {
        if(ara2[i] != 0)
        {
             flag = false;
             break;
        }
    }

    if(flag) cout << ans << endl;
    else cout << "-1"<< endl;

    return 0;
}
