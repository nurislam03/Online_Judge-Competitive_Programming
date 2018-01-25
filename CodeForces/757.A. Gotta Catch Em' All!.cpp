#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
#define ULL unsigned long long
#define LL long long

//Bulbbasaur



int main()
{
    string s;
    cin >> s;

    int BB = 0,uu = 0,ll = 0,bb = 0,aa =0,ss = 0,rr = 0;

    for(int i = 0; s[i]; i++)
    {
        if(s[i] == 'B') BB++;
        else if(s[i] == 'u') uu++;
        else if(s[i] == 'l') ll++;
        else if(s[i] == 'b') bb++;
        else if(s[i] == 'a') aa++;
        else if(s[i] == 's') ss++;
        else if(s[i] == 'u') uu++;
        else if(s[i] == 'r') rr++;
    }

    //bb = bb/2;
    aa = aa/2;
    uu = uu/2;

    int ans = 0;
    ans = min(BB, min(uu, min(ll, min(bb, min(aa, min(ss, min(uu, rr)))))));
    cout << ans << endl;

    return 0;
}
