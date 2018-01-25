#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;
#define LL long long
#define ULL unsigned long long
#define read(nm)        freopen(nm, "r", stdin)
#define write(nm)       freopen(nm, "w", stdout)



int main()
{
    //ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    read("input.txt");
    write("output.txt");

    int T;
    scanf("%d",&T);

    for(int t = 1; t <= T; t++)
    {
        LL cats,dogs,legs;
        scanf("%lld %lld %lld",&cats,&dogs,&legs);

        ULL minPossibleLegs,maxPossibleLegs,minAnimaleCnt;
        minAnimaleCnt = dogs;
        if((dogs*2) < cats)  minAnimaleCnt += (cats-(dogs*2));

        minPossibleLegs = (minAnimaleCnt*4);
        maxPossibleLegs = ((cats + dogs) * 4);

        if((legs >= minPossibleLegs && legs <= maxPossibleLegs) && legs % 4 == 0)
            printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
