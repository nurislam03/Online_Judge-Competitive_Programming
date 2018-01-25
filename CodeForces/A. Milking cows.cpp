#include <bits/stdc++.h>
using namespace std;

#define LL long long
int ara[200000+10];



int main()
{
    int n, x;
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%d",&ara[i]);
    }

    LL zero = 0, one = 0, zeroLoosingMilk = 0, oneLoosingMilk = 0;

    for(int i = 0; i < n; i++){
        if(ara[i] == 1) one++;
        else zeroLoosingMilk += one;
    }

    for(int i = n-1; i >= 0; i--){
        if(ara[i] == 0) zero++;
        else oneLoosingMilk += zero;
    }

    LL ans = min(zeroLoosingMilk, oneLoosingMilk);
    printf("%lld\n", ans);

    return 0;
}
