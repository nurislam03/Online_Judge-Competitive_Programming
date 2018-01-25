#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define sz 10000
int ara[10];

int main()
{

    int two,three,five,six;
    /*int x;
    for(int i = 1; i <= 4; i++)
    {
        scanf("%d",&x);
        ara[i] = 0;
    }*/


    cin >> two >> three >> five >> six;

    int cnt256 = 100000000;
    cnt256 = min(two, five);
    cnt256 = min(cnt256, six);

    two -= cnt256;
    five -= cnt256;
    six -= cnt256;

    int cnt32 = 100000000;
    cnt32 = min(three, two);

    ULL ans = (cnt32*32) + (cnt256*256);
    cout << ans << endl;

    return 0;
}
