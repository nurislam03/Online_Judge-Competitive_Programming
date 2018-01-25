#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
#define LL long long
#define sz 100000
int ara[sz+10] = {0};



int main()
{
    LL x,n,k;
    scanf("%lld %lld",&n,&k);

    for(int i = 1; i <= n; i++)
    {
        scanf("%lld",&x);
        ara[x] = 1;
    }

    //sort(V.begin(), V.end());

    LL cnt = 0;
    int i = 0, j = 0;

    while(i < sz)
    {
        while(ara[i] == 0 && i < sz)
        {
            i++;
        }
        if(i >= sz) break;

        if(ara[i] == 1) cnt++;

        i = i + k;
        if(i >= sz) break;
        while(ara[i] == 0) i--; //transmitter's position
        i = i + k + 1; // transmitter's last range + 1
    }

    printf("%lld\n",cnt);
}

/*
5 4
5 7 11 12 13

*/
